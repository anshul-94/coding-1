#include<stdio.h>
int main(){
  int arr[]={2,4,9,6,1};
  for(int i=0;i<5;i++){
     for(int j=i+1;j<5;j++)
      if(arr[i]==arr[j]){
          printf("%d ",arr[i]);
          return 0;
    }
  }
    printf("no dubli\n");
}

