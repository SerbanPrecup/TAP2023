#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;
class Complex {
private:
    double re;
    double im;

public:
    Complex();
    Complex(double real);
    Complex(double real, double imaginar);
    Complex(const Complex&);

    ~Complex();

    Complex operator+(const Complex&) const;
    Complex operator-(const Complex&) const;
    Complex operator*(const Complex&) const;
    Complex operator/(const Complex&) const;

    bool operator<(const Complex&) const;
    bool operator>(const Complex&) const;
    bool operator<=(const Complex&) const;
    bool operator>=(const Complex&) const;
    bool operator==(const Complex&) const;
    bool operator!=(const Complex&) const;

    Complex& operator+=(const Complex&);
    Complex& operator-=(const Complex&);
    Complex& operator*=(const Complex&);
    Complex& operator/=(const Complex&);

    Complex& operator++();      // pre-increment
    Complex operator++(int);    // post-increment
    Complex& operator--();      // pre-decrement
    Complex operator--(int);    // post-decrement

    Complex& operator=(const Complex& other);

    friend istream& operator>>(istream& is, Complex& complex);
    friend ostream& operator<<(ostream& os, const Complex& complex);

    friend double modul(const Complex& c);
    friend Complex conjugat(const Complex& c);

    void print();
};

#endif
