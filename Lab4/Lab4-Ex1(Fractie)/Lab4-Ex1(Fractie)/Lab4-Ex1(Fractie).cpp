#include <iostream>
#include "Fractie.h"

using namespace std;

int main()
{
    int nr1, nr2, n2;
    cout << "Introduceti numaratorul la f2: ";
    cin >> nr1;
    cout << "Introduceti numaratorul si numitorul la f3: ";
    cin >> nr2;
    cin >> n2;

    Fractie f1;
    Fractie f2(nr1);
    Fractie f3(nr2, n2);
    Fractie f4 = f3;

    cout << f1 << endl << f2 << endl << f3 << endl << f4 << endl;

    Fractie suma = f2 + f3;
    cout << "Suma: " << suma << endl;
    Fractie diferenta = f3 - f2;
    cout << "Diferenta: " << diferenta << endl;
    Fractie produs = f2 * f3;
    cout << "Produsul: " << produs << endl;
    Fractie cat = f3 / f2;
    cout << "Catul: " << cat << endl;
    
    bool mMic = f2 < f3;
    bool mMare = f2 > f3;
    bool mMicSEgal = f2 <= f3;
    bool mMareSEgal = f2 >= f3;
    bool egal = f2 == f3;
    bool dif = f2 != f3;
    cout << mMic << " " << mMare << " " << mMicSEgal << " " << mMareSEgal << " " << egal << " " << dif << endl;

    //operatori compusi
    cout << f1 << endl;
    f1 += f2;
    cout << f1 << endl;
    f1 -= f3;
    cout << f1 << endl;
    f1 *= f2;
    cout << f1 << endl;
    f1 /= f3;
    cout << f1 << endl;

    //operatori unari
    Fractie preIncrement = ++f1;
    cout << preIncrement << endl;
    Fractie postIncrement = f1++;
    cout << postIncrement << endl;
    Fractie preDecrement = --f1;    
    cout << preDecrement << endl;
    Fractie postDecrement = f1--;
    cout << postDecrement << endl;

    //operator de atribuire
    Fractie f5;
    f5 = f1;
    cout << f5 << endl;

    return 0;
}