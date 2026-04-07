#include<stdio.h>
int main(){
  int arr[]={1,2,3,4,5};
  int temp;
  for(int i=0;i<4;i++){
    if(i%2==0){
      if(arr[i]>arr[i+1]){
        temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
      }
    }
    else{
      if(arr[i]<arr[i+1]){
        temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
      }
    }
  }

  for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
  }
}
