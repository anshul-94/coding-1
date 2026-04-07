#include<stdio.h>
int main(){
  int arr[]={11,22,33,44};
  int n=sizeof(arr)/sizeof(int);
  int dubli[n*2];

  int j=0;
  for (int i=0;i<n;i++){
      dubli[j++]=arr[i];
      dubli[j++]=arr[i];
  }

  for (int i=0;i<n*2;i++){
    printf("%d ",dubli[i]);
  }

}
