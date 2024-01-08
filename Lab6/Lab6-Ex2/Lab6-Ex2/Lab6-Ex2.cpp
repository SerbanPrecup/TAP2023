#include <iostream>
#include "Triunghi.h"
#include "Dreptunghic.h"
#include "Isoscel.h"
#include "Echilateral.h"
#include "DreptunghicIsoscel.h"

using namespace std;

int main()
{
    Isoscel i(2,4);
    cout << i.arie() << " " << i.perimetru() << endl;

    Echilateral e(3);
    cout << e.arie() << " " << e.perimetru() << endl;

    Dreptunghic d(3, 4, 5);
    cout << d.arie() << " " << d.perimetru() << endl;

    DreptunghicIsoscel di(6, 8);
    cout << di.arie() << " " << di.perimetru() << endl;
}
