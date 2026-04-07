#include<stdio.h>
int main(){
  int arr[]={1, 3, 2, 6, 3};
  for(int i=0;i<4;i++){
    if(i%2==0){
      if(arr[i]<arr[i+1]){
      }
      else{
        printf("Not valid");
        return 0;
      }
    }
    else{
      if(arr[i]>arr[i+1]){
      }
      else{
        printf("Not valid");
      return 0;
      }
    }
  }
  printf("valid");
}
