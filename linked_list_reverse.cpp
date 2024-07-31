//Traversing in reverse order
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
void insert(Node * head , int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = newNode;
}

void reverseDisplayRecursive(Node* head) {
    if (head == NULL) return;
    reverseDisplayRecursive(head->next);
    cout << head->value << " -> ";
}
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "Null" << endl;
}

int main() {
    Node* l1 = new Node(1);
    Node* l2 = new Node(2);
    Node* l3 = new Node(3);
    Node* l4 = new Node(4);
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    Node* head = l1;
    cout << "Original list:" << endl;
    display(head);
    
    cout << "List in reverse order:" << endl;
    reverseDisplayRecursive(head);
    cout << "Null" << endl;
    
    return 0;
}