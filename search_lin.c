#include <stdio.h>
int search(int arr[],int n,int tar){
  for(int i=0;i<n;i++){
    if(tar==arr[i]){
      return i;
    }
  }
  return -1;
}


int main(){
  int arr[]={1,2,3,4,5};
  int tar=2;
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("%d",search(arr,n,tar));
}
