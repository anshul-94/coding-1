#include<stdio.h>
#include<stdlib.h>
struct node{
  struct node *next;
  struct node *prev;
  int data;
};
struct node *root;
struct node *temp,*newnode;
void add(struct node *head,int n){
  int num=n;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->prev=NULL;
  newnode->next=NULL;
  newnode->data=n;
  if(head==NULL){
    root=newnode;
    return;
  }
  if(head->data>n){
    if(head->prev==NULL){
      head->prev=newnode;
    }
    else{
      add(head->prev,num);
    }
  }
  else{
    if(head->next==NULL){
      head->next=newnode;
    }
    else{
      add(head->next,num);
    }
  }
}

void show(struct node *head){
  if(head==NULL){
    return;
  }
  else{
    show(head->prev);
    printf("%d ->",head->data);
    show(head->next);
  }
}

void show_w(){
  struct node* temp=root;
  while(temp != NULL){
    printf("%d-> ",temp->data);
    temp=temp->next;
  }
}


int main(){
  add(root,50);
  for(int i=2;i<10;i++){
    add(root,i*i/2);
    add(root,i*i-1);
  }
  show(root);
  // show_w();
  printf("\n root dta %d",root->data);
}
