#include <iostream>
#include "Punct2D.h"
using namespace std;

Punct2D::Punct2D(double x, double y) : x(x), y(y) {}
Punct2D::Punct2D(const Punct2D& other) {
    this->x = other.x;
    this->y = other.y;
}
Punct2D::~Punct2D() {
	this->x = 0;
	this->y = 0;
}

Punct2D& Punct2D::operator=(const Punct2D& other) {
	if (this != &other)
	{
		x = other.x;
		y = other.y;
	}
	return *this;
}

bool Punct2D::operator<(const Punct2D& other) const {
    return (x < other.x) || ((x == other.x) && (y < other.y));
}

bool Punct2D::operator>(const Punct2D& other) const {
    return other < *this;
}

bool Punct2D::operator<=(const Punct2D& other) const {
    return !(other < *this);
}

bool Punct2D::operator>=(const Punct2D& other) const {
    return !(*this < other);
}

bool Punct2D::operator==(const Punct2D& other) const {
    return (x == other.x) && (y == other.y);
}

bool Punct2D::operator!=(const Punct2D& other) const {
    return !(*this == other);
}

Punct2D Punct2D::operator+(const Punct2D& other) const {
    return Punct2D(x + other.x, y + other.y);
}

Punct2D Punct2D::operator-(const Punct2D& other) const {
    return Punct2D(x - other.x, y - other.y);
}

Punct2D Punct2D::operator*(double scalar) const {
    return Punct2D(x * scalar, y * scalar);
}

Punct2D Punct2D::operator/(double scalar) const {
    if (scalar == 0) {
        cerr << "Error! Division by zero." << endl;
        return Punct2D(0,0);
    }
    return Punct2D(x / scalar, y / scalar);
}

Punct2D& Punct2D::operator+=(const Punct2D& other) {
    x += other.x;
    y += other.y;
    return *this;
}

Punct2D& Punct2D::operator-=(const Punct2D& other) {
    x -= other.x;
    y -= other.y;
    return *this;
}

Punct2D& Punct2D::operator*=(double scalar) {
    x *= scalar;
    y *= scalar;
    return *this;
}

Punct2D& Punct2D::operator/=(double scalar) {
    if (scalar == 0) {
        cerr << "Error! Division by zero." << endl;
        return *this;
    }
    x /= scalar;
    y /= scalar;
    return *this;
}

Punct2D& Punct2D::operator++() {
    ++x;
    ++y;
    return *this;
}

Punct2D Punct2D::operator++(int) {
    Punct2D temp(*this);
    ++(*this);
    return temp;
}

Punct2D& Punct2D::operator--() {
    --x;
    --y;
    return *this;
}

Punct2D Punct2D::operator--(int) {
    Punct2D temp(*this);
    --(*this);
    return temp;
}

ostream& operator<<(ostream& os, const Punct2D& punct) {
    os << "(" << punct.x << ", " << punct.y << ")";
    return os;
}

istream& operator>>(istream& is, Punct2D& punct) {
    is >> punct.x >> punct.y;
    return is;
}

double Punct2D::distanta(const Punct2D& p1, const Punct2D& p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}