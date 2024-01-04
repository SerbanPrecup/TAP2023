#include "Punct.h"
#include "Dreapta.h"
#include <iostream>
#include <cmath>

using namespace std;

int Punct::numarPunctePeDreapta = 0;
int Punct::numarPuncteSemiplanNegativ = 0;
int Punct::numarPuncteSemiplanPozitiv = 0;


Punct::Punct(double x, double y) {
	this->x = x;
	this->y = y;
	/*if (this->y == m * this->x + n) {
		Punct::numarPunctePeDreapta++;
	}
	else if (this->y > m * this->x + n) {
		Punct::numarPuncteSemiplanPozitiv++;
	}
	else {
		Punct::numarPuncteSemiplanNegativ++;
	}*/
}
Punct::Punct(const Punct& other) {
	this->x = other.x;
	this->y = other.y;
	/*if (this->y == m * this->x + n) {
		Punct::numarPunctePeDreapta++;
	}
	else if (this->y > m * this->x + n) {
		Punct::numarPuncteSemiplanPozitiv++;
	}
	else {
		Punct::numarPuncteSemiplanNegativ++;
	}*/
}
Punct::~Punct() {
	/*if (this->y == m * this->x + n) {
		numarPunctePeDreapta--;
	}
	else if (this->y > m * this->x + n) {
		numarPuncteSemiplanPozitiv--;
	}
	else {
		numarPuncteSemiplanNegativ--;
	}	*/
	this->x = 0;
	this->y = 0;
}
double Punct::getX() const {
	return x;
}
double Punct::getY() const {
	return y;
}

double distanta(const Punct& p1, const Punct& p2) 
{
	double dx = p2.getX() - p1.getX();
	double dy = p2.getY() - p1.getY();
	return sqrt(dx * dx + dy * dy);
}

//Punct Punct::centruDeGreutate(const vector<Punct> &puncte) {
//	double sumaX = 0, sumaY = 0;
//	for (const auto& p : puncte) {
//		sumaX += p.x;
//		sumaY += p.y;
//	}
//	double medieX = sumaX / puncte.size();
//	double medieY = sumaY / puncte.size();
//	Punct p(medieX, medieY);
//	return p;
//}