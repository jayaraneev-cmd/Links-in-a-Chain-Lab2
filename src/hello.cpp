#include "hello.hpp"

// Constructor
Node::Node(Link* data) {
    this->data = data;
    this->nextNode = nullptr;
}

// Set next node
void Node::setNext(Node* nextNode) {
    this->nextNode = nextNode;
}

// Get next node
Node* Node::next() {
    return this->nextNode;
}

// Get data
Link* Node::getData() {
    return this->data;
}