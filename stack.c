#include<stdio.h>
#define n 5
int arr[n];
int top=-1;
void show();

void push(){
  if(n==top){
    printf("-------- array is full --------");
    return;
  }
  {
    printf("enter number ");
    scanf("%d",&arr[++top]);
  }
}


void peak(){
  if(top==-1){
    printf("-------- array is empty -------");
    return;
  }
  else{
    printf("peak element %d",arr[top]);
  }
}



void pop(){
  if(top==-1){
    printf("-------- array is empty --------");
    return;
  }
  else{
    printf("pop element %d\n",arr[top]);
    top--;
  }
  show();
}



// void reverse(){
// }


void show(){
  if(top==-1){
    printf("------- array is empty -------");
    return;
  }
  for(int i=0;i<=top;i++){
    printf("%d ",arr[i]);
  }
}

int main(){
  int ch;

  do{
    printf("\nPress 1 for push ");
    printf("\nPress 2 for pop");
    printf("\nPress 3 for peak");
    printf("\nPress 4 for show");
    // printf("\nPress 5 for reverse array");
    printf("\nPress 6 for Exit");
    printf("\nEnter your choice.  ");
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
    peak();
    break;

    case 4:
    show();
    break;

    // case 5:
    // reverse();
    // break;

    }

  }while(ch!=6);


}
