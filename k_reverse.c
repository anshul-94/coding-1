#include<stdio.h>

void reverse(int arr[],int s){
  int k=3;
  int st=0;
  int end=k-1;
  while(st<end){
    if(st<end){
      int temp=arr[st];
      arr[st]=arr[end];
      arr[end]=temp;
      st++;
      end--;
    }
    st=k;
    k+=3;
    if(k>s){
      end=s-1;
    }
    else{
      end=k-1;
    }
  }

  for(int i=0;i<s;i++){
    printf("%d ",arr[i]);
  }
  
}


int main(){
  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
  int s=16;
  reverse(arr,s);
}
