#include<stdio.h>
#include<stdlib.h>
struct node{
  struct node *next;
  struct node *prev;
  int data;
};
struct node *head;
struct node *newnode,*temp,*last;

void add_end(int n){
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=n;
  newnode->next=NULL;
  if(head==NULL){
    head=newnode;
    newnode->prev=head;
    last=head;
  }
  else{
    last->next=newnode;
    newnode->prev=last;
    last=last->next;
  }
}

void add_f(int n){
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=n;
  newnode->next=NULL;
  if(head==NULL){
    head=newnode;
    newnode->prev=head;
    last=head;
  }
  else{
    newnode->next=head;
    head=newnode;
    newnode->prev=head;
    last=last->next;
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

void del_f(){
  if(head==NULL){
    printf("linklist is empty");
    return;
  }
  if(head->next==NULL){
    head =NULL;
  }
  else{
    head=head->next;
    head->prev=head;
  }
}

void del_l(){
  if(head==NULL){
    printf("linklist is empty");
    return;
  }
  if(head->next==NULL){
    head=NULL;
  }
  else{
    last=last->prev;
    last->next=NULL;
  }
}

void del_pos(int pos){
  if(head==NULL){
    printf("linklist is empty");
    return;
  }
  if(head->next==NULL){
    head=NULL;
  }
  else{
    temp=head;
    while(temp->next!=NULL && pos-->0){
      if(temp->next==NULL){
      }
      temp=temp->next;
    }
    temp->next->prev=temp->prev->next;
    temp->prev->next=temp->next;

  }

}



int main(){

  add_end(12);
  add_end(15);
  add_end(42);
  add_end(19);
  add_end(15);
  add_end(42);
  add_end(19);
  
  show();
  del_pos(2);
  printf("\n");
  show();
}
