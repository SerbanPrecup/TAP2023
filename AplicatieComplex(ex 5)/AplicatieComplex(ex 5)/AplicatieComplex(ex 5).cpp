#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex c1;
    Complex c2(3);
    Complex c3(2, -3);
    Complex c4(c3);
    c1.print();
    cout << endl;
    c2.print();
    cout << endl;
    c3.print();
    cout << endl;
    c4.print();
    cout << endl;
    c3.adunare(c4).print();
    cout << endl;
    c3.scadere(c4).print();
    cout << endl;
    c3.inmultire(c2).print();
    cout << endl;
    c3.impartire(c4).print();
    cout << endl;
    Complex c6(6, -3);
    c6.print();
    double modul1 = modul(c6);
    cout << endl << modul1;
    Complex c7 = conjugat(c6);
    cout << endl;
    c7.print();
    return 0;
}
