#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
#include <string>
#include <set>

using namespace std;

int main()
{
	ifstream fin("intrare.txt");
	ofstream fout("iesire.txt");
	map<string, set<string>> mString;
	string cuv;
	while (fin >> cuv) {
		string aux = cuv;
		sort(aux.begin(), aux.end());
		set<string> Sstring;
		do {
			Sstring.insert(aux);
		} while (next_permutation(aux.begin(), aux.end()));
		mString[cuv] = Sstring;
	}
	fin.close();
	map<string, set<string>>::iterator it;
	for (it = mString.begin(); it != mString.end(); it++)
	{
		fout << it->first<<"->";
		set<string>::iterator it2;
		for (it2 = it->second.begin(); it2 != it->second.end(); it2++) {
			fout << *it2 << " ";
		}
		fout << endl;
	}
	fout.close();
}
