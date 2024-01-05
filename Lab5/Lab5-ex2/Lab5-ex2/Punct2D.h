#pragma once
class Punct2D
{
protected:
	double x, y;
public:
	Punct2D(double x, double y);
	Punct2D(const Punct2D& other);
	~Punct2D();
	Punct2D& operator=(const Punct2D& other);
    bool operator<(const Punct2D& other) const;
    bool operator>(const Punct2D& other) const;
    bool operator<=(const Punct2D& other) const;
    bool operator>=(const Punct2D& other) const;
    bool operator==(const Punct2D& other) const;
    bool operator!=(const Punct2D& other) const;

    Punct2D operator+(const Punct2D& other) const;
    Punct2D operator-(const Punct2D& other) const;
    Punct2D operator*(double scalar) const;
    Punct2D operator/(double scalar) const;

    Punct2D& operator+=(const Punct2D& other);
    Punct2D& operator-=(const Punct2D& other);
    Punct2D& operator*=(double scalar);
    Punct2D& operator/=(double scalar);

    Punct2D& operator++();     // Pre-increment
    Punct2D operator++(int);   // Post-increment
    Punct2D& operator--();     // Pre-decrement
    Punct2D operator--(int);   // Post-decrement

    friend std::ostream& operator<<(std::ostream& os, const Punct2D& punct);
    friend std::istream& operator>>(std::istream& is, Punct2D& punct);

    static double distanta(const Punct2D& p1,const Punct2D& p2);
};

