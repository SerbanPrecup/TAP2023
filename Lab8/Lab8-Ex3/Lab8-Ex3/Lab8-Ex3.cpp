#include <iostream>
#include <fstream>
#include <string>
#include <map>


using namespace std;

int main()
{

    ifstream fin("intrare.txt");
    ofstream fout("iesire.txt");
    map<unsigned int, map<string, int>> cuvinte;
    //unsigned - nr linie
    //string - cuvantul
    //int - nr aparitii
    string cuvant;
    int i = 0;
    while (fin >> cuvant) {
        cuvinte[i][cuvant]++;
    }
    fin.close();
    for (const auto& pair1 : cuvinte) {
        fout << "Linia " << pair1.first << ":" << endl;
        for (const auto& pair2 : pair1.second) {
            fout << "   Cuvantul: " << pair2.first << ", Aparitii: " << pair2.second << endl;
        }
    }
    fout.close();
}

