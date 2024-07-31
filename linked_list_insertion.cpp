#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node* next; 
    Node(int data) {
        value = data;
        next = nullptr;
    }
};
void insertAtFirst(Node*& head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head; 
    head = new_node; 
}
void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "Null" << endl;
}
int main() {
    Node* n1 = new Node(20);
    Node* n2 = new Node(30);
    Node* n3 = new Node(40);

    n1->next = n2;
    n2->next = n3;

    Node* head = n1;
    insertAtFirst(head, 10);
    display(head);
    // insertAtFirst(head, 20);
    // display(head);
    return 0;
}
