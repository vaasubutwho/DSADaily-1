#include <bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node* next;
};
void push(node** headRef, int data){
  node* newNode=new node();
  newNode->data=data;
  newNode->next=(*headRef);
  *headRef=newNode;
}
void deleteNode(node** headRef, int key){
  node* temp= *headRef;
  node* prev=NULL;
  if(temp!=NULL && temp->data==key){
    *headRef=temp->next;
    delete temp;
    return;
  }
  while(temp!=NULL && temp->data!=key){
    prev=temp;
    temp=temp->next;
  }
  if(temp==NULL){
    return;

  }
  prev->next=temp->next;
  delete temp;
}
void printList(node** headRef){
  
}