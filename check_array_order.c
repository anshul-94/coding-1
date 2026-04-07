#include<stdio.h>
int main(){
  int arr[]={11,7,3,1,1};
  int ass=0;
  int des=0;
  for(int i=0;i<4;i++){

    if(arr[i]>arr[i+1] && ass==0){
      ass=1;
    }
    if(arr[i]<arr[i+1] && des==0){
      des=1;
    }
  }

  if(ass==0){
    printf("array is asec sorted");
  }

  else if(des==0){
    printf("array is desc sorted");
  }
  else{
    printf("array is not sorted");
  }
}
