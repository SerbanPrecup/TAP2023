#include<iostream>
#pragma once
#include "Punct2D.h"
using namespace std;

class Punct3D:public Punct2D
{
private:
	double z;
public:
	Punct3D(double x, double y, double z);
	Punct3D(const Punct3D& other);
	~Punct3D();
	Punct3D& operator=(const Punct3D& other);
    bool operator<(const Punct3D& other) const;
    bool operator>(const Punct3D& other) const;
    bool operator<=(const Punct3D& other) const;
    bool operator>=(const Punct3D& other) const;
    bool operator==(const Punct3D& other) const;
    bool operator!=(const Punct3D& other) const;

    Punct3D operator+(const Punct3D& other) const;
    Punct3D operator-(const Punct3D& other) const;
    Punct3D operator*(double scalar) const;
    Punct3D operator/(double scalar) const;

    Punct3D& operator+=(const Punct3D& other);
    Punct3D& operator-=(const Punct3D& other);
    Punct3D& operator*=(double scalar);
    Punct3D& operator/=(double scalar);

    Punct3D& operator++();     // Pre-increment
    Punct3D operator++(int);   // Post-increment
    Punct3D& operator--();     // Pre-decrement
    Punct3D operator--(int);   // Post-decrement

    friend ostream& operator<<(ostream& os, const Punct3D& punct);
    friend istream& operator>>(istream& is, Punct3D& punct);

    static double distanta(const Punct3D& p1, const Punct3D& p2);
};

