#include <iostream>
#include <math.h>
#include <string>

using namespace std;

// default is ordinary annuity
string ann = "END";
int pres = 6;

void calculate() {
	while (true) {
		string n_s, i_s, pv_s, pmt_s, fv_s; double n, i, pv, pmt, fv;
		cout << "N: "; cin >> n_s; if (n_s == "e") break;
		cout << "I/Y: "; cin >> i_s; if (i_s == "e") break;
		cout << "PV: "; cin >> pv_s; if (pv_s == "e") break;
		cout << "PMT: "; cin >> pmt_s; if (pmt_s == "e") break;
		cout << "FV: "; cin >> fv_s; if (fv_s == "e") break;
		cout << "------------" << endl;
		cout.precision(pres);
		cout << fixed;
		if (n_s == "c") {
			i = stod(i_s)/100; pv = stod(pv_s); pmt = stod(pmt_s); fv = stod(fv_s);
			if (pmt == 0) n = log(fv/pv)/log(1+i);
			else if (pv == 0) n = log(1 + i*fv/pmt)/log(1+i);
			else if (fv == 0) n = log(1 - i*pv/pmt)/log(1+i);
			cout << "N = " << n << endl;
		} else if (i_s == "c") {
			n = stod(n_s); pv = stod(pv_s); pmt = stod(pmt_s); fv = stod(fv_s);
			if (pmt == 0) i = pow(fv/pv,1/n)-1;
			else {
				//newtons method;
				cout << "Method not yet implemented. " << endl;
			}
			cout << "I/Y = " << i << endl;
		} else if (pv_s == "c") {
			i = stod(i_s)/100; n = stod(n_s); pmt = stod(pmt_s); fv = stod(fv_s);
			pv = pmt*(1 - pow(1+i,-n))/i + fv*pow(1+i,-n);
			cout << "PV = " << pv << endl;
		} else if (pmt_s == "c") {
			i = stod(i_s)/100; n = stod(n_s); pv = stod(pv_s); fv = stod(fv_s);
			pmt = i*(fv - pv*pow(1+i,n))/(pow(1+i,n)-1);
			cout << "PMT = " << pmt << endl;
		} else if (fv_s == "c") {
			i = stod(i_s)/100; n = stod(n_s); pv = stod(pv_s); pmt = stod(pmt_s);
			fv = pmt*(pow(1+i,n)-1)/i + pv*pow(1+i,n);
			cout << "FV = " << fv << endl;
		}
		cout << "------------" << endl;
	}
}

void settings() {
	int set;
	cout << "Enter 1 for precision, 2 for annuity mode: "; cin >> set;
	if (set == 1) {
		cout << "Significant figures of precision: "; cin >> pres;
	} else if (set == 2) {
		cout << "Enter 'END' for ordinary annuity, 'BGN' for annuity due: "; cin >> ann;
	}
}

void help() {
	cout << "For every known value, enter the value. For an unknown value, enter 'c'. " << endl;
	cout << "To exit the calculator at any time, enter 'e'. " << endl;
}

int main() {
	cout << "**********************************************************************" << endl;
	cout << "************************* (c) David Yin 2016 *************************" << endl;
	cout << "WARNING: I/O differs from standard BA II PLUS in sign interpretation. " << endl;
	while (true) {
		cout << "**********************************************************************" << endl;
		cout << "Enter 'c' for calculator, 's' for settings, h for help, 'e' to exit: "; 
		string s; cin >> s; if (s == "e") break;
		cout << "**********************************************************************" << endl;
		if (s == "c") {
			calculate();
		} else if (s == "s") {
			settings();
		} else if (s == "h") {
			help();
		}
	}
	return 0;
}