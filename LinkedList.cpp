#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
        int data;
        Node *next;
};

void printLinkedList(Node* n)
{
while (n!=NULL)

{
      cout << n->data << " ";
        n = n->next;
}
};

main(){

    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
 
    head = new Node();
    second = new Node();
    third = new Node();
 
    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second
    second->data = 2;
    second->next = third;

    third->data = 4;
    third->next = NULL;

     printLinkedList(head);

    return 0;
}