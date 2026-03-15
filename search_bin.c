#include <stdio.h>

void bin_search(int arr[],int tar,int st,int end){
  while(st<=end){
    int mid=(st+end)/2;
    if (arr[mid]==tar){
      printf("target is found at index %d\n",mid);
      return;
    }
    else if(arr[mid]>tar){
      end=mid-1;
    }
    else{
      st=mid+1;
    }
  }
  printf("target not found\n");
}

int main(){
  int arr[]={8,9,10,41,51};
  int tar=41;
  int st=0;
  int end=sizeof(arr)/sizeof(arr[0]);
  bin_search(arr,tar,st,end);
}
