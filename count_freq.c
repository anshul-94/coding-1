#include<stdio.h>
int main(){
  int arr[]={3,1,2,2,4,6,3,1,2,3};
  int s=10;
  for (int i=0;i<10;i++){
    int cou=0,not=0;
    for (int j=i;j<10;j++){
          for (int k=0;k<i;k++){
            if(arr[i]==arr[k]){
              not=1;
            }
          }
          if(not==0){
            if(arr[i]==arr[j]){
              cou++;
            }
          }
    }
    if(not==0){
        printf("%d %d\n",arr[i],cou);
      }
  }
}
