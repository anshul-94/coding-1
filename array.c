#include <stdio.h>
#include <stdlib.h>
void show();

int *p=NULL;
int s=0;
int cap=0;

void alloc_memory() {
  int *temp;
  cap+=5;
  temp = (int *)malloc(cap * sizeof(int));
    for(int i=0;i<s;i++){
        temp[i]=p[i];
    }   
    p=temp;
}



void add(int n){
  if(cap==s){
    alloc_memory();
    printf("memory alloc");
  }
  p[s]=n;
  s++;
}


void update(int ind){
  int n;
  if(s==cap){
    alloc_memory();
  }

  if(ind>s){
    printf("-------- not a valid index --------\n");
    return;
  }

  else{
    printf("enter number ");
    scanf("%d",&n);
    for(int i=s;i>ind;i--){
      p[i]=p[i-1];
    }
    s++;
    p[ind]=n;
  }
  show();
}


void delete(int idx){
  if(idx>=s){ 
    printf("-------- not a valid index --------\n");
  }
  else{
    for(int i=idx;i<s-1;i++){
        p[i]=p[i+1];
    }
    s--;
    show();
  }
}


void get_num(int n){
  for(int i=0;i<s;i++){
    if(p[i]==n){
      printf("num is %d at index %d\n",n,i);
      return ;
    }
  }
  printf("num is not array");
}


void reverse(){
  int st=0;
  int end=s-1;
  while(st<end){
    int temp=p[st];
    p[st]=p[end];
    p[end]=temp;
    st++;
    end--;
  }
  show();
}



void show(){
  if(s == -1) {
    printf("array empty");
  }
  else{
    for(int i=0;i<s;i++){
      printf("%d ",p[i]);
    }
  }
}

int main()
{
   int ch;
   int n,i;
   char choice;
   do
  {
    printf("\nPress 1 for add ");
    printf("\nPress 2 for delete");
    printf("\nPress 3 for update");
    printf("\nPress 4 for show");
    printf("\nPress 5 for get number");
    printf("\nPress 6 for reverse array");
    printf("\nPress 7 for Exit");
    printf("\nEnter your choice.  ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      printf("enter number ");
      scanf("%d",&n);
      add(n);
      break;
      case 2:
      printf("enter delete index ");
      scanf("%d",&i);
      delete(i);
      break;
      case 3:
      printf("enter index ");
      scanf("%d",&i);
      update(i);
      break;
      case 4:
      show();
      break;
      case 5:
      printf("enter num ");
      scanf("%d",&n);
      get_num(n);
      break;
      case 6:
      reverse();
      break;
      case 7:
      printf("exit\n");     
      break;
      default:
      printf("\nYou Entered Wrong Choice");
    }
  }while(ch!=7);
}
