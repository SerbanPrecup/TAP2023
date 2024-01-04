#include "complex.h"
#include <cmath>
#include <iostream>
using namespace std;
Complex::Complex() : re(0.0), im(0.0) {}

Complex::Complex(double real) : re(real), im(0.0) {}

Complex::Complex(double real, double imaginar) : re(real), im(imaginar) {}

Complex::Complex(const Complex& c) : re(c.re), im(c.im) {}

Complex::~Complex() {}

Complex Complex::operator+(const Complex& other) const {
    return Complex(re + other.re, im + other.im);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(re - other.re, im - other.im);
}

Complex Complex::operator*(const Complex& other) const {
    return Complex((re * other.re) - (im * other.im), (re * other.im) + (im * other.re));
}

Complex Complex::operator/(const Complex& other) const {
    double denominator = other.re * other.re + other.im * other.im;
    return Complex((re * other.re + im * other.im) / denominator, (im * other.re - re * other.im) / denominator);
}

bool Complex::operator<(const Complex& other) const {
    return (re * re + im * im) < (other.re * other.re + other.im * other.im);
}

bool Complex::operator>(const Complex& other) const {
    return (re * re + im * im) > (other.re * other.re + other.im * other.im);
}

bool Complex::operator<=(const Complex& other) const {
    return (re * re + im * im) <= (other.re * other.re + other.im * other.im);
}

bool Complex::operator>=(const Complex& other) const {
    return (re * re + im * im) >= (other.re * other.re + other.im * other.im);
}

bool Complex::operator==(const Complex& other) const {
    return (re == other.re) && (im == other.im);
}

bool Complex::operator!=(const Complex& other) const {
    return !(*this == other);
}


Complex& Complex::operator+=(const Complex& other) {
    re += other.re;
    im += other.im;
    return *this;
}

Complex& Complex::operator-=(const Complex& other) {
    re -= other.re;
    im -= other.im;
    return *this;
}

Complex& Complex::operator*=(const Complex& other) {
    double temp_re = re * other.re - im * other.im;
    im = re * other.im + im * other.re;
    re = temp_re;
    return *this;
}

Complex& Complex::operator/=(const Complex& other) {
    double denominator = other.re * other.re + other.im * other.im;
    double temp_re = (re * other.re + im * other.im) / denominator;
    im = (im * other.re - re * other.im) / denominator;
    re = temp_re;
    return *this;
}


Complex& Complex::operator++() {
    re++;
    return *this;
}

Complex Complex::operator++(int) {
    Complex temp(*this);
    ++(*this);
    return temp;
}

Complex& Complex::operator--() {
    re--;
    return *this;
}

Complex Complex::operator--(int) {
    Complex temp(*this);
    --(*this);
    return temp;
}

Complex& Complex::operator=(const Complex& other) {
    if (this != &other) {
        re = other.re;
        im = other.im;
    }
    return *this;
}


istream& operator>>(istream& is, Complex& complex) {
    cout << "Partea reala: ";
    is >> complex.re;
    cout << "Partea imaginara: ";
    is >> complex.im;
    return is;
}

ostream& operator<<(ostream& os, const Complex& complex) {
    if (complex.im >= 0)
        os << complex.re << " + " << complex.im << "i";
    else
        os << complex.re << " - " << -complex.im << "i";
    return os;
}

double modul(const Complex& c) {
    return std::sqrt(c.re * c.re + c.im * c.im);
}

Complex conjugat(const Complex& c) {
    return Complex(c.re, -c.im);
}

void Complex::print() {
    if (im >= 0)
        std::cout << re << " + " << im << "i" << std::endl;
    else
        std::cout << re << " - " << -im << "i" << std::endl;
}
