#include <stdio.h>

void is_same(int arr[],int arr2[],int s,int s2){
  for (int i=0;i<s;i++){
    int same=0;

    for (int k=0;k<i;k++){
      if(arr[i]==arr[k]){
        same=1;
      }
    }


    if (same==0){
      for (int j=0;j<s2;j++){
        if(arr[i]==arr2[j]){
          printf("%d ",arr[i]);
          break;
        }
      }
    }
  }
}

int main(){
  int arr[]={7,1,9,4,4,1,7};
  int arr2[]={2,1,5,12,7,1,9,1,1,6,7};
  int s=sizeof(arr)/sizeof(arr[0]);
  int s2=sizeof(arr2)/sizeof(arr2[0]);
  is_same(arr,arr2,s,s2);
}
