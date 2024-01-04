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
    //functii membre
    
    //Fractie operator+(const Fractie& other) const;
    //Fractie operator-(const Fractie& other) const;
    //Fractie operator*(const Fractie& other) const;
    //Fractie operator/(const Fractie& other) const;

    //functii prietene
    friend Fractie operator+(const Fractie& frac1, const Fractie& frac2);
    friend Fractie operator-(const Fractie& frac1, const Fractie& frac2);
    friend Fractie operator*(const Fractie& frac1, const Fractie& frac2);
    friend Fractie operator/(const Fractie& frac1, const Fractie& frac2);

    //functii membre
    
    //bool operator<(const Fractie& other) const;
    //bool operator>(const Fractie& other) const;
    //bool operator<=(const Fractie& other) const;
    //bool operator>=(const Fractie& other) const;
    //bool operator==(const Fractie& other) const;
    //bool operator!=(const Fractie& other) const;

    //functii prietene
    friend bool operator<(const Fractie& frac1, const Fractie& frac2);
    friend bool operator>(const Fractie& frac1, const Fractie& frac2);
    friend bool operator<=(const Fractie& frac1, const Fractie& frac2);
    friend bool operator>=(const Fractie& frac1, const Fractie& frac2);
    friend bool operator==(const Fractie& frac1, const Fractie& frac2);
    friend bool operator!=(const Fractie& frac1, const Fractie& frac2);

    // Functii membre pentru operatorii compusi
    
    //Fractie& operator+=(const Fractie& other);
    //Fractie& operator-=(const Fractie& other);
    //Fractie& operator*=(const Fractie& other);
    //Fractie& operator/=(const Fractie& other);

    //functii prietene
    friend Fractie& operator+=(Fractie& frac1, const Fractie& frac2);
    friend Fractie& operator-=(Fractie& frac1, const Fractie& frac2);
    friend Fractie& operator*=(Fractie& frac1, const Fractie& frac2);
    friend Fractie& operator/=(Fractie& frac1, const Fractie& frac2);
    
    // Operatori unari - functii membre

    //Fractie& operator++(); // pre-increment
    //Fractie operator++(int); // post-increment
    //Fractie& operator--(); // pre-decrement
    //Fractie operator--(int); // post-decrement


    //functii prietene
    friend Fractie& operator++(Fractie& frac);    // pre-increment
    friend Fractie operator++(Fractie& frac, int); // post-increment
    friend Fractie& operator--(Fractie& frac);    // pre-decrement
    friend Fractie operator--(Fractie& frac, int); // post-decrement


    // Operatorul de atribuire
    Fractie& operator=(const Fractie& other);

    // Operatori de citire/afisare
    friend istream& operator>>(istream& is, Fractie& fractie);
    friend ostream& operator<<(ostream& os, const Fractie& fractie);
   

    int getNumarator();
    int getNumitor();
    void setNumarator(int n);
    void setNumitor(int n);
    int cmmdc(int n1, int n2);
    int cmmmc(int n1, int n2);
    void simplifica();
    void reciproca();
    
};

#endif 