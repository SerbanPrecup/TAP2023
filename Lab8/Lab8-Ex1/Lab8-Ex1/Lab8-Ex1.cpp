#include <iostream>
#include <fstream>
#include <string>
#include <set>
using namespace std;

ifstream fin("intrare.txt");
ofstream fout("iesire.txt");

int main()
{
	set	<string> strset;
	string sir;
	while (fin >> sir) {
		cout << sir << endl;
		strset.insert(sir);
	}
	fin.close();
	
	for (const auto& element : strset) {
		fout << element << endl;
	}
	fout.close();
}
