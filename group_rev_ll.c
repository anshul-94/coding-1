#include<stdio.h>
#include<stdlib.h>
void show();

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



struct node* reverse(struct node *head,int k){
  struct node* cur=head;
  struct node* prev=NULL;
  struct node* next=NULL;
  while(cur!=NULL && k-->0){
    next=cur->next;
    cur->next=prev;
    prev=cur;
    cur=next;
  }
  if(next!=NULL){
    head->next=reverse(next,3);
  }
  return prev;
}



void group_reverse(struct node *rev,int k){
  struct node *cur=head;
  struct node *next=NULL;
  struct node *prev=NULL;

  while(cur!=NULL && k-->0){
    next=cur->next;
    cur->next=prev;
    prev=cur;
    cur=next;
  }
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
    add(30);
    add(40);
    add(45);


    show();
    head=reverse(head,3);
      printf("\n Reverse linklist \n");
    show();
}
