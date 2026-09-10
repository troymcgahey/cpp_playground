#include <iostream>
#include <string>

struct Node {
    int node_value;
    Node* prev_node = nullptr;
    Node* next_node = nullptr;
};

int main() {
    std::cout << "Hello! This is a linked list" << "\n\n";

    Node* new_node = new Node{51};

    std::cout << "New node value " << new_node->node_value << ".\n";

    return 0;
}
