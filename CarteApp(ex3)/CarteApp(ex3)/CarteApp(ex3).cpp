#include <iostream>
#include <vector>
#include "Carte.h"

using namespace std;

void afiseazaCartilePentruAutor(const vector<Carte>& carti, const string& autor) {
    cout << "Cartile pentru autorul " << autor << " sunt:\n";
    for (const auto& carte : carti) {
        if (carte.getAutor() == autor) {
            cout << "Titlu: " << carte.getTitlu() << ", ISBN: " << carte.getISBN() << ", Pret: " << carte.getPret() << "\n";
        }
    }
}

int main() {
    vector<Carte> carti;

    carti.push_back(Carte("Creanga", "Amintiri din Copilarie", "ISBN1", 25.0));
    carti.push_back(Carte("Calinescu", "Ultima noapte", "ISBN2", 30.0));
    carti.push_back(Carte("Sadoveanu", "Hanul Ancutei", "ISBN3", 20.0));
    carti.push_back(Carte("Creanga", "Harap-Alb", "ISBN4", 15.0));
    carti.push_back(Carte("Creanga", "Ursul pacalit de Vulpe", "ISBN5", 22.0));

    string autorCautat;
    cout << "Introduceti autorul pentru a afisa cartile sale: ";
    cin >> autorCautat;

    afiseazaCartilePentruAutor(carti, autorCautat);

    cout << "Numarul de instante ale clasei Carte este: " << Carte::getK() << endl;

    return 0;
}
