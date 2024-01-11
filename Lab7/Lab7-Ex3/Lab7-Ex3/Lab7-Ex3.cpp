#include <iostream>
#include "TablouUnidimensional.h"
#include <string>
using namespace std;
int main() {
    TablouUnidimensional<int> tab_int(5);
    for (int i = 0; i < 5; ++i) {
        tab_int[i] = i * 2;
    }
    std::cout << "Tablou int: " << tab_int << std::endl;

    TablouUnidimensional<char> tab_char(6);
    int j = 0;
    for (char i = 'a'; i < 'e'; ++i) {
        tab_char[j++] = i;
    }    std::cout << "Tablou char: " << tab_char << std::endl;

    return 0;
}

//de intrebat pe luni cum se fac specializarile in interiorul claselor si care ar fi erorile.
