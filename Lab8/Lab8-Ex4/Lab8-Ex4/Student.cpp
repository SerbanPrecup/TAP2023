#include "Student.h"
bool Student::operator<(const Student& other) const {
    if (nume[0] != other.nume[0]) {
        return nume[0] < other.nume[0]; // Comparăm după primul nume
    }
    else {
        return nume[1] < other.nume[1]; // Comparăm după al doilea nume dacă primele sunt egale
    }
}

bool Student::operator==(const Student& other) const {
    if ((nume[0] == other.nume[0]) && (nume[1] == other.nume[1])) {
        return true;
    }
    else
        return false;
}

bool Student::operator!=(const Student& other) const {
    if ((nume[0] == other.nume[0]) && (nume[1] == other.nume[1])) {
        return false;
    }
    else
        return true;
}


