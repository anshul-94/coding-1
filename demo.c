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
    return;
  }
  temp=head;
  while (temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
}


void add_sort(int n){
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=n;
  newnode->next=NULL;

  if(head==NULL){
    head=newnode;
    return;
  }

  if(n < head->data){
    newnode->next = head;
    head = newnode;
    return;
  }

  else{
    temp=head;
    while(temp->next!=NULL && temp->next->data<n){
      temp=temp->next;
      if(temp->next!=NULL){
        if( temp->next->data==n){
          return;
        }
      }
    }

      
      if(temp==NULL){
        temp->next=newnode;
      }
      else{
        newnode->next=temp->next;
        temp->next=newnode;
      }
    
  }
}





struct node* gro_rev(struct node* head,int n){
  struct node *cur=head;
  struct node *prev=NULL,*next=NULL;
  int k=n;
  while(cur!=NULL && --k>0){
    next=cur->next;
    cur->next=prev;
    prev=cur;
    cur=next;
  }

  if(next!=NULL){
    head->next=gro_rev(next,n);
  }
  return prev;

}



void k_node_rev(int k){
  struct node* cur=head;
  struct node* prev=NULL;
  struct node* next=NULL;

  while(cur!=NULL && k-->0){
    next=cur->next;
    cur->next=prev;
    prev=cur;
    cur=next;
  }

  head->next=cur;
  head=prev;
}














void rev(){
  struct node *cur=head;
  struct node *next=NULL;
  struct node *prev=NULL;

  while(cur!=NULL){
    next=cur->next;
    cur->next=prev;
    prev=cur;
    cur=next;
  }
  head=prev;
}

void show(){
  temp=head;
  while(temp!=NULL){
    printf("%d -> ",temp->data);
    temp=temp->next;
  }

}
int main(){

  for(int i=2;i<8;i++){
    add_sort(i*11-i);
    add_sort(i+1*2-1);
    add_sort(i*4);
  }
  show();
//   printf("\nReverse\n");
//   // head=gro_rev(head,4);
//   k_node_rev(1);
//   show();
}
