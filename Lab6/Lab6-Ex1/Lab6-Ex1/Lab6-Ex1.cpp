#include <iostream>
#include "Persoana.h"
#include "Student.h"
#include "Profesor.h"
#include "Angajat.h"

using namespace std;

int main()
{
	string nume, CNP, email;
	float nota;
	cout << "Nume: ";
	cin >> nume;
	cout << "\nCNP: ";
	cin >> CNP;
	cout << "\nemail: ";
	cin >> email;
	cout << "\nnota: ";
	cin >> nota;
	Student s(nume, CNP, email, nota);
	cout << endl << s.detalii();

	string numeP, CNPP, emailP, materieP;
	cout << "\nNume Profesor: ";
	cin >> numeP;
	cout << "\nCNP Profesor: ";
	cin >> CNPP;
	cout << "\nemail Profesor: ";
	cin >> emailP;
	cout << "\nmaterie Profesor: ";
	cin >> materieP;
	Profesor p(numeP, CNPP, emailP, materieP);
	cout << endl << p.detalii();


	string numeA, CNPA, emailA, departamentA;
	cout << "\nNume Angajat: ";
	cin >> numeA;
	cout << "\nCNP Angajat: ";
	cin >> CNPA;
	cout << "\nemail Angajat: ";
	cin >> emailA;
	cout << "\ndepartament Angajat: ";
	cin >> departamentA;
	Angajat a(numeA, CNPA, emailA, departamentA);
	cout << endl << a.detalii();

}
