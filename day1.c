// // Product of Array Except Self
// #include<stdio.h>
// int main(){
//   int arr[5]={1,2,3,4};
//   int pro[5]={1,1,1,1};
//   for (int i=0;i<4;i++){
//     for(int j=0;j<4;j++){
//       if(arr[i]!=arr[j]){
//         pro[i]=arr[j]*pro[i];
//       }
//     }
//   }

//   for(int i=0;i<4;i++){
//     printf("%d ",pro[i]);
//   }
// }




// // 2. Find the First Missing Positive
// #include<stdio.h>
// int main(){
//   int find=0;
//   int arr[4]={2,4,-1,1};
//   for (int i=1;i<=4;i++){

//     for(int j=0;j<4;j++){
//       if(arr[j]==i){
//         find=1;
//         break;
//       }
//     }
//     if(find==0){
//       printf("%d",i);
//       return 0;
//     }
//     find=0;
    
//   }
//     printf("not missing");
// }




// 3. Maximum Product Subarray
// #include<stdio.h>
// int main(){
//   int find=0;
//   int pro=1;
//   int max=0;
//   int s1,s2;
//   int arr[4]={2,3,-2,4};
//   for (int i=0;i<4-1;i++){
//       pro=arr[i]*arr[i+1];
//       if(pro>max){
//         s1=i;
//         s2=i+1;
//       }
//   }
//   printf("%d %d",arr[s1],arr[s2]);
// }



// // 4. Find Duplicate Number (Cycle Detection)
// #include<stdio.h>
// int main(){
//   int find=0;
//   int pro=1;
//   int max=0;
//   int s1,s2;
//   int arr[5]={4,3,1,2,3};
//   for (int i=0;i<5;i++){
//     for(int j=i+1;j<5;j++)
//       if(arr[i]==arr[j]){
//           printf("%d",arr[i]);
//           return 0;
//       }
//   }
// }



// // 5. Subarray with Given Sum (Positive Numbers)
// #include<stdio.h>
// int main(){
//   int arr[]={1,4,20,3,10,5};
//   int tar=33;

//   for(int i=0;i<5;i++){
//   }
// }



// // 9. Find Peak Element

// #include<stdio.h>
// int main(){
//   int arr[]={111,4,120,3,10,51};
//   int max=0;

//   for(int i=0;i<6;i++){
//     if(arr[i]>max){
//       max=arr[i];
//     }
//   }

//   printf("%d",max);
// }



// 12. Next Greater Element
// #include<stdio.h>
// int main(){
//   int arr[]={4,5,2,25};
//   for(int i=0;i<4;i++){
//     for(int j=i;j<4;j++){
//       if(arr[j]>arr[i]){
//         printf("%d ",arr[j]);
//         break;
//       }
//     }
//   }
//   printf("%d",-1);
// }




// //  13. Find Majority Element (> n/3)
// #include<stdio.h>
// int main(){
//   int arr[]={2,2,3,1,2};
//   for(int i=0;i<6;i++){
//     for(int j=0;j<6;j++){
//       if(arr[i]<arr[j]){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//       }
//     }
//   }
//     for(int i=0;i<6;i++){
//       printf("%d ",arr[i]);
//     }

// int count=1;
// int count2=0;
// int num;
//     for(int i=0;i<6;i++){
//       for(int j=i+1;j<6;j++){
//         if(arr[i]==arr[j]){
//           count++;
//         }
//         else{
//           if(count >count2){
//             count2=count;
//             num=arr[i];
//           }
//           count=1;
//           break;
//         }
//     }
//   }
//   printf("\nnumber freq  %d\n",num);
// }





// // 1. Product of Array Except Self
// #include<stdio.h>
// int main(){
//   int n=4;
//   int arr[4]={1,2,3,4};
//   int pro[4];
//   int left[4],right[4];
//   left[0]=1;

//   for(int i=1;i<4;i++){
//     left[i]=left[i-1]*arr[i-1];
//   }

//   right[n-1]=1;
//   for(int i=n-2;i>=0;i--){
//     right[i]=right[i+1]*arr[i+1];
//   }
//     for(int i=0;i<n;i++){
//         printf("%d ", right[i]*left[i]);
//     }
// }


// // 3. Maximum Product Subarray
// #include<stdio.h>
// int main(){
//   int find=0;
//   int pro=1;
//   int max=0;
//   int s1,s2;
//   int arr[4]={2,3,-2,4};
//   for (int i=0;i<4-1;i++){
//       pro=arr[i]*arr[i+1];
//       if(pro>max){
//         s1=i;
//         s2=i+1;
//         max=pro;
//       }
//   }
//   printf("%d %d",arr[s1],arr[s2]);
// }

// // 7. Find All Subarrays with Zero Sum (Count)
// #include <stdio.h>
// int main() {
//     int arr[] = {4,2,-3,1,6};
//     int n = 5;
//     int count = 0;
//     for(int i=0;i<n;i++){
//       int sum = 0;
//       for(int j=i;j<n;j++){
//       sum += arr[j];
//         if(sum == 0)
//           count++;
//         }
//       }
//     printf("%d", count);
// }


#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4};
    int n = 4;
    for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1]){
        printf("%d",arr[i]);
        return 0;
      }
    }
    printf("%d",arr[3]);
}

