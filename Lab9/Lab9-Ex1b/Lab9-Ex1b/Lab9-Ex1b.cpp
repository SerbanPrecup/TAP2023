#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;

int main()
{
	ifstream fin("intrare.txt");
	ofstream fout("iesire.txt");
	string linie;
	list<string> linii;
	while (getline(fin, linie)) {
		linii.push_back(linie);
	}
	fin.close();
	unsigned int max = 0;
	list<string>::iterator listit;
	for (listit = linii.begin(); listit != linii.end(); ++listit)
	{
		if (listit->length() > max)
		{
			max = listit->length();
		}
	}
	for (int i = 0; i <= max + 4; i++)
	{
		fout << "_";
	}
	fout << endl;
	for (listit = linii.begin(); listit != linii.end(); ++listit)
	{
		fout << "| " << *listit;
		for (int i = listit->length(); i <= max; i++)
			fout << " ";
		fout << " |" << endl;
		fout << "|";
		for (int i = 1; i < max + 4; i++)
		{
			fout << "_";
		}
		fout << "|"<<endl;
	}
	fout.close();
}
