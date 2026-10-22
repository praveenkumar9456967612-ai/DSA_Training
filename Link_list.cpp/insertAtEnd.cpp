#include<iostream>
using namespace std;
struct  Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};
void insertAtEnd(Node*& head, int val){
    Node*newNode = new Node(val);
    
    
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}
void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data;
        cout<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main(){
    Node* head = new Node(10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    insertAtEnd(head,40);
    insertAtEnd(head,50);
    printList(head);
    return 0;
}