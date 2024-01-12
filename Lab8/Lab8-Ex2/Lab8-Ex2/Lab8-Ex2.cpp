#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <map>
using namespace std;

ifstream fin("intrare.txt");
ofstream fout("iesire.txt");

int main()
{
	//am crezut prima data ca e multiset,iar acum am vazul ca se foloseste map:) 
	/*
	multiset <string> strmultiset;
	string sir;
	while (fin >> sir) {
		cout << sir << endl;
		strmultiset.insert(sir);
	}

	fin.close();
	string eVechi = "";
	for (const auto& element : strmultiset) {
		if (element != eVechi) {
			fout << element << " a aparut de " << strmultiset.count(element) << " ori." << endl;
			eVechi = element;
		}
	}
	fout.close();
	*/
	map<string, unsigned int> mCuvinte;
	string cuv;

	while (fin >> cuv) {
		cout << cuv << endl;
		mCuvinte[cuv]++;
	}

	fin.close();

	map<string, unsigned int>::iterator it;
	for (it = mCuvinte.begin(); it != mCuvinte.end(); ++it) {
			fout << it->first << " a aparut de " << mCuvinte[cuv] << " ori." << endl;
	}
	fout.close();
}
