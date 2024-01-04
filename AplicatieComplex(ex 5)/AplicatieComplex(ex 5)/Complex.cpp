#include "Complex.h"
#include <cmath>
#include <iostream>

using namespace std;

Complex::Complex() : re(0), im(0) {}

Complex::Complex(double real) : re(real), im(0) {}

Complex::Complex(double real, double imaginar) : re(real), im(imaginar) {}

Complex::Complex(const Complex& other) : re(other.re), im(other.im) {}

Complex::~Complex(){
    this->im = 0;
    this->re = 0;
}

Complex Complex::adunare(const Complex& c2) {
    return Complex(re + c2.re, im + c2.im);
}

Complex Complex::scadere(const Complex& c2) {
    return Complex(re - c2.re, im - c2.im);
}

Complex Complex::inmultire(const Complex& c2) {
    return Complex(re * c2.re - im * c2.im, re * c2.im + im * c2.re);
}

Complex Complex::impartire(const Complex& c2) {
    double divizor = c2.re * c2.re + c2.im * c2.im;
    return Complex((re * c2.re + im * c2.im) / divizor, (im * c2.re - re * c2.im) / divizor);
}

double modul(const Complex& c) {
    return sqrt(c.re * c.re + c.im * c.im);
}

Complex conjugat(const Complex& c) {
    return Complex(c.re, -c.im);
}

void Complex::print() {
    cout << re;
    if (im >= 0) {
        cout << " + " << im << "i";
    }
    else {
        cout << " - " << -im << "i";
    }
}