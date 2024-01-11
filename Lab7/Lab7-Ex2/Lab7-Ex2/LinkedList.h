#pragma once
#include <iostream>

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node() : next(nullptr) {}
    Node(const T& val) : data(val), next(nullptr) {}
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList();
    LinkedList(const LinkedList<T>& other);
    ~LinkedList();

    LinkedList<T>& operator=(const LinkedList<T>& other);
    bool operator==(const LinkedList<T>& other) const;

    template <typename U>
    friend std::ostream& operator<<(std::ostream& out, const LinkedList<U>& list);

    template <typename U>
    friend std::istream& operator>>(std::istream& in, LinkedList<U>& list);

    void insert(const T& val);
    void remove(const T& val);
};
