#include "LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T>& other) {
    head = nullptr;
    Node<T>* temp = other.head;
    while (temp != nullptr) {
        insert(temp->data);
        temp = temp->next;
    }
}

template <typename T>
LinkedList<T>::~LinkedList() {
    while (head != nullptr) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
}

template <typename T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& other) {
    if (this == &other) {
        return *this;
    }

    while (head != nullptr) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }

    head = nullptr;
    Node<T>* temp = other.head;
    while (temp != nullptr) {
        insert(temp->data);
        temp = temp->next;
    }

    return *this;
}

template <typename T>
bool LinkedList<T>::operator==(const LinkedList<T>& other) const {
    Node<T>* temp1 = head;
    Node<T>* temp2 = other.head;

    while (temp1 != nullptr && temp2 != nullptr) {
        if (temp1->data != temp2->data) {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return temp1 == nullptr && temp2 == nullptr;
}

template <typename T>
std::ostream& operator<<(std::ostream& out, const LinkedList<T>& list) {
    Node<T>* temp = list.head;
    while (temp != nullptr) {
        out << temp->data << " ";
        temp = temp->next;
    }
    return out;
}

template <>
std::ostream& operator<<(std::ostream& out, const LinkedList<int>& list) {
    Node<int>* temp = list.head;
    while (temp != nullptr) {
        out << temp->data << " ";
        temp = temp->next;
    }
    return out;
}


template <typename T>
std::istream& operator>>(std::istream& in, LinkedList<T>& list) {
    T val;
    in >> val;
    list.insert(val);
    return in;
}

template <typename T>
void LinkedList<T>::insert(const T& val) {
    Node<T>* newNode = new Node<T>(val);
    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node<T>* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

template <typename T>
void LinkedList<T>::remove(const T& val) {
    Node<T>* temp = head;
    Node<T>* prev = nullptr;

    while (temp != nullptr && temp->data != val) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        return;
    }

    if (prev == nullptr) {
        head = temp->next;
    }
    else {
        prev->next = temp->next;
    }

    delete temp;
}

template class LinkedList<int>;
