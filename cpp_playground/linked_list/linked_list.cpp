#include <iostream>
#include <string>

struct Node {
    int node_value;
    Node* prev_node;
    Node* next_node;

    Node(int value) {
        node_value = value;
        prev_node = nullptr;
        next_node = nullptr;
    }

    void get_next_node() {
    }

    void get_prev_node() {
    }
};

int main() {
    std::cout << "Hello! This is a linked list" << "\n\n";

    Node* new_node = new Node{51};

    std::cout << "New node value " << new_node->node_value << ".\n";

    return 0;
}
