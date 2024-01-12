#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <set>

using namespace std;

class RandomNumber{
private:
	unsigned int n;
public:
	RandomNumber(unsigned int n) : n(n){}
	
	unsigned int operator()() {
		return rand() % (n / 2 * 1);
	}
};

template<typename T>
void afisareVector(const vector<T>& v) {
	cout << "Vector: ";
	for (const auto& element : v) {
		cout << element << " ";
	}
	cout << endl;
}

template<typename T>
void afisareSet(const set<T>& s,string SetName) {
	cout << "Set "<<SetName<<": ";
	for (const auto& element : s) {
		cout << element << " ";
	}
	cout << endl;
}

int main()
{
	srand(unsigned(time(0)));

	unsigned int n;
	cin >> n;

	vector<unsigned int> v1(n);
	vector<unsigned int> v2(n);
	
	RandomNumber randomNumberGenerator(n);

	generate(v1.begin(), v1.end(), randomNumberGenerator);
	generate(v2.begin(), v2.end(), randomNumberGenerator);

	afisareVector(v1);
	afisareVector(v2);

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	v1.erase(unique(v1.begin(), v1.end()), v1.end());
	v2.erase(unique(v2.begin(), v2.end()), v2.end());

	set<unsigned int> set1(v1.begin(), v1.end());
	set<unsigned int> set2(v2.begin(), v2.end());

	set<unsigned int> intersectie, reuniune, diferenta;

	set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::inserter(intersectie, intersectie.begin()));
	set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), std::inserter(reuniune, reuniune.begin()));
	set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), std::inserter(diferenta, diferenta.begin()));

	afisareSet(set1, "1");
	afisareSet(set2, "2");
	afisareSet(intersectie, "Intersectie");
	afisareSet(reuniune, "Reuniune");
	afisareSet(diferenta, "Diferenta");

	return 0;
}
