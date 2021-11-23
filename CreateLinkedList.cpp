#include<bits/stdc++.h>

using namespace std;


class Node {
    public:
        int data;
        Node *next;
};

main(){

//Initially they are always NULL
Node *head;
Node *one = NULL;
Node *two = NULL;
Node *three = NULL;

//allocate memory with New Keyword

one = new Node();
two = new Node();
three = new Node();


//Assign data to Linked

one->data = 4;
two->data = 6;
three->data = 8;

//connect nodes with another NODE

one->next = two;
two->next = three;
three->next = NULL;



head = one;   // Store 1st node address to Head Pointer

while(head!=NULL) {

    cout << head->data<<"   ";
    head= head->next;
}


}