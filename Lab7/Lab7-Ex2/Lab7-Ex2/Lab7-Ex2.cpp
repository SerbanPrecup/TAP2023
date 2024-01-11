#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList<int> list;

    list.insert(5);
    list.insert(10);
    list.insert(15);

    list.remove(10);

    std::cout << "Lista: " << std::endl;
    std::cout << list << std::endl;

    return 0;
}
