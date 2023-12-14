#pragma once
#ifndef FRACTIE_H
#define FRACTIE_H
#include <iostream>
using namespace std;

class Fractie
{
private:
	int numarator;
	int numitor;

public:

	Fractie(); 
	Fractie(int numarator); 
	Fractie(int numarator, int numitor); 
	Fractie(const Fractie&);
	~Fractie();

	Fractie adunare(const Fractie&);
	Fractie scadere(const Fractie&);
	Fractie inmultire(const Fractie&);
	Fractie impartire(const Fractie&);
	static int cmmdc(int n1, int n2);
	static int cmmmc(int n1, int n2);
	void simplifica();
	void reciproca();
	bool egal(const Fractie&);
	void print();


	int getNumarator();
	int getNumitor();
	void setNumarator(int n);
	void setNumitor(int n);

};

#endif 