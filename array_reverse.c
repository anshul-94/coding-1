#include<stdio.h>
int main(){
  int arr[]={3,1,6,7,9};
  int st=0;
  int n=sizeof(arr)/sizeof(arr[0]);
  int end=n-1;
  while(st<end){
    int temp=arr[st];
    arr[st]=arr[end];
    arr[end]=temp;
    st++;
    end--;
  }
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
}
