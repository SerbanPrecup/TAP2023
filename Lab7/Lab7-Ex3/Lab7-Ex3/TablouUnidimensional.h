#ifndef TABLOU_UNIDIMENSIONAL_H
#define TABLOU_UNIDIMENSIONAL_H

#include <iostream>

template<typename T>
class TablouUnidimensional {
private:
    T* array;
    int size;

public:
    TablouUnidimensional(int s);
    TablouUnidimensional(const TablouUnidimensional& other);
    ~TablouUnidimensional();
    TablouUnidimensional& operator=(const TablouUnidimensional& other);
    T& operator[](int index);

    template<typename U>
    friend std::ostream& operator<<(std::ostream& os, const TablouUnidimensional<U>& tablou);
};


//template<>
//class TablouUnidimensional<char> {
//private:
//    char* array;
//    int size;
//
//public:
//    TablouUnidimensional(int s);
//    TablouUnidimensional(const TablouUnidimensional& other);
//    ~TablouUnidimensional();
//    TablouUnidimensional& operator=(const TablouUnidimensional& other);
//    char& operator[](int index);
//
//    template<typename U>
//    friend std::ostream& operator<<(std::ostream& os, const TablouUnidimensional<U>& tablou);
//};

#endif

