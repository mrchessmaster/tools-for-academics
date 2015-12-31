#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
	
int main(){
	cout << "Country 1: "; string C1; cin >> C1;
	cout << "Country 2: "; string C2; cin >> C2;
	cout << "Product 1: "; string P1; cin >> P1;
	cout << "Product 2: "; string P2; cin >> P2;
	double gc; 
	double gg; 
	double pc; 
	double pg; 

	cout << "Q " << C1 << " " << P1 << ":" << " ";
	cin >> gc;
	cout << "Q " << C1 << " " << P2 << ":" << " ";
	cin >> gg;
	cout << "Q " << C2 << " " << P1 << ":" << " ";
	cin >> pc;
	cout << "Q " << C2 << " " << P2 << ":" << " ";
	cin >> pg;
	double gcc = gc/(gc+gg);
	double ggc = gg/(gc+gg);
	double pcc = pc/(pc+pg);
	double pgc = pg/(pc+pg);

	if (gc > pc) {
		cout << C1 << " has absolute advantage in producing " << P1 << "." << endl;
	} else if (gc == pc) {
		cout << "They have equal absolute advantage in producing " << P1 << "." << endl;
	} else { 
		cout << C2 << " has absolute advantage in producing " << P1 << "." << endl;
	}
	if (gg > pg) {
		cout << C1 << " has absolute advantage in producing " << P2 << "." << endl;
	} else if (gg == pg) {
		cout << "They have equal absolute advantage in producing " << P2 << "." << endl;
	} else { 
		cout << C2 << " has absolute advantage in producing " << P2 << "." << endl;
	} 
	if (gcc > pcc) {
		cout << C1 << " has comparative advantage in producing " << P1 << "." << endl;
	} else if (gcc == pcc) {
		cout << "They have equal comparative advantage in producing " << P1 << "." << endl;
	} else { 
		cout << C2 << " has comparative advantage in producing " << P1 << "." << endl;
	}
	if (ggc > pgc) {
		cout << C1 << " has comparative advantage in producing " << P2 << "." << endl;
	} else if (ggc == pgc) {
		cout << "They have equal comparative advantage in producing " << P2 << "." << endl;
	} else { 
		cout << C2 << " has comparative advantage in producing " << P2 << "." << endl;
	}


	return 0;
}