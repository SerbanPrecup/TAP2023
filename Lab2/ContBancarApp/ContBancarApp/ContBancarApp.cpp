#include <iostream>
#include "ContBancar.h"
#include "Client.h"
#include "Banca.h"
#include "Operatiuni.h"
using namespace std;
int main() {
    // Creare obiecte de tip ContBancar
    ContBancar cont1("RO123", 1000, "RON");
    ContBancar cont2("EU456", 500, "EUR");
    ContBancar cont3("RO789", 700, "RON");
    ContBancar cont4("RO135", 900, "RON");
    vector<ContBancar> v1;
    v1.push_back(cont1);
    v1.push_back(cont2);
    vector<ContBancar> v2;
    v2.push_back(cont3);
    vector<ContBancar> v3;
    v3.push_back(cont4);

    Client client1("Serban" , "Precup", "Adresa 1", 2, v1);
    client1.adaugaCont(cont1);
    client1.adaugaCont(cont2);

    Client client2("Daniel", "Dani", "Adresa 2", 1,v2);
    client2.adaugaCont(cont3);

    vector<Client> vclienti;
    vclienti.push_back(client1);
    vclienti.push_back(client2);
    Client client3("Adi", "Popescu", "Adresa 3", 1, v3);
    // Creare obiect de tip Banca și adăugare clienți
    Banca banca("123", 2, vclienti);
    banca.adaugaClient(client3);

    // Utilizare operațiuni
    float dobandaRON = Operatiuni::calculDobandaRON(cont1.getSuma());
    float dobandaEUR = Operatiuni::calculDobandaEUR(cont2.getSuma());

     cout << "Dobanda RON: " << dobandaRON <<  endl;
     cout << "Dobanda EUR: " << dobandaEUR <<  endl;

    Operatiuni::transfer(cont1, cont3, 200);

    banca.afisaredateBanca();

    return 0;
}
