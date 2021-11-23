#include<bits/stdc++.h>
using namespace std;


//Creating Structure for Student

typedef struct  student{
    int id; // size 4byte
    char name[50]; //size 50byte
    struct student *next; //size 8byte
} student;


//Size of Student = 4+50+8=62 ,we take 64 for divisible by 4



//ProtoTypes
void insert(student *head);
void displayData(student *head);

main(){

    //pointer for first Studnet
    student *first;

   // cout << "Size of Student " << sizeof(first) << endl;
//Dynamically allocate memory for First student

  first= (student*) malloc(sizeof(student));
  //Call Insert function for insert Node

  insert(first);
  //Call displayData for Displaying LinkedList

  displayData(first);
}


//Function for Inserting Data Into Linked List
void insert(student *head)
{
    char c;

    cout<< "Insert Your Id and Name"<<endl;

    cin>> head->id>> head->name;
    cout<< "Do You want to Insert any data ?"<<endl;
cin>> c;
    if(c=='y' || c=='Y')
    {

       head->next=(student *) malloc(sizeof(student));

       insert(head->next);
    }
    else{
        head->next=NULL;
    }

}


//Function for DisplayData Of linkedList
void displayData(student *head)
{
 if(head==NULL) return;
    cout<< head->id<< " " <<head->name<<endl;

    //recursively call again and again display

    displayData(head->next);
}
