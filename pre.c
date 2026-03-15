// #include<stdio.h>
// int main(){
//   int x=1;
//   int arr[] = {4, 5, 2, 25};
//   for (int i=0;i<4;i++){
//     x=i+1;
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     if(x>=n){
//       printf("-1\n");
//       return 0;
//     }
//     while (x!=0){
//       if(arr[i]<arr[x]){
//         printf("%d ",arr[x]);
//         x=0;
//       }
//       else{
//         x++;
//       }
//     }
//   }
// }








// #include<stdio.h>
// int main(){
//   int arr[] = {1, 2, 3, 4, 5, 6, 7};
//   int k = 3;
//   int n=7;
//   int st=n-k;
//   int end=n-1;

//   while (st < end) {
//         int temp = arr[st];
//         arr[st] = arr[end];
//         arr[end] = temp;
//         st++;
//         end--;
//     }


  
//     st = 0;
//     end = k;
//     while (st < end) {
//         int temp = arr[st];
//         arr[st] = arr[end];
//         arr[end] = temp;
//         st++;
//         end--;
//     }


//   for (int i=6;i>=0;i--){
//     printf("%d ",arr[i]);
//   }
// }











// #include<stdio.h>
// int main(){
//   int arr[] = {1, 2, 3, 4, 5, 6, 7,8,9,10};
//   int k = 3;
//   int n=10;
//   for(int i=0;i<n;i+=k){
//   int st=i;
//   int end=i+k-1;


//   if (end >= n){
//     end=n-1;
//   }

//   while (st < end) {
//         int temp = arr[st];
//         arr[st] = arr[end];
//         arr[end] = temp;
//         st++;
//         end--;
//     }
// }
//   for (int i=0;i<n;i++){
//     printf("%d ",arr[i]);
//   }



// }


// #include<stdio.h>
// int main(){
//   int arr[]={2,3,1,5};
//   for (int i=0;i<4;i++){
//     int pro=1;
//     for (int j=0;j<4;j++){
//       if(i!=j){
//         pro=pro*arr[j];
//       }
//     }
//     printf("%d ",pro);
//   }
// }


// #include<stdio.h>
// int main(){
//   int arr[]={2,3,4,5};
//   if(arr[0]!=1){
//     printf("1\n");
//     return 0;
//   }
//   for(int i=0;i<3;i++){
//     if(arr[i]+1==arr[i]){

//     }
//     else{
//       printf("%d",arr[i]);
//     }
//   }
// }




// #include<stdio.h>
// int main(){
//   int arr[]={9,6,3,4};
//   int n=4;


//   for(int i=0;i<n;i++){
//     for (int j=i+1;j<n;j++){
//       if(arr[i]>arr[j]){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//       }
//     }
//   }

//     for(int u=0;u<n;u++){
//       printf("%d",arr[u]);
//     }

// }




// #include<stdio.h>
// int main(){
//   int arr[]= {16, 17, 4, 3, 5, 2};

//   int i=0;
//   for( i=0;i<6;i++){
//     int s=0;
//     for (int j=i+1;j<6;j++){
//       if(arr[i]<arr[j]){
//         s=1;
//         break;
//       }
     
//     }
//     if(s==0){
//       printf("%d ",arr[i]);
//     }
//   }
// }








