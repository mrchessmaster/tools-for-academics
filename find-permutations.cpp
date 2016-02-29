#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;
	
int main(){
	string s; cin >> s;
	vector<string> v;
	sort(s.begin(), s.end());
	do {
		v.push_back(s);
	} while (next_permutation(s.begin(), s.end()));  
	unique(v.begin(),v.end());   
	int size = v.size();
	cout << size << endl;
	return 0;
}