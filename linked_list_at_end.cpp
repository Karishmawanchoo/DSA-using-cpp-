//insert node at the end
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int value;
    Node* next;
    Node(int data) {
        value = data;
        next = NULL;
    }
};
void insertAtFirst(Node*& head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head; 
    head = new_node; 
}
void insertAtLast(Node*& head, int value){
    Node* new_node = new Node(value);
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
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
    Node* n1 = new Node(30);
    //Node* n2 = new Node(30);
    // Node* n3 = new Node(40);
    Node* head = n1;
    insertAtFirst(head, 10);
    insertAtFirst(head, 20);
    insertAtLast(head,50);
    display(head);
    // insertAtFirst(head, 20);
    // display(head);
    return 0;
}

