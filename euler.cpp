#include <iostream>
//#include <vector>
//#include <math.h>

using namespace std;

int main() {
	double t; double T; double Ts; double h; int n;
	cout << "t0: ";
	cin>> t;
	cout << "T0: ";
	cin>> T;
	//cout << "Ts: ";
	//cin >> Ts;
	cout << "h: ";
	cin >> h;
	cout << "n: ";
	cin >> n;
	//double k = -0.037037037;
	double Tp;
	for (int i=1; i<n+1; i++) {
		Tp = t - t*T;
		T += h*Tp;
		t += h;
		cout << "t" << i << ": " << t << endl;
		cout << "T" << i << ": " << T << endl;
	}
	return 0;
}


