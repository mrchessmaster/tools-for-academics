#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;
	
int main(){
	cout << "# of tests: ";
	int t; cin >> t;
	int sum;
	for (int j=0; j<t; j++){
		cout << "binary: ";
		string n; cin >> n;
		sum = 0;
		for(int i=0; i<n.length(); i++){
			if (n[i]=='1'){
				sum += pow(2,n.length()-i-1);
			}
		}
		cout << "decimal: " << sum << endl;
	}
	return 0;
}