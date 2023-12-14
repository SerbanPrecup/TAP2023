#include <iostream>
#include "Fractie.h"

using namespace std;

int main()
{
    Fractie f1;
    Fractie f2(3);
    Fractie f3(2, 3);
    Fractie f4(f3);
    f1.print();
    cout << endl;
    f2.print();
    cout << endl;
    f3.print();
    cout << endl;
    f4.print();
    cout << endl;
    f3.adunare(f4).print();
    cout << endl;
    f3.scadere(f4).print();
    cout << endl;
    f3.inmultire(f2).print();
    cout << endl;
    f3.impartire(f4).print();
    cout << endl;
    cout << Fractie::cmmdc(40, 20) << endl;
    f3.reciproca();
    f3.print();
    cout << endl;
    Fractie f6(6, 3);
    f6.print();
    cout << endl;
    f6.simplifica();
    f6.print();
    return 0;
}