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
void printer(node* headRef){
  node* temp=headRef;
  while(temp!=NULL){
    cout << temp->data << " ";
    temp=temp->next;

  }
}
int main(){
  node* head = NULL; 
  
    // Add elements in linked list 
    push(&head, 7); 
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 2); 
  
     
    printer(head);
  
    deleteNode(&head, 1); 
    puts("\nLinked List after Deletion of 1: "); 
      
    printer(head); 
      
    return 0; 
}