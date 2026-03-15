#include<stdio.h>
#define s 5
int n;
int arr[s];
int front=-1;
int rear=-1;
int item=0;

void pop(){
  if(front==-1){
    printf("------ queqe is empty-------- \n");
    return;
  }
  else if(front==rear){
    printf("deleted item %d\n",arr[front]);
    front=-1;
    rear=-1;
  }
  else{
    printf("deleted item %d\n",arr[front]);
    front++;
  }

}


void push(){
  if(rear==s-1){
    printf("------ queqe is full-------- \n");
    return ;
  }

  printf("enter num  ");
  scanf("%d",&item);

  if(front==-1){
    front=0;
  }
    arr[++rear]=item;
}

void display(){
  if(front==-1){
    printf("------ queqe is empty-------- \n");
  }
  else{
    for(int i=front;i<=rear;i++){
      printf("%d ",arr[i]);
    }
  }
}


void reverse_mid(){
  printf("\nbefore reverse : ");
  display();
  int st=front+1;
  int end=rear-1;
  while(st<end){
    int temp=arr[st];
    arr[st]=arr[end];
    arr[end]=temp;
    st++;
    end--;
  }
  printf("\nafter reverse : ");
  display();

}



int main(){
    do{
      printf("\npress 1 for delete \npress 2 for add\npress 3 for display\npress 4 for reverse\npress 5 for exit    ");
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
      reverse_mid();
      break;
      case 5:
      printf("exit \n");
      break;
      default :
      printf("invalid choice\n");
      }
    }while(n != 5);
}
