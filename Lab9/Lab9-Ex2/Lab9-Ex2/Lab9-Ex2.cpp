#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ifstream fin("intrare.txt");
	ofstream f1("iesirealf.txt");
	ofstream f2("iesireinvalf.txt");
	ofstream f3("iesirelungime.txt");
	string linie;
	list<string> linii;
	while (getline(fin, linie)) {
		linii.push_back(linie);
	}
	fin.close();



	linii.sort();
	for (const auto& elem : linii) {
		f1 << elem << endl;
	}
	f1.close();


	linii.sort(greater<string>());
	for (const auto& elem : linii) {
		f2 << elem << endl;
	}
	f2.close();


	linii.sort([](const string& a, const string& b) {
		return a.length() < b.length();
		});
	for (const auto& elem : linii) {
		f3 << elem << endl;
	}
	f3.close();
}
