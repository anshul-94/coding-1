#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node *top=NULL;
struct node *newnode,*temp;

void push(){
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("enter number");
  scanf("%d",&newnode->data);

  if(top==NULL){
    top=newnode;
    newnode->next=NULL;
  }
  else{
    newnode->next=top;
    top=newnode;
  }
}

void pop(){
    if(top==NULL){
      printf("empty stack");
    }
    else{
      printf("delter item %d\n",top->data);
      top=top->next;
    }

}
void peek(){
    if(top==NULL){
      printf("empty stack");
      return;
    }
  printf("top %d\n",top->data);
}



void display(){
  temp=top;
    if(top==NULL){
      printf("empty stack");
      return;
    }
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }
}



int main()
{
   int ch;
   char choice;
   do
  {
    printf("\nPress 1 for Push operation");
    printf("\nPress 2 for Pop operation");
    printf("\nPress 3 for Peek operation");
    printf("\nPress 4 for Display operation");
    printf("\nPress 5 for Exit");
    printf("\nEnter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      push();
      break;
      case 2:
      pop();
      break;
      case 3:
      peek();
      break;
      case 4:
      display();
      break;
      case 5:
      printf("exit");     
      break;
      default:
      printf("\nYou Entered Wrong Choice");
    }
  }while(ch!=5);
}
