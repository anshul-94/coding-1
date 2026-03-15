#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *next;
  int data;
};
struct node *head=NULL;
struct node *newnode;
struct node *temp;


void add(int n){
  newnode=(struct node*)malloc(sizeof(struct node));
  
  newnode->data=n;
  newnode->next=NULL;

  if(head==NULL){
    head=newnode;
  }
  else{
     temp=head;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=newnode;
  }
}


void mid(){
  struct node *fast=head;
  struct node *slow=head;
  int cou=0;
  while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
  }
  printf("mid data %d",slow->data);
}


void show(){
  temp=head;
  if(head==NULL){
    printf("linklist is empty\n");
    return;
  }
  while(temp!=NULL){
    printf("%d ->",temp->data);
    temp=temp->next;
  }
}



int main(){
    add(5);
    add(10);
    add(15);
    add(20);
    add(25);
  show();
  mid();
}
