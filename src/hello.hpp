#ifndef HELLO_HPP
#define HELLO_HPP

#include "link.hpp"

class Node {
private:
    Link* data;
    Node* nextNode;

public:
    Node(Link* data);

    void setNext(Node* nextNode);
    Node* next();
    Link* getData();
};

#endif