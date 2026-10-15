#include<bits/stdc++.h>
using namespace std;

struct Node{

    int value;
    Node* next;

    Node(int v){
    value=v;
    next= NULL;
    }
};
int main(){

   int n;
   cin>>n;

   Node* head = NULL;

   for(int i=0; i<n; i++){
    int x;
    cin>>x;


   Node* newNode = new Node(x);

   if(head==NULL){
    head = newNode;
   }
   else {
    Node* temp=head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next=newNode;
   }
  }

   //insert at beginning

   int x;
   cin>>x;
   Node* newNode = new Node(x);
   newNode->next=head;
   head = newNode;
   Node*temp=head;

   while(temp!=NULL){
    cout<<temp->value<<"->";
    temp=temp->next;
   }

   cout<<head->value;

}
