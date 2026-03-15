#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;
struct node *temp=NULL,*newnode;


void push(){
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("enter number");
  scanf("%d",&newnode->data);
  newnode->next=NULL;

  if(front==NULL){
    front=newnode;
    rear=newnode;
  }
  else{
    rear->next=newnode;
    rear=newnode;
  }
}
void pop(){
  if(front==NULL){
    printf("queque is empty");
    return;
  }
  if(rear==front){
    printf("delet item : %d",front->data);
    front=NULL;
    rear=NULL;
  }
  else{
    printf("delet item : %d",front->data);
    front=front->next;
  }
}

void display(){
  temp=front;
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }

}




int main(){
  int n;
    do{
      printf("\npress 1 for delete \npress 2 for add\npress 3 for display\npress 4 for exit    ");
      scanf("%d",&n);
      switch(n){
      case 1:
      pop();
      break;
      case 2:
      push();
      break;
      case 3:
      display();
      break;
      case 4:
      printf("exit \n");
      break;
      default :
      printf("invalid choice\n");
      }
    }while(n != 4);
}





