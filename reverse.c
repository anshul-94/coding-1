#include<stdio.h>
#include<stdlib.h>


struct node{
  struct node *next;
  int data;
};
struct node *head=NULL;
struct node *temp,*newnode;

void add(int n){
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=n;
  newnode->next=NULL;
  if(head==NULL){
    head=newnode;
  }
  else{
    newnode->next=head;
    head=newnode;
  }
}

void show(){
  temp=head;
  while(temp!=NULL){
    printf("%d-> ",temp->data);
    temp=temp->next;
  }
}

struct node* reverse(struct node *head,int k){
  struct node *cur=head;
  struct node *prev=NULL;
  struct node *next=NULL;

  while(cur!=NULL && k-->0){
    next=cur->next;
    cur->next=prev;
    prev=cur;
    cur=next;
  }
  if(next!=NULL){
    head->next=reverse(next,2);
  }
return prev;
}











void reverse_k(struct node *head,int k){
  struct node* cur=head;
  struct node* prev=NULL;
  struct node *next = NULL;

  while(cur!=NULL && k-->0){
    next=cur->next;
    cur->next=prev;
    prev=cur;
    cur=next;
  }
  head->next=cur;
  head=prev;
}







void mid(){
  struct node *slow=head;
  struct node* fast=head;

  while(fast!=NULL && fast->next!=NULL){
    fast=fast->next->next;
    slow=slow->next;
  }
  printf("\n mid -> %d",slow->data);
}






int main(){
  add(0);
  add(1);
  add(2);
  add(3);
  add(4);
  add(5);
  add(6);
  add(7);
  add(8);
  add(9);
  show();
  // head=reverse(head,2);
  printf("\n");
  // show();
  // mid();

  reverse_k(head->next->next->next,2);
    show();


}
