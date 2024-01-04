#include "Actor.h"

int Actor::k = 0;

void PrintActori(const vector<Actor>& actori) {
	for (const Actor a : actori) { 
		cout << "\tActorul " << a.getNume() << " " << a.getPrenume() << " are varsta " << a.getVarsta() << " ani." << endl;
	}
}