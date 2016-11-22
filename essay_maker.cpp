#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<string, string> m;

int main() {
	cout << "Welcome to essay writer. Type 'generate' to generate sample." << endl;
	string line; string cat;
	while (1) {
		cout << "Thoughts: " << endl;
		getline(cin,line);
		if (line == "generate") break;
		cout << "Which category? (";
		for (map<string,string>::iterator it=m.begin(); it != m.end(); it++) {
			cout << it->first << ", ";
		}
		cout << "...)" << endl;

		getline(cin,cat);
		m[cat] += line;
		
	}
	cout << "Order? (";
	for (map<string,string>::iterator it=m.begin(); it != m.end(); it++) {
		cout << it->first << " ";
	}
	cout << ")" << endl;
	cout << endl;
	
	vector<string> temp; string t;
	for (int i=0; i<m.size(); i++) {
		cin >> t; temp.push_back(t);
	}

	for (int i=0; i<m.size(); i++) {
		cout << temp[i] << ": " << endl;
		cout << m[temp[i]] << endl;
		cout << endl;
	}
	return 0;
}