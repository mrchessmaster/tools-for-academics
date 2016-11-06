#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;
	


int main(){
	double income;
	cout << "Income: ";
	cin >> income;

	double f[4];
	double fr[5];

	f[0] = 45282;
	fr[0] = 0.15;
	f[1] = 45281;
	fr[1] = 0.205;
	f[2] = 49285;
	fr[2] = 0.26;
	f[3] = 59612;
	fr[3] = 0.29;
	fr[4] = 0.33;
	double ftax = 0;

	double fincome = income;

	for (int i=0;i<=4;i++) {
		if (fincome < f[i] || i == 4) {
			ftax += fincome*fr[i];
			break;
		} else {
			ftax += f[i]*fr[i];
			fincome -= f[i];
		}
	}

	double p[4];
	double pr[5];

	p[0] = 38210;
	pr[0] = 0.0506;
	p[1] = 38221;
	pr[1] = 0.077;
	p[2] = 11320;
	pr[2] = 0.105;
	p[3] = 18802;
	pr[3] = 0.1229;
	pr[4] = 0.147;
	double ptax = 0;

	double pincome = income;

	for (int i=0;i<=4;i++) {
		if (pincome < p[i] || i == 4) {
			ptax += pincome*pr[i];
			break;
		} else {
			ptax += p[i]*pr[i];
			pincome -= p[i];
		}
	}

	double nettax = ftax+ptax;
	double netincome = income - nettax;

	cout << "Federal Tax: " << ftax << endl;
	cout << "Provincial Tax: " << ptax << endl;
	cout << "Net Tax: " << nettax << endl;

	cout << "Net Income: " << netincome << endl;

	return 0;
}
