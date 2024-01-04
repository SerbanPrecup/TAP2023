#ifndef COMPLEX_H
#define COMPLEX_H

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

    Complex adunare(const Complex&);
    Complex scadere(const Complex&);
    Complex inmultire(const Complex&);
    Complex impartire(const Complex&);

    friend double modul(const Complex& c);
    friend Complex conjugat(const Complex& c);

    void print();
};

#endif
