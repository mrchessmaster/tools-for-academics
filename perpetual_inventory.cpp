#include <iostream>

using namespace std;

int main() {
	cout << "**********************************************************************" << endl;
	cout << "************************* (c) David Yin 2016 *************************" << endl;
	cout << "******************** Perpetual Inventory Calculator ******************" << endl;
	cout << "**********************************************************************" << endl;
	cout << "Enter 'FIFO' for first-in first-out, 'WA' for weighted-average: ";
	string s; cin >> s;
	if (s == "WA") {
		cout << "Format: 3 inputs per line: " << endl;
		cout << "1st: 'e' for end, 'b' for buy, 's' for sell" << endl;
		cout << "2nd: units to buy/sell" << endl;
		cout << "3rd: price per unit" << endl;
		cout << "**********************************************************************" << endl;

		char c; double tempunits; double tempcost;
		double total_units = 0;
		double total_inv = 0;
		double total_sales = 0;
		double total_cogs = 0;
		double avg_cost = 0;
		while (true) {
			cin >> c; 
			if (c == 'e') break;
			if (c == 'b') {
				cin >> tempunits >> tempcost;
				total_units += tempunits;
				total_inv += tempunits*tempcost;
				avg_cost = total_inv / total_units;
			} else if (c == 's') {
				cin >> tempunits >> tempcost;
				total_units -= tempunits;
				total_sales += tempunits*tempcost;
				total_inv -= tempunits*avg_cost;
				total_cogs += tempunits*avg_cost;
			}
		}
		cout << "---------------------------------------" << endl;
		cout << "Total units remaining: " << total_units << endl;
		cout << "Average cost of inventory: " << avg_cost << endl;
		cout << "Total inventory remaining: " << total_inv << endl;
		cout << "Cost of goods sold: " << total_cogs << endl;
		cout << "Total sales: " << total_sales << endl;
		cout << "Gross margin: " << total_sales - total_cogs << endl;
	}
	return 0;
}