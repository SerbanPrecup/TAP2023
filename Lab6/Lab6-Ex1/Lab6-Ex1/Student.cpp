#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

Student::Student(string nume, string CNP, string email, float nota) : Persoana(CNP,nume), email(email), nota(nota){}

string Student::detalii() {
	return "Studentul " + this->nume + " are nota " + to_string(this->nota) + ".\n";
}