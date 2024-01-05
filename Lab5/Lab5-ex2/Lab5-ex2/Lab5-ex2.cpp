#include <iostream>
#include "Punct2D.h"
#include <vector>
#include "Punct3D.h"

using namespace std;

int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	vector<Punct2D> vPuncte2D;
	for (int i = 0; i < n; i++)
	{
		Punct2D p2(0,0);
		cout << "x si y: ";
		cin >> p2;
		vPuncte2D.push_back(p2);
	}
	cout << endl << vPuncte2D[0];
	int m;
	cout << "\nm = ";
	cin >> m;
	vector<Punct3D> vPuncte3D;
	for (int i = 0; i < m; i++)
	{
		Punct3D p3(0, 0,0);
		cout << "\nx, y si z: ";
		cin >> p3;
		vPuncte3D.push_back(p3);
	}
	cout << endl << vPuncte3D[0];

	cout << endl << Punct2D::distanta(vPuncte2D[0], vPuncte2D[1]);
	cout << endl << Punct3D::distanta(vPuncte3D[0], vPuncte3D[1]);

}

