#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Actor
{
private:
	string nume;
	string prenume;
	int varsta;
	static int k;//numarul de instantieri
public:
	Actor(string nume, string prenume, int varsta) : nume(nume), prenume(prenume), varsta(varsta) {
		k++;
	}
	string getNume() const { return nume; }
	string getPrenume() const { return prenume; }
	int getVarsta() const { return varsta; }
	static int getK() { return k; }
	friend void PrintActori(const vector<Actor>& actori);

	//am folosit suprascrierea operatorului == deoarece nu mergea altfel
	bool operator==(const Actor& other) const {
		return (nume == other.nume) && (prenume == other.prenume) && (varsta == other.varsta);
	}
};

