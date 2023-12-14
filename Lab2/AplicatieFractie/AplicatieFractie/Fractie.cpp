#include "Fractie.h"

#include<iostream>
#include<string>
using namespace std;

Fractie::Fractie() {
	this->numarator = 0;
	this->numitor = 1;
}

Fractie::Fractie(int nummarator) {
	this->numarator = nummarator;
	this->numitor = 1;
}

Fractie::Fractie(int numarator, int numitor) {
	this->numarator = numarator;
	this->numitor = numitor;
}

Fractie::Fractie(const Fractie& other) {
	this->numarator = other.numarator;
	this->numitor = other.numitor;
}
Fractie::~Fractie() {
	this->numarator = 0;
	this->numitor = 0;
}

int Fractie::getNumarator() { return this->numarator; }
int Fractie::getNumitor() { return this->numitor; }
void Fractie::setNumarator(int n) { this->numarator = n; }
void Fractie::setNumitor(int n) { this->numitor = n; }

int Fractie::cmmdc(int n1, int n2) {
	int cmmdcNr;
	int copiea = n1, copieb = n2;
	if (n1 == n2) {
		cmmdcNr = n1;
		return cmmdcNr;
	}
	else {
		while (copieb) {
			int aux = copiea % copieb;
			copiea = copieb;
			copieb = aux;
		}
		cmmdcNr = copiea;
	
	return cmmdcNr;}
}

int Fractie::cmmmc(int n1, int n2) {
	int cmmmcNr = n1 * n2 / cmmdc(n1,n2);
	return cmmmcNr;
}

Fractie Fractie::adunare(const Fractie& f2) {
	Fractie rez = Fractie();
	if (this->numitor == 0 || f2.numitor == 0) {
		cout << "eroare";
		return NULL;
	}
	else if (this->numitor == f2.numitor) {
		rez.numitor = this->numitor;
		rez.numarator = this->numarator + f2.numarator;
	}
	else{
		this->simplifica();
	int cmmmcr = cmmmc(this->numitor, f2.numitor);
	rez.setNumitor(cmmmcr);
	rez.setNumarator(this->numarator * (cmmmcr / this->numitor)+f2.numarator*(cmmmcr/f2.numitor));
	}
	return rez;
}

Fractie Fractie::scadere(const Fractie& f2) {
	Fractie rez = Fractie();
	if (this->numitor == 0 || f2.numitor == 0) {
		cout << "eroare";
		return NULL;
	}
	else if (this->numitor == f2.numitor) {
		rez.numitor = this->numitor;
		rez.numarator = this->numarator - f2.numarator;
	}
	else {
		int cmmmcr = cmmmc(this->numitor, f2.numitor);
		rez.setNumitor(cmmmcr);
		rez.setNumarator(this->numarator * (cmmmcr / this->numitor) - f2.numarator * (cmmmcr / f2.numitor));
	}
	return rez;
}

Fractie Fractie::inmultire(const Fractie& f2){
	Fractie rez = Fractie();
	if (this->numitor == 0 || f2.numitor == 0) {
		cout << "eroare";
		return NULL;
	}
	else {
		rez.setNumitor(this->numitor*f2.numitor);
		rez.setNumarator(this->numarator * f2.numarator);
	}
	return rez;
}

Fractie Fractie::impartire(const Fractie& f2) {
	Fractie rez = Fractie();
	if (this->numitor == 0 || f2.numitor == 0) {
		cout << "eroare";
		return NULL;
	}
	else {
		rez.setNumitor(this->numitor * f2.numarator);
		rez.setNumarator(this->numarator * f2.numitor);
	}
	return rez;
}

void Fractie::simplifica() {
	int n = cmmdc(numarator, numitor);
	this->numarator = numarator / n;
	this->numitor= numitor / n;
	
}

void Fractie::reciproca() {
	swap(this->numarator, this->numitor);
}

void Fractie::print() {
	cout << this->numarator << "/" << this->numitor;
}