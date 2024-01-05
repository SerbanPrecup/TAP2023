#include <iostream>
#include "Angajat.h"
#include "Manager.h"
using namespace std;
int main()
{
    int nrOre;
    double tarifOra;
    cout << "Introduceti numarul de Ore: ";
    cin >> nrOre;
    cout << "\nIntroduceti tariful pe ora: ";
    cin >> tarifOra;
    Angajat angajat1(tarifOra, nrOre);
    cout << "Tariful pe ora este : " << angajat1.getTarifOrar() 
        << "$.\nIar Salariul este: " <<angajat1.getSalar()<< "$.\n";
    int nrSubordonati;
    cout << "\nIntroduceti nr de Subordonati: ";
    cin >> nrSubordonati;
    Manager manager(tarifOra, nrOre, nrSubordonati);
    cout << "Tariful pe ora este : " << manager.getTarifOrar()
        << "$.\nIar Salariul este: " << manager.getSalar() << "$.\n";
    Angajat angajat2 = angajat1;
    cout << angajat2 << endl << manager << endl;
}
