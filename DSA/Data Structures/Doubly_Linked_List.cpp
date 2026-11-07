
#include <iostream>
using namespace std;

template <typename T>
class DoublyLinkedList {
private:
    struct Node {
        T data;
        Node* prev;
        Node* next;

        Node(const T& value) {
            data = value;
            prev = nullptr;
            next = nullptr;
        }
    };

    Node* head = nullptr;
    Node* tail = nullptr;
    int count = 0;

public:
    DoublyLinkedList() = default;

    // Prevent accidental shallow copying
    DoublyLinkedList(const DoublyLinkedList&) = delete;
    DoublyLinkedList& operator=(const DoublyLinkedList&) = delete;

    // Free allocated memory
    ~DoublyLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    // Challenge 1
    void insertAtHead(const T& value) {
        // TODO
    }

    // Challenge 2
    void insertAtTail(const T& value) {
        // TODO
    }

    // Challenge 3
    bool deleteVal(const T& value) {
        // TODO
        return false;
    }

    // Challenge 4
    void reverse() {
        // TODO
    }

    // Challenge 5
    void displayForward() const {
        // TODO
    }

    // Challenge 6
    void displayBackward() const {
        // TODO
    }
};

int main() {
    DoublyLinkedList<int> list;

    // Test your methods here

    return 0;
}
