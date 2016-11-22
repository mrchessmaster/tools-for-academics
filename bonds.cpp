#include <iostream>
#include <string>

using namespace std;

string toComma(int n) {
	string ret = "";
	int temp; int i=0;
	while (n > 0) {
		temp = n % 10;
		n /= 10;
		if (i%3 == 0) ret = to_string(temp) + "," + ret;
		else ret = to_string(temp) + ret;
		i++;
	}
	ret.pop_back();
	return ret;
}

int main() {
	cout << "Welcome to bond calculator" << endl;
	cout << "Enter b to begin." << endl; string in; cin >> in; 
	if (in == "b") {
		cout << "Face value: "; double fv; cin >> fv;
		cout << "At: "; double at; cin >> at; at /= 100;
		cout << "Coupon rate: "; double cp; cin >> cp; cp /= 100;
		cout << "Yield: "; double y; cin >> y; y /= 100;
		cout << "Period: "; double t; cin >> t;
		cout.precision(15);

		double np = fv*at;

		for (int i=0; i<t*2; i++) {
			double payment = fv*cp/2;
			double expense = np*y/2;
			np += expense - payment;
			cout << "-----------------------------------" << endl;
			cout << "Time: " << i+1 << endl;
			cout << "Payment: " << toComma(payment) << endl;
			cout << "Interest Expense: " << toComma(expense) << endl;
			cout << "Current N/P: " << toComma(np) << endl;
		}

	}
	return 0;
}