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
  
}