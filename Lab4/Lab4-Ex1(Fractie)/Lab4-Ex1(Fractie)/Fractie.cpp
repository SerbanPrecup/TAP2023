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

		return cmmdcNr;
	}
}

int Fractie::cmmmc(int n1, int n2) {
	int cmmmcNr = n1 * n2 / cmmdc(n1, n2);
	return cmmmcNr;
}

//Functii membre

//Fractie Fractie::operator+(const Fractie& other) const {
//	Fractie rez = Fractie();
//	if (this->numitor == 0 || other.numitor == 0) {
//		cout << "eroare";
//		return NULL;
//	}
//	else if (this->numitor == other.numitor) {
//		rez.numitor = this->numitor;
//		rez.numarator = this->numarator + other.numarator;
//	}
//	else {
//		rez.numarator = this->numarator * other.numitor + other.numarator * this->numitor;
//		rez.numitor = this->numitor * other.numitor;
//	}
//	return rez;
//}
//
//Fractie Fractie::operator-(const Fractie& other) const {
//	Fractie rez = Fractie();
//	if (this->numitor == 0 || other.numitor == 0) {
//		cout << "eroare";
//		return NULL;
//	}
//	else if (this->numitor == other.numitor) {
//		rez.numitor = this->numitor;
//		rez.numarator = this->numarator - other.numarator;
//	}
//	else {
//		int cmmmcr = cmmmc(this->numitor, other.numitor);
//		rez.setNumitor(cmmmcr);
//		rez.setNumarator(this->numarator * (cmmmcr / this->numitor) - other.numarator * (cmmmcr / other.numitor));
//	}
//	return rez;
//}
//
//Fractie Fractie::operator*(const Fractie& other) const {
//	Fractie rez = Fractie();
//	if (this->numitor == 0 || other.numitor == 0) {
//		cout << "eroare";
//		return NULL;
//	}
//	else {
//		rez.setNumitor(this->numitor * other.numitor);
//		rez.setNumarator(this->numarator * other.numarator);
//	}
//	return rez;
//}
//
//Fractie Fractie::operator/(const Fractie& other) const {
//	Fractie rez = Fractie();
//	if (this->numitor == 0 || other.numitor == 0) {
//		cout << "eroare";
//		return NULL;
//	}
//	else {
//		rez.setNumitor(this->numitor * other.numarator);
//		rez.setNumarator(this->numarator * other.numitor);
//	}
//	return rez;
//}

//Functii prietene

Fractie operator+(const Fractie& frac1, const Fractie& frac2) {
	Fractie rezultat;
	rezultat.numarator = (frac1.numarator * frac2.numitor) + (frac2.numarator * frac1.numitor);
	rezultat.numitor = frac1.numitor * frac2.numitor;
	return rezultat;
}

Fractie operator-(const Fractie& frac1, const Fractie& frac2) {
	Fractie rezultat;
	rezultat.numarator = (frac1.numarator * frac2.numitor) - (frac2.numarator * frac1.numitor);
	rezultat.numitor = frac1.numitor * frac2.numitor;
	return rezultat;
}

Fractie operator*(const Fractie& frac1, const Fractie& frac2) {
	Fractie rezultat;
	rezultat.numarator = frac1.numarator * frac2.numarator;
	rezultat.numitor = frac1.numitor * frac2.numitor;
	return rezultat;
}

Fractie operator/(const Fractie& frac1, const Fractie& frac2) {
	Fractie rezultat;
	rezultat.numarator = frac1.numarator * frac2.numitor;
	rezultat.numitor = frac1.numitor * frac2.numarator;
	return rezultat;
}


void Fractie::simplifica() {
	int n = cmmdc(numarator, numitor);
	this->numarator = numarator / n;
	this->numitor = numitor / n;

}

void Fractie::reciproca() {
	swap(this->numarator, this->numitor);
}


//Functii membre

//bool Fractie::operator<(const Fractie& other) const {
//	return (this->numarator * other.numitor < other.numarator * this->numitor);
//}
//
//bool Fractie::operator>(const Fractie& other) const {
//	return (this->numarator * other.numitor > other.numarator * this->numitor);
//}
//
//bool Fractie::operator<=(const Fractie& other) const {
//	return (this->numarator * other.numitor <= other.numarator * this->numitor);
//}
//
//bool Fractie::operator>=(const Fractie& other) const {
//	return (this->numarator * other.numitor >= other.numarator * this->numitor);
//}
//
//bool Fractie::operator==(const Fractie& other) const {
//	return (this->numarator * other.numitor == other.numarator * this->numitor);
//}
//
//bool Fractie::operator!=(const Fractie& other) const {
//	return (this->numarator * other.numitor != other.numarator * this->numitor);
//}

