#include "Film.h"
#include <iostream>
#include <vector>

using namespace std;

void Film::AdaugaActor(Actor a) {
	lstActori.push_back(a);
}
void Film::StergeActor(Actor a) {
    auto it = std::find(lstActori.begin(), lstActori.end(), a);
    if (it != lstActori.end()) {
        lstActori.erase(it);
    }
}
void SorteazaFilmeDupaBuget(vector<Film>& filme) {
    for (int i = 0; i < filme.size() - 1; i++) {
        for (int j = i; j < filme.size(); j++) {
            if (filme[i].getPret() > filme[j].getPret())
            {
                swap(filme[i], filme[j]);
            }
        }
    }
}

void SorteazaFilmeDupaNrActori(vector<Film>& filme) {
    for (int i = 0; i < filme.size() - 1; i++) {
        for (int j = i; j < filme.size(); j++) {
            if (ComparareFilmeDupaNrActori(filme[i],filme[j])==1)
            {
                swap(filme[i], filme[j]);
            }
        }
    }
}

int ComparareFilmeDupaNrActori(Film& film1, Film& film2) {
    if (film1.getLstActori().size() > film2.getLstActori().size())
        return 1;
    else
        return 0;
}

vector<Actor> GetActoriComuni(Film& film1, Film& film2) {
    vector<Actor> lstActori1 = film1.getLstActori();
    vector<Actor> lstActori2 = film2.getLstActori();
    vector<Actor> lstActoriComuni;
    for (Actor a1 : lstActori1)
    {
        for (Actor a2 : lstActori2)
        {
            string nume1 = a1.getNume();
            string nume2 = a2.getNume();
            string prenume1 = a1.getPrenume();
            string prenume2 = a2.getPrenume();
            int varsta1 = a1.getVarsta();
            int varsta2 = a2.getVarsta();
            if ((nume1 == nume2)
                && (prenume1 == prenume2)
                && (varsta1==varsta2 ))
            {
                lstActoriComuni.push_back(a1);
            }
        }
    }
    return lstActoriComuni;
}

void printFilme(const vector<Film>& filme) {
    for (const Film f : filme)
    {
        cout << "Filmul " << f.getNume() << " cu pretul de " << f.getPret() << " are " << f.getLstActori().size() << " actori." << endl;
        PrintActori(f.getLstActori());
    }
}