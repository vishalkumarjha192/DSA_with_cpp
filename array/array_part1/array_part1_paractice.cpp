#include <iostream>
#include <string> // use for do any operations on String
#include <vector> // use for do any operations on array
using namespace std;

// // Q1. WAF to calculate sum & product of all numbers in an array.

// // sum of numbers in an array.
// void sumOfArray(int arr[],int size){
//   int sum=0;
//   int start=0;
//   while(start<=size){
//     sum=sum+arr[start];
//     start++;
//   }
//   cout << sum <<endl;
// }

// // Product of all numbers in array.
// void productOfArray(int arr[],int size){
//   int start=0;
//   int product=1;
//   while(start<=size){
//     product=product*arr[start];
//     start++;
//   }
//   cout << product << endl;
// }

// // Result
// int main(){
//   int arr[]={4,5,7,8,9,7,8,5,4,2,3,1,9};
//   int size=sizeof(arr)/sizeof(int)-1;
//   sumOfArray(arr,size);
//   productOfArray(arr,size);

// }




// // Q2. WAF to swap the max & min number of an array.
// int reverseMaxAndMin(int arr[],int size){
//   int max=INT16_MIN;
//   int max_index=0;
//   int min_index=0;

//   int min=INT16_MAX;
//   for(int i=0;i<=size;i++){
//     if(arr[i]<min)
//     {
//       min=arr[i];
//       min_index=i;

//     }else if(arr[i]>max){
//       max=arr[i];
//       max_index=i;
//     }
//     else
//     {
//       continue;
//     }   
//   }
//   // cout<< max <<" ";
//   // cout << min << " ";
//   swap(arr[min_index],arr[max_index]); 
// }
// // Result
// int main(){
//   int arr[]={7,8,57,87,59,68,485,47,578,25,58,45,20};
//   int size=sizeof(arr)/sizeof(int)-1;
//   reverseMaxAndMin(arr,size);

//   for(int i=0;i<=size;i++){
//     cout << arr[i] << " ";
//   }
// }
// // output 578 8 57 87 59 68 485 47 7 25 58 45 20



// Q3. WAF to print all the unique value in an array.

// void interArr(int arr[],int size){
//   for(int i=0;i<size;i++){
//     int count =0;
//     for(int j=0;j<size;j++){
//       if(arr[i]==arr[j]){
//         count++;
//       }
//     }
//     if (count == 1){
//       cout << arr[i] << " ";
//     }
//   }
// }

// int main(){
//   int arr1[]={1,8,9,7,5,1,8,45,9,8};
//   int size1=sizeof(arr1)/sizeof(int);
//   interArr(arr1,size1);
// }






// // Q4. WAF to print intersection of 2 arrays

// void interArr(int arr1[],int arr2[],int size1,int size2){
//   for(int i=0;i<=size1;i++){
//     for(int j=0;j<=size2;j++){
//       if(arr1[i]==arr2[j]){
//         cout << arr1[i] << " ";
//       }else{
//         continue;
//       }
//     }
//   }
// }

// int main(){
//   int arr1[]={1,8,9,7,5};
//   int arr2[]={8,5,7,6,1};
//   int size1=sizeof(arr1)/sizeof(int)-1;
//   int size2=sizeof(arr2)/sizeof(int)-1;
//   interArr(arr1,arr2,size1,size2);
// }