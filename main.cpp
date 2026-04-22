#include <iostream>
#include "src/hello.hpp"

using namespace std;

int main() {
    Link gold("Gold");
    Link silver("Silver");
    Link bronze("Bronze");

    Node* node1 = new Node(&gold);
    Node* node2 = new Node(&silver);
    Node* node3 = new Node(&bronze);

    node1->setNext(node2);
    node2->setNext(node3);

    Node* current = node1;

    while (current != nullptr) {
        cout << current->getData()->get_material() << " -> ";
        current = current->next();
    }

    cout << "NULL" << endl;

    return 0;
}