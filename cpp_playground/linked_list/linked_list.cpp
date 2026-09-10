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

struct linkedList {
    Node* first_node;
    Node* last_node;
    int size;

    linkedList() {
        first_node = nullptr;
        last_node = nullptr;
        size = 0;
    }

    void insert(int value) {
        Node* new_node = new Node(value);
        if(size == 0) {
            first_node = new_node;
        }
        last_node = new_node;
        size = size + 1;
    }
};

int main() {
    std::cout << "Hello! This is a linked list" << "\n\n";

    std::vector<int> numbers = {10, 20, 30, 40, 50};

    linkedList linkedList;

    for(int num : numbers) {
        linkedList.insert(num);
    }

    std::cout << "First node value is " << linkedList.first_node->node_value << "\n";
    std::cout << "Last node value is " << linkedList.last_node->node_value << "\n";
    std::cout << "Linked list size is " << linkedList.size << "\n";

    return 0;
}
