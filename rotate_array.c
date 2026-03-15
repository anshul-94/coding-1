// #include<stdio.h>
// int main(){
//   int arr[]={1,2,3,4,5};
//   int k=2;
//   int n=5;
//   int fir;
//   for (int i=0;i<k;i++){
//     fir=arr[0];
//     for(int j=i;j<n-1;j++){
//       arr[j]=arr[j+1];
//     }
//     arr[n-1]=fir;
//   }
//   for (int i=0;i<n;i++){
//     printf("%d ",arr[i]);
//   }
// }



// #include<stdio.h>
// int main(){
//   int arr[]={1,2,3,4,5};
//   int k=2;
//   int s=5;
//   int st=0;
//   int end=k-1;
//   int a=0;

//   while(st<end){
//     while(st<end){
//       int temp=arr[st];
//       arr[st]=arr[end];
//       arr[end]=temp;
//       st++;
//       end--;
//     }

//     if(a==0){ 
//       st=k;
//       end=s-1;
//       a=1;
//     }
//     else if(a==1){
//       st=0;
//       end=s-1;
//       a=-1;
//     }

//   }

//   for(int i=0;i<s;i++){
//     printf("%d ",arr[i]);
//   }
// }














#include<stdio.h>
int main(){
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  int k=4;
  int n=10;
  for (int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
}


