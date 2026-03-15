#include<stdio.h>
int main(){
  int arr[]={2,7,2,7,4,4};
  int s=6;
  for (int i=0;i<s;i++){
    int fou=1;
    for(int j=0;j<s;j++){
      if(i!=j && arr[i]==arr[j]){
        fou=0;
      }
    }
    if(fou==1){
      printf("%d\n",arr[i]);
      return 0;
    }
  }
  printf("-1\n");
}
