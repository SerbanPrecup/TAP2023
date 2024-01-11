#include <iostream>
#include <fstream>
#include <string>
#include <set>
using namespace std;

ifstream fin("intrare.txt");
ofstream fout("iesire.txt");

int main()
{
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
}
