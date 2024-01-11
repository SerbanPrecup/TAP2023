#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include "Student.h"

using namespace std;

class ComparaStudenti
{
public:
	bool operator()(const Student& s1, const Student& s2) const
	{
		return s1.notaExamen > s2.notaExamen;
	}
};

int main()
{
	ifstream fin("intrare.txt");
	ofstream fout("iesire.txt");
	set<Student> setSt;
	set<Student, ComparaStudenti> studenti;
	while (!fin.eof())
	{
		string CNP;
		string nume[2];
		float notaLaborator, notaExamen;
		unsigned int nrAbsente;
		fin >> CNP >> nume[0] >> nume[1] >> notaLaborator >> notaExamen >> nrAbsente;
		Student s(CNP, nume, notaLaborator, notaExamen, nrAbsente);
		setSt.insert(s);
		studenti.insert(s);
	}
	fin.close();
	fout << "Lista initiala arata asa: " << endl;
	for (const auto& element : setSt) {
		fout << element.CNP << " " << element.nume[0] << " " << element.nume[1] << " " << element.notaLaborator 
			<< " " << element.notaExamen << " " << element.nrAbsente << endl;
	}
	

	string numecautat;
	cout << "Nume student cautat: ";
	cin >> numecautat;

	set <Student>::iterator it;
	bool ok = 0;
	for (it = setSt.begin(); it != setSt.end(); it++) {
		if ((numecautat == it->nume[0]) || (numecautat == it->nume[1])) {
			cout << "\nStudentul " << it->nume[0] << " " << it->nume[1] << " are nota " << it->notaExamen;
			ok = 1;
		}
	}
	if (ok == 0)
	{
		cout << "\nNu se gaseste acest Student."<<endl;
	}

	fout << "\nStudentii sortati dupa nota la Examen:\n";
	set <Student, ComparaStudenti>::iterator element;
	for (element = studenti.begin(); element != studenti.end(); element++) {
		fout << element->CNP << " " << element->nume[0] << " " << element->nume[1] << " " << element->notaLaborator
			<< " " << element->notaExamen << " " << element->nrAbsente << endl;
	}

	fout << "\nStudentii sortati dupa nota la Examen care au sub 11 absente:\n";
	for (element = studenti.begin(); element != studenti.end(); element++) {
		if (element->nrAbsente < 11) {
			fout << element->CNP << " " << element->nume[0] << " " << element->nume[1] << " " << element->notaLaborator
				<< " " << element->notaExamen << " " << element->nrAbsente << endl;
		}
	}

	fout.close();
	int a, b;
	cout << "\nInterval pentru note: ";
	cin >> a >> b;
	cout << endl;
	for (element = studenti.begin(); element != studenti.end(); element++) {
		if ((element->notaExamen >= a)&&(element->notaExamen <= b)) {
			cout << element->CNP << " " << element->nume[0] << " " << element->nume[1] << " " << element->notaLaborator
				<< " " << element->notaExamen << " " << element->nrAbsente << endl;
		}
	}
}

