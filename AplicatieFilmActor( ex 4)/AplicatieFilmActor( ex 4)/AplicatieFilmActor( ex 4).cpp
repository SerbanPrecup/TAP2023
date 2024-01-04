#include <iostream>
#include <vector>
#include "Film.h"
#include "Actor.h"

using namespace std;

int main()
{
	Actor a1("Nume1", "Prenume1", 23);
	Actor a2("Nume2", "Prenume2", 54);
	Actor a3("Nume3", "Prenume3", 12);
	Actor a4("Nume4", "Prenume4", 33);
	Actor a5("Nume5", "Prenume5", 18);
	Actor a6("Nume6", "Prenume6", 65);
	
	vector<Actor> lstActori1, lstActori2,lstActori3;
	lstActori1.push_back(a1);
	lstActori1.push_back(a3);
	lstActori1.push_back(a5);
	lstActori2.push_back(a2);
	lstActori2.push_back(a3);
	lstActori2.push_back(a4);
	lstActori3.push_back(a6);
	lstActori3.push_back(a2);

	Film film1("Film1", lstActori1, 22.3);
	Film film2("Film2", lstActori2, 17.8);
	Film film3("Film3", lstActori3, 19.5);
	film2.AdaugaActor(a1);
	film2.StergeActor(a3);


	vector<Film> lstFilme;
	lstFilme.push_back(film1);
	lstFilme.push_back(film2);
	lstFilme.push_back(film3);

	cout << "Filmele sortate dupa buget:" << endl;
	SorteazaFilmeDupaBuget(lstFilme);
	printFilme(lstFilme);
	cout << endl;

	cout << "Filmele sortate dupa numarul de actori:" << endl;
	SorteazaFilmeDupaNrActori(lstFilme);
	printFilme(lstFilme);
	cout << endl;

	vector<Actor> lstActoriComuni;
	lstActoriComuni = GetActoriComuni(film1, film2);
	cout << "Actorii comuni din " << film1.getNume() << " si " << film2.getNume() << " sunt: " << endl;
	PrintActori(lstActoriComuni);
	cout << endl;

	cout << "In total s-au facut " << a1.getK() << " instante ale clasei Actor." << endl;

}
