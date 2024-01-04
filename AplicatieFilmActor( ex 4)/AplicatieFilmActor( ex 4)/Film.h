#include <iostream>
#pragma once
#include "Actor.h"
#include <vector>

using namespace std;

class Film
{
private:
	string nume;
	vector<Actor> lstActori;
	double pret;
public:
	Film(string nume, vector<Actor> lstActori, double pret) : nume(nume), lstActori(lstActori), pret(pret) {}
	string getNume() const { return nume; }
	double getPret() const { return pret; }
	vector<Actor> getLstActori() const { return lstActori; }
	void AdaugaActor(Actor a);
	void StergeActor(Actor a);
	friend void SorteazaFilmeDupaBuget(vector<Film>& filme);
	friend void SorteazaFilmeDupaNrActori(vector<Film>& filme);
	friend int ComparareFilmeDupaNrActori(Film& film1, Film& film2);
	friend vector<Actor> GetActoriComuni(Film& film1, Film& film2);
	friend void printFilme(const vector<Film>& filme);
};

