#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;
	
int main(){
	// CODE TO HELP WRITE CODE:
	// string s1; string s2;
	// string code;
	// for (int i=0; i<64; i++){
	// 	cin >> s1; cin >> s2;
	// 	if (s2 == "Stop") {
	// 		code += "else if (str.substr(0,3)==\"" + s1 + "\") {encoding.erase(encoding.end()-1); break;} ";
	// 	} else {
	// 		code += "else if (str.substr(0,3)==\"" + s1 + "\") {encoding += \"" + s2 + "-\";} ";
	// 	}
	// }
	// cout << code << endl;
	
	//int t; 
	//cout << "Number of RNA substrings: ";
	//cin >> t;
	//string str = "";
	//string substr;
	//for (int i=0; i<t; i++) {
	//	cout << "Input RNA" << i+1 << ": ";
	//	cin >> substr;
	//	str += substr;
	//}
	string str; cout << "RNA: "; cin >> str;
	string encoding = "";
	while(str.length()>0) {
		if (str.substr(0,3)=="UUU") {encoding += "Phe-";} 
		else if (str.substr(0,3)=="CUU") {encoding += "Leu-";} 
		else if (str.substr(0,3)=="AUU") {encoding += "Ile-";} 
		else if (str.substr(0,3)=="GUU") {encoding += "Val-";} 
		else if (str.substr(0,3)=="UUC") {encoding += "Phe-";} 
		else if (str.substr(0,3)=="CUC") {encoding += "Leu-";} 
		else if (str.substr(0,3)=="AUC") {encoding += "Ile-";} 
		else if (str.substr(0,3)=="GUC") {encoding += "Val-";} 
		else if (str.substr(0,3)=="UUA") {encoding += "Leu-";} 
		else if (str.substr(0,3)=="CUA") {encoding += "Leu-";} 
		else if (str.substr(0,3)=="AUA") {encoding += "Ile-";} 
		else if (str.substr(0,3)=="GUA") {encoding += "Val-";} 
		else if (str.substr(0,3)=="UUG") {encoding += "Leu-";} 
		else if (str.substr(0,3)=="CUG") {encoding += "Leu-";} 
		else if (str.substr(0,3)=="AUG") {encoding += "Met-";} 
		else if (str.substr(0,3)=="GUG") {encoding += "Val-";} 
		else if (str.substr(0,3)=="UCU") {encoding += "Ser-";} 
		else if (str.substr(0,3)=="CCU") {encoding += "Pro-";} 
		else if (str.substr(0,3)=="ACU") {encoding += "Thr-";} 
		else if (str.substr(0,3)=="GCU") {encoding += "Ala-";} 
		else if (str.substr(0,3)=="UCC") {encoding += "Ser-";} 
		else if (str.substr(0,3)=="CCC") {encoding += "Pro-";} 
		else if (str.substr(0,3)=="ACC") {encoding += "Thr-";} 
		else if (str.substr(0,3)=="GCC") {encoding += "Ala-";} 
		else if (str.substr(0,3)=="UCA") {encoding += "Ser-";} 
		else if (str.substr(0,3)=="CCA") {encoding += "Pro-";} 
		else if (str.substr(0,3)=="ACA") {encoding += "Thr-";} 
		else if (str.substr(0,3)=="GCA") {encoding += "Ala-";} 
		else if (str.substr(0,3)=="UCG") {encoding += "Ser-";} 
		else if (str.substr(0,3)=="CCG") {encoding += "Pro-";} 
		else if (str.substr(0,3)=="ACG") {encoding += "Thr-";} 
		else if (str.substr(0,3)=="GCG") {encoding += "Ala-";} 
		else if (str.substr(0,3)=="UAU") {encoding += "Tyr-";} 
		else if (str.substr(0,3)=="CAU") {encoding += "His-";} 
		else if (str.substr(0,3)=="AAU") {encoding += "Asn-";} 
		else if (str.substr(0,3)=="GAU") {encoding += "Asp-";} 
		else if (str.substr(0,3)=="UAC") {encoding += "Tyr-";} 
		else if (str.substr(0,3)=="CAC") {encoding += "His-";} 
		else if (str.substr(0,3)=="AAC") {encoding += "Asn-";} 
		else if (str.substr(0,3)=="GAC") {encoding += "Asp-";} 
		else if (str.substr(0,3)=="UAA") {encoding.erase(encoding.end()-1); break;} 
		else if (str.substr(0,3)=="CAA") {encoding += "Gln-";} 
		else if (str.substr(0,3)=="AAA") {encoding += "Lys-";} 
		else if (str.substr(0,3)=="GAA") {encoding += "Glu-";} 
		else if (str.substr(0,3)=="UAG") {encoding.erase(encoding.end()-1); break;} 
		else if (str.substr(0,3)=="CAG") {encoding += "Gln-";} 
		else if (str.substr(0,3)=="AAG") {encoding += "Lys-";} 
		else if (str.substr(0,3)=="GAG") {encoding += "Glu-";} 
		else if (str.substr(0,3)=="UGU") {encoding += "Cys-";} 
		else if (str.substr(0,3)=="CGU") {encoding += "Arg-";} 
		else if (str.substr(0,3)=="AGU") {encoding += "Ser-";} 
		else if (str.substr(0,3)=="GGU") {encoding += "Gly-";} 
		else if (str.substr(0,3)=="UGC") {encoding += "Cys-";} 
		else if (str.substr(0,3)=="CGC") {encoding += "Arg-";} 
		else if (str.substr(0,3)=="AGC") {encoding += "Ser-";} 
		else if (str.substr(0,3)=="GGC") {encoding += "Gly-";} 
		else if (str.substr(0,3)=="UGA") {encoding.erase(encoding.end()-1); break;} 
		else if (str.substr(0,3)=="CGA") {encoding += "Arg-";} 
		else if (str.substr(0,3)=="AGA") {encoding += "Arg-";} 
		else if (str.substr(0,3)=="GGA") {encoding += "Gly-";} 
		else if (str.substr(0,3)=="UGG") {encoding += "Trp-";} 
		else if (str.substr(0,3)=="CGG") {encoding += "Arg-";} 
		else if (str.substr(0,3)=="AGG") {encoding += "Arg-";} 
		else if (str.substr(0,3)=="GGG") {encoding += "Gly-";} 		
		str.erase(0,3);
	}
	cout << "Peptide: " << encoding << endl;
	return 0;
}