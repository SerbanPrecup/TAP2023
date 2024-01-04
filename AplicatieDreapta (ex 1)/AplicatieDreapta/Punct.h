#pragma once
#include <iostream>
#include <vector>
#ifndef PUNCT_H
#define PUNCT_H
using namespace std;


class Punct {
private:
	double x, y;
	static int numarPunctePeDreapta;
	static int numarPuncteSemiplanPozitiv;
	static int numarPuncteSemiplanNegativ;
public:
	friend class Dreapta;
	Punct(double x, double y);
	Punct(const Punct& other);
	~Punct();
	friend double distanta(const Punct& p1,const Punct& p2);
	//static Punct centruDeGreutate(const vector<Punct> &puncte);
	double getY() const;
	double getX() const;
};

#endif