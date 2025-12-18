#include <bits/stdc++.h>
using namespace std;

// stack using linked list (tail-based)
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Linked_lists {
    Node* head;
    Node* tail;

public:
    Linked_lists() {
        head = tail = NULL;
    }

    // push (O(1))
    void push_stack(int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    // pop (O(n))
    void pop() {
        if (head == NULL) {
            cout << "Stack Underflow\n";
            return;
        }

        // only one element
        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }

        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    // top (peek)
    void top() {
        if (tail == NULL) {
            cout << "Stack is empty\n";
            return;
        }
        cout << tail->data << endl;
    }
};