//functii prietene

bool operator<(const Fractie& frac1, const Fractie& frac2) {
	return (frac1.numarator * frac2.numitor < frac2.numarator * frac1.numitor);
}

bool operator>(const Fractie& frac1, const Fractie& frac2) {
	return (frac1.numarator * frac2.numitor > frac2.numarator * frac1.numitor);
}

bool operator<=(const Fractie& frac1, const Fractie& frac2) {
	return (frac1.numarator * frac2.numitor <= frac2.numarator * frac1.numitor);
}

bool operator>=(const Fractie& frac1, const Fractie& frac2) {
	return (frac1.numarator * frac2.numitor >= frac2.numarator * frac1.numitor);
}

bool operator==(const Fractie& frac1, const Fractie& frac2) {
	return (frac1.numarator * frac2.numitor == frac2.numarator * frac1.numitor);
}

bool operator!=(const Fractie& frac1, const Fractie& frac2) {
	return (frac1.numarator * frac2.numitor != frac2.numarator * frac1.numitor);
}

// Functii membre pentru operatorii compusi

//Fractie& Fractie::operator+=(const Fractie& other) {
//	this->numarator = this->numarator * other.numitor + other.numarator * this->numitor;
//	this->numitor = this->numitor * other.numitor;
//	return *this;
//}
//
//Fractie& Fractie::operator-=(const Fractie& other) {
//	this->numarator = this->numarator * other.numitor - other.numarator * this->numitor;
//	this->numitor = this->numitor * other.numitor;
//	return *this;
//}
//
//Fractie& Fractie::operator*=(const Fractie& other) {
//	this->numarator = this->numarator * other.numarator;
//	this->numitor = this->numitor * other.numitor;
//	return *this;
//}
//
//Fractie& Fractie::operator/=(const Fractie& other) {
//	this->numarator = this->numarator * other.numitor;
//	this->numitor = this->numitor * other.numarator;
//	return *this;
//}

//functii prietene

Fractie& operator+=(Fractie& frac1, const Fractie& frac2) {
	frac1.numarator = frac1.numarator * frac2.numitor + frac2.numarator * frac1.numitor;
	frac1.numitor = frac1.numitor * frac2.numitor;
	return frac1;
}

Fractie& operator-=(Fractie& frac1, const Fractie& frac2) {
	frac1.numarator = frac1.numarator * frac2.numitor - frac2.numarator * frac1.numitor;
	frac1.numitor = frac1.numitor * frac2.numitor;
	return frac1;
}

Fractie& operator*=(Fractie& frac1, const Fractie& frac2) {
	frac1.numarator *= frac2.numarator;
	frac1.numitor *= frac2.numitor;
	return frac1;
}

Fractie& operator/=(Fractie& frac1, const Fractie& frac2) {
	frac1.numarator *= frac2.numitor;
	frac1.numitor *= frac2.numarator;
	return frac1;
}

std::istream& operator>>(std::istream& is, Fractie& fractie) {
	is >> fractie.numarator >> fractie.numitor;
	return is;
}

std::ostream& operator<<(std::ostream& os, const Fractie& fractie) {
	os << fractie.numarator << "/" << fractie.numitor;
	return os;
}
//functii membre

//Fractie& Fractie::operator++() {
//	this->numarator += this->numitor;
//	return *this;
//}
//
//// Operator de incrementare (post-incrementare)
//Fractie Fractie::operator++(int) {
//	Fractie temp(*this);
//	this->numarator += this->numitor;
//	return temp;
//}
//
//// Operator de decrementare (pre-decrementare)
//Fractie& Fractie::operator--() {
//	this->numarator -= this->numitor;
//	return *this;
//}
//
//// Operator de decrementare (post-decrementare)
//Fractie Fractie::operator--(int) {
//	Fractie temp(*this);
//	this->numarator -= this->numitor;
//	return temp;
//}

//functii prietene
Fractie& operator++(Fractie& frac) {
	frac.numarator += frac.numitor;
	return frac;
}

Fractie operator++(Fractie& frac, int) {
	Fractie temp(frac.numarator, frac.numitor);
	frac.numarator += frac.numitor;
	return temp;
}

Fractie& operator--(Fractie& frac) {
	frac.numarator -= frac.numitor;
	return frac;
}

Fractie operator--(Fractie& frac, int) {
	Fractie temp(frac.numarator, frac.numitor);
	frac.numarator -= frac.numitor;
	return temp;
}
// Operator de atribuire
Fractie& Fractie::operator=(const Fractie& other) {
	this->numarator = other.numarator;
	this->numitor = other.numitor;
	return *this;
}