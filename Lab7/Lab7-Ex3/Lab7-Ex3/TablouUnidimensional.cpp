#include "TablouUnidimensional.h"

template<typename T>
TablouUnidimensional<T>::TablouUnidimensional(int s) : size(s) {
    array = new T[size];
}

template<>
TablouUnidimensional<char>::TablouUnidimensional<char>(int s) : size(s) {
    array = new char[size];
}

template<typename T>
TablouUnidimensional<T>::TablouUnidimensional(const TablouUnidimensional& other) : size(other.size) {
    array = new T[size];
    for (int i = 0; i < size; ++i) {
        array[i] = other.array[i];
    }
}

template<>
TablouUnidimensional<char>::TablouUnidimensional(const TablouUnidimensional<char>& other) : size(other.size) {
    array = new char[size];
    for (int i = 0; i < size; ++i) {
        array[i] = other.array[i];
    }
}

template<typename T>
TablouUnidimensional<T>::~TablouUnidimensional() {
    delete[] array;
}

template<>
TablouUnidimensional<char>::~TablouUnidimensional() {
    delete[] array;
}

template<typename T>
TablouUnidimensional<T>& TablouUnidimensional<T>::operator=(const TablouUnidimensional& other) {
    if (this != &other) {
        delete[] array;
        size = other.size;
        array = new T[size];
        for (int i = 0; i < size; ++i) {
            array[i] = other.array[i];
        }
    }
    return *this;
}

template<typename T>
T& TablouUnidimensional<T>::operator[](int index) {
    return array[index];
}

template<typename U>
std::ostream& operator<<(std::ostream& os, const TablouUnidimensional<U>& tablou) {
    for (int i = 0; i < tablou.size; ++i) {
        os << tablou.array[i] << " ";
    }
    return os;
}

