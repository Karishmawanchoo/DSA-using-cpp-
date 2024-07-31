//Deleting elements from a singly linked list
//Given the head of sorted linked list , delete
//all duplicates such that each appears only once . Return the linked list sorted as well
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next; 
    Node(int data) {
        value = data;
        next = NULL;
    }
};

void deleteDuplicates(Node* head) {
    if (head == NULL) return;
    Node* current = head;
    while (current != NULL && current->next != NULL){
        if (current->value == current->next->value) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        else{
            current = current->next;
        }
    }
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "Null" << endl;
}

int main(){
    Node* l1 = new Node(1);
    Node* l2 = new Node(1);
    Node* l3 = new Node(2);
    Node* l4 = new Node(3);
    Node* l5 = new Node(3);
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    Node* head = l1;
    cout << "Original list:" << endl;
    display(head);
    
    deleteDuplicates(head);
    
    cout << "List after removing duplicates:" << endl;
    display(head);
    
    return 0;
}
