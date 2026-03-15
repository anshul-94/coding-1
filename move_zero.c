#include <stdio.h>
int main(){
  int arr[]={0,1,0,0,2};
 for (int i=0;i<5;i++){
  for (int j=0;j<5-1;j++){
    if(arr[j]==0){
      int temp=arr[j+1];
      arr[j+1]=arr[j];
      arr[j]=temp;
    }
  }
 }

  for (int i=0;i<5;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
