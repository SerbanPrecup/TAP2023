#include <iostream>
#include <vector>
#include "Dreapta.h"
#include "Punct.h"
using namespace std;

Punct centruDeGreutate(vector<Punct>& puncte) {
    double sumaX = 0, sumaY = 0;
    for (Punct& p : puncte) {
        sumaX += p.getX();
        sumaY += p.getY();
    }
    double medieX = sumaX / puncte.size();
    double medieY = sumaY / puncte.size();
    Punct p(medieX, medieY);
    return p;
}

int main()
{
    Dreapta d(1, 2);
    int n;
    cout << "n = ";
    cin >> n;
    vector<Punct> vPuncte;
    for (int i = 0; i < n; i++)
    {
        double x, y;
        cout << endl <<"x = ";
        cin >> x;
        cout << endl <<"y = ";
        cin >> y;
        vPuncte.push_back(Punct(x, y));
    }
    cout << "Centrul de greutate este: ";
    Punct G = centruDeGreutate(vPuncte);
    cout << G.getX() << ", " << G.getY();

    Punct p1(1, 2);
    Punct p2(3, 4);
    double distantaintrep1p2 = distanta(p1, p2);
    cout << "\nDistanta dintre (1,2) si (3,4) este: "<<distantaintrep1p2;
}
