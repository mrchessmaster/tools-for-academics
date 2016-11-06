#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

std::map<string, string> m;

void setMap() {
	m["UUU"] = "Phe"; 
	m["CUU"] = "Leu"; 
	m["AUU"] = "Ile"; 
	m["GUU"] = "Val"; 
	m["UUC"] = "Phe"; 
	m["CUC"] = "Leu"; 
	m["AUC"] = "Ile"; 
	m["GUC"] = "Val"; 
	m["UUA"] = "Leu"; 
	m["CUA"] = "Leu"; 
	m["AUA"] = "Ile"; 
	m["GUA"] = "Val"; 
	m["UUG"] = "Leu"; 
	m["CUG"] = "Leu"; 
	m["AUG"] = "Met"; // start codon
	m["GUG"] = "Val"; 
	m["UCU"] = "Ser"; 
	m["CCU"] = "Pro"; 
	m["ACU"] = "Thr"; 
	m["GCU"] = "Ala"; 
	m["UCC"] = "Ser"; 
	m["CCC"] = "Pro"; 
	m["ACC"] = "Thr"; 
	m["GCC"] = "Ala"; 
	m["UCA"] = "Ser"; 
	m["CCA"] = "Pro"; 
	m["ACA"] = "Thr"; 
	m["GCA"] = "Ala"; 
	m["UCG"] = "Ser"; 
	m["CCG"] = "Pro"; 
	m["ACG"] = "Thr"; 
	m["GCG"] = "Ala"; 
	m["UAU"] = "Tyr"; 
	m["CAU"] = "His"; 
	m["AAU"] = "Asn"; 
	m["GAU"] = "Asp"; 
	m["UAC"] = "Tyr"; 
	m["CAC"] = "His"; 
	m["AAC"] = "Asn"; 
	m["GAC"] = "Asp"; 
	//m["UAA"] stop codon
	m["CAA"] = "Gln"; 
	m["AAA"] = "Lys"; 
	m["GAA"] = "Glu"; 
	//m["UAG"] stop codon
	m["CAG"] = "Gln"; 
	m["AAG"] = "Lys"; 
	m["GAG"] = "Glu"; 
	m["UGU"] = "Cys"; 
	m["CGU"] = "Arg"; 
	m["AGU"] = "Ser"; 
	m["GGU"] = "Gly"; 
	m["UGC"] = "Cys"; 
	m["CGC"] = "Arg"; 
	m["AGC"] = "Ser"; 
	m["GGC"] = "Gly"; 
	//m["UGA"] stop codon
	m["CGA"] = "Arg"; 
	m["AGA"] = "Arg"; 
	m["GGA"] = "Gly"; 
	m["UGG"] = "Trp"; 
	m["CGG"] = "Arg"; 
	m["AGG"] = "Arg"; 
	m["GGG"] = "Gly"; 
}

int main(){
	setMap();
	string str; cout << "RNA: "; cin >> str;
	string aa = ""; string temp; bool started = false;
	while(str.length()>0) {
		temp = str.substr(0,3);
		if (!started && temp == "AUG") {
			aa += m[temp];
			started = true;
		} else if (started && (temp == "UAA" || temp == "UAG" || temp == "UGA")) {
			started = false;
			break;
		} else {
			aa += "-";
			aa += m[temp];
		}
		str.erase(0,3);
	}
	cout << "Peptide: " << aa << endl;
	return 0;
}