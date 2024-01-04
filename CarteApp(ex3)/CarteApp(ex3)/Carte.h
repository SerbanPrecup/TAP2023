#ifndef CARTE_H
#define CARTE_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Carte {

public:
    Carte(const std::string& autor, const std::string& titlu, const std::string& ISBN, double pret)
        : autor(autor), titlu(titlu), ISBN(ISBN), pret(pret){
        k++;//numarul de instantieri
    }
    //functii inline si const
    string getAutor() const { return autor; }
    string getTitlu() const { return titlu; }
    string getISBN() const { return ISBN; }
    double getPret() const { return pret; }
    static int getK() { return k; }
private:
    string autor;
    string titlu;
    string ISBN;
    double pret;
    //contor pentru a numara cate instantieri sunt facute
    static int k;
};

#endif
