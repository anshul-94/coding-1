#include<stdio.h>
#include<stdlib.h>
struct node{
  struct node* next;
  int data;
};
struct node* head,*newnode,*temp;


void add(int n){
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=n;
  newnode->next=NULL;
  int pos=0;

  if(head==NULL){
    head=newnode;
    return;
  }
  else{
    temp=head;
    while(temp!=NULL){
      if(temp->data > newnode->data){
        pos++;
      }
      else{
        break;
      }
      temp=temp->next;
    }
  }

      if(pos==0){
        newnode->next=head;
        head=newnode;
      }

      else{
        temp=head;
        while(temp->next!=NULL && --pos >0){
          temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
  }
}



void show(){
  temp=head;
  while(temp!=NULL){
    printf("%d -> ",temp->data);
    temp=temp->next;
  }
}


struct node *reverse_g(struct node *head,int k){
  struct node* cur=head;
  struct node* next=NULL,*prev=NULL;

  while(cur!=NULL && k-->0){
    next=cur->next;
    cur->next=prev;
    prev=cur;
    cur=next;
  }
  if(next!=NULL){
    head->next=reverse_g(next,4);
  }
  return prev;
}



int main(){
 for(int i=2;i<10;i++){
  add(i+2*i-1);
  add(5*i);
 }
 show();
//  printf("\n");
//  head=reverse_g(head,4);
//  show();
}
