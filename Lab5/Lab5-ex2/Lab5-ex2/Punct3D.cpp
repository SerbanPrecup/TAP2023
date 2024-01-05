#include "Punct3D.h"
#include <cmath>

Punct3D::Punct3D(double x, double y, double z) : Punct2D(x, y), z(z) {}

Punct3D::Punct3D(const Punct3D& other) : Punct2D(other), z(other.z) {}


Punct3D::~Punct3D() {
    this->z = 0;
}

Punct3D& Punct3D::operator=(const Punct3D& other) {
    if (this != &other) {
        Punct2D::operator=(other);
        z = other.z;
    }
    return *this;
}

bool Punct3D::operator<(const Punct3D& other) const {
    return (x < other.x) || ((x == other.x) && ((y < other.y) || ((y == other.y) && (z < other.z))));
}

bool Punct3D::operator>(const Punct3D& other) const {
    return other < *this;
}

bool Punct3D::operator<=(const Punct3D& other) const {
    return !(*this > other);
}

bool Punct3D::operator>=(const Punct3D& other) const {
    return !(*this < other);
}

bool Punct3D::operator==(const Punct3D& other) const {
    return (x == other.x) && (y == other.y) && (z == other.z);
}

bool Punct3D::operator!=(const Punct3D& other) const {
    return !(*this == other);
}

Punct3D Punct3D::operator+(const Punct3D& other) const {
    return Punct3D(x + other.x, y + other.y, z + other.z);
}

Punct3D Punct3D::operator-(const Punct3D& other) const {
    return Punct3D(x - other.x, y - other.y, z - other.z);
}

Punct3D Punct3D::operator*(double scalar) const {
    return Punct3D(x * scalar, y * scalar, z * scalar);
}

Punct3D Punct3D::operator/(double scalar) const {
    if (scalar == 0) {
        cerr << "Error! Division by zero." << endl;
        return Punct3D(0, 0, 0);
    }
    return Punct3D(x / scalar, y / scalar, z / scalar);
}

Punct3D& Punct3D::operator+=(const Punct3D& other) {
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
}

Punct3D& Punct3D::operator-=(const Punct3D& other) {
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
}

Punct3D& Punct3D::operator*=(double scalar) {
    x *= scalar;
    y *= scalar;
    z *= scalar;
    return *this;
}

Punct3D& Punct3D::operator/=(double scalar) {
    if (scalar == 0) {
        cerr << "Error! Division by zero." << endl;
        return *this;
    }
    x /= scalar;
    y /= scalar;
    z /= scalar;
    return *this;
}

Punct3D& Punct3D::operator++() {
    ++x;
    ++y;
    ++z;
    return *this;
}

Punct3D Punct3D::operator++(int) {
    Punct3D temp(*this);
    ++(*this);
    return temp;
}

Punct3D& Punct3D::operator--() {
    --x;
    --y;
    --z;
    return *this;
}

Punct3D Punct3D::operator--(int) {
    Punct3D temp(*this);
    --(*this);
    return temp;
}

ostream& operator<<(ostream& os, const Punct3D& punct) {
    os << "(" << punct.x << ", " << punct.y << ", " << punct.z << ")";
    return os;
}

istream& operator>>(istream& is, Punct3D& punct) {
    is >> punct.x >> punct.y >> punct.z;
    return is;
}

double Punct3D::distanta(const Punct3D& p1, const Punct3D& p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    double dz = p1.z - p2.z;
    return sqrt(dx * dx + dy * dy + dz * dz);
}