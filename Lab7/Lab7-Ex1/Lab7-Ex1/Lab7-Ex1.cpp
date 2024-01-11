#include <iostream>
#include <vector>
using namespace std;

template <typename T>

T max(vector<T> vectorT)
{
	T elMax = vectorT[0];
	for (T element : vectorT) {
		if (element > elMax)
			elMax = element;
	}
	return elMax;
}

template <typename T>
T min(vector<T> vectorT)
{
	T elMin = vectorT[0];
	for (T element : vectorT) {
		if (element < elMin)
			elMin = element;
	}
	return elMin;
}

template <typename T>
int cautareSecventiala(vector<T> vectorT,T elCautat)
{
	for (int i = 0; i < vectorT.size();i++) {
		if (vectorT[i] == elCautat)
			return i;
	}
	return -1;
}

template <typename T>
void sortareBule(vector<T>& vectorT) {
	int n = vectorT.size();
	bool schimbat;

	for (int i = 0; i < n - 1; i++) {
		schimbat = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (vectorT[j] > vectorT[j + 1]) {
				swap(vectorT[j], vectorT[j + 1]);
				schimbat = true;
			}
		}
		if (!schimbat) {
			break;
		}
	}
}

template <>
void sortareBule(vector<char>& vectorC) {
	int n = vectorC.size();
	bool schimbat;
	for (int i = 0; i < n - 1; i++) {
		schimbat = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (vectorC[j] < vectorC[j + 1]) {
				swap(vectorC[j], vectorC[j + 1]);
				schimbat = true;
			}
		}
		if (!schimbat) {
			break;
		}
	}
}

template <typename T>
int cautareBinara(vector<T> vectorT, T elCautat)
{
	sortareBule(vectorT);
	int stanga = 0;
	int dreapta = vectorT.size() - 1;

	while (stanga <= dreapta) {
		int mijloc = stanga + (dreapta - stanga) / 2;

		if (vectorT[mijloc] == elCautat)
			return mijloc;

		if (vectorT[mijloc] < elCautat)
			stanga = mijloc + 1;
		else
			dreapta = mijloc - 1;
	}

	return -1;
}

int main()
{
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(3);
	vec.push_back(2);
	vec.push_back(2);
	int maxim = ::max(vec);
	int minim = ::min(vec);
	int index1 = cautareSecventiala(vec, 3);
	int index2 = cautareBinara(vec, 3);
	sortareBule(vec);
	cout << maxim << endl << minim << endl << index1 << endl << index2<<endl;
	for (int i : vec) {
		cout << endl << i;
	}
	vector<char> vecChar;
	vecChar.push_back('f');
	vecChar.push_back('b');
	vecChar.push_back('j');
	vecChar.push_back('i');
	char maximC = ::max(vecChar);
	char minimC = ::min(vecChar);
	int index1C = cautareSecventiala(vecChar, 'i');
	int index2C = cautareBinara(vecChar, 'i');
	sortareBule(vecChar);
	cout << maximC << endl << minimC << endl << index1C << endl << index2C << endl;
	for (char i : vecChar) {
		cout << endl << i;
	}
}
