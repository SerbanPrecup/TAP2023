#include "Staack.h"
#include <iostream>
#include <QMessageBox>
using namespace std;
// Constructorul clasei Staack
Staack::Staack() {}

// Implementarea funcției push() pentru Array_Stack
void Array_Stack::push(int value) {
    if (!isFull()) {
        top++;
        vector[top] = value;
    } else {
        std::cout << "Stack is full. Cannot push element.\n";
    }
}

// Implementarea funcției pop() pentru Array_Stack
int Array_Stack::pop() {
    if (!isEmpty()) {
        int value = vector[top];
        top--;
        return value;
    } else {
        std::cout << "Stack is empty. Cannot pop element.\n";
        return -1; // sau un alt indicator pentru valoare lipsă
    }
}

// Implementarea funcției peek() pentru Array_Stack
int Array_Stack::peek() {
    if (!isEmpty()) {
        return vector[top];
    } else {
        std::cout << "Stack is empty. Cannot peek.\n";
        return -1; // sau un alt indicator pentru valoare lipsă
    }
}

// Implementarea funcției isEmpty() pentru Array_Stack
bool Array_Stack::isEmpty() {
    return top == -1;
}

// Implementarea funcției isFull() pentru Array_Stack
bool Array_Stack::isFull() {
    return top == max - 1;
}

// Implementarea funcției print() pentru Array_Stack
void Array_Stack::print() {
    if (isEmpty()) {
        std::cout << "Stack is empty.\n";
    } else {
        std::cout << "Stack elements: ";
        for (int i = 0; i <= top; ++i) {
            std::cout << vector[i] << " ";
        }
        std::cout << "\n";
    }
}

// Constructor pentru Array_Stack
Array_Stack::Array_Stack(int max) : top(-1), max(max) {
    vector = new int[max];
}

// Constructor de copiere pentru Array_Stack
Array_Stack::Array_Stack(const Array_Stack& other) {
    max = other.max;
    top = other.top;
    vector = new int[max];
    for (int i = 0; i <= top; ++i) {
        vector[i] = other.vector[i];
    }
}

// Destructor pentru Array_Stack
Array_Stack::~Array_Stack() {
    delete[] vector;
}
