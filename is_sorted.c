#include <stdio.h>

void is_sort(int arr[],int s){
  int asc=0,des=0;
  for (int i=0;i<s-1;i++){
    if(arr[i]>arr[i+1]){
      asc=1;
    }
  }

  for (int i=0;i<s-1;i++){
    if(arr[i]<arr[i+1]){
      des=1;
    }
  }

  if (asc==0){
    printf("array is ascsend order\n");
  }

  else if (des==0){
    printf("array is desc sorted\n");
  }
  else{
    printf("array is not sorted\n");
  }
}

int main(){
  int arr[]={118,191,72,41,1};
  int s=sizeof(arr)/sizeof(arr[0]);
  is_sort(arr,s);
}
