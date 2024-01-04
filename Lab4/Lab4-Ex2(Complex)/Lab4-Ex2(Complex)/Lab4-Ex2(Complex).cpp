#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    double nr1, nr2, n2;
    cout << "Introduceti partea reala la c2: ";
    cin >> nr1;
    cout << "Introduceti partea reala si partea imaginara la c3: ";
    cin >> nr2;
    cin >> n2;

    Complex c1;
    Complex c2(nr1);
    Complex c3(nr2, n2);
    Complex c4 = c3;

    cout << c1 << endl << c2 << endl << c3 << endl << c4 << endl;

    Complex suma = c2 + c3;
    cout << "Suma: " << suma << endl;
    Complex dicerenta = c3 - c2;
    cout << "Diferenta: " << dicerenta << endl;
    Complex produs = c2 * c3;
    cout << "Produsul: " << produs << endl;
    Complex cat = c3 / c2;
    cout << "Catul: " << cat << endl;

    bool mMic = c2 < c3;
    bool mMare = c2 > c3;
    bool mMicSEgal = c2 <= c3;
    bool mMareSEgal = c2 >= c3;
    bool egal = c2 == c3;
    bool dic = c2 != c3;
    cout << mMic << " " << mMare << " " << mMicSEgal << " " << mMareSEgal << " " << egal << " " << dic << endl;

    //operatori compusi
    cout << c1 << endl;
    c1 += c2;
    cout << c1 << endl;
    c1 -= c3;
    cout << c1 << endl;
    c1 *= c2;
    cout << c1 << endl;
    c1 /= c3;
    cout << c1 << endl;

    //operatori unari
    Complex preIncrement = ++c1;
    cout << preIncrement << endl;
    Complex postIncrement = c1++;
    cout << postIncrement << endl;
    Complex preDecrement = --c1;
    cout << preDecrement << endl;
    Complex postDecrement = c1--;
    cout << postDecrement << endl;

    //operator de atribuire
    Complex c5;
    c5 = c1;
    cout << c5 << endl;

    return 0;
}