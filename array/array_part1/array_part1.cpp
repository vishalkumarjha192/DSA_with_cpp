// creation of array
#include <iostream>
#include <string> // use for do any operations on String
#include <vector> // use for do any operations on array

// array 
// store same type of data
// contiguous in memory + linear
// fixed size
using namespace std;

// int main(){
//   // 
//   int marks[6]={2,8,9,7,5,1}; // marks[6] => this is us for giving size of the array

//   // int arr[]={1,5,7,8,7,8,7,8,7,8,7,89,5};


//   // for geating any element of the array using index position;

//   cout << marks[2] << endl;

//   int size=sizeof(marks)/sizeof(int)-1; // for find size of array;

//   for(int i=0; i<=size;i++){
//     cout << marks[i] << endl ;
//   }
// }


// also store date using user input 

// int main(){
//   int arr[5];
//   int size =sizeof(arr)/sizeof(int)-1;

//   for(int i=0; i<=size;i++){
//     cin >> arr[i];
//   }
//   cout  <<endl;

//   cout << "output" <<endl;

//   for (int i = 0; i <= size; i++)
//   {
//     cout << arr[i] << endl;
//   }

//   return 0;
// }






// Practice Question;

//find smallest/largest in array;

// int main(){
//   int arr[5]={2,47,87,15,71};
//   int size=sizeof(arr)/sizeof(int);
//   // for smallest

//   int smallest=INT8_MAX;

//   for(int i=0;i<size;i++){
//     if(arr[i]<smallest){
//       smallest=arr[i];
//     }
//     else{
//       continue;
//     }
//   }


//   // for largest
//   int largest=INT8_MIN;

//   for(int j=0;j<size;j++){
//     if(arr[j]>largest){
//       largest=arr[j];
//     }
//     else{
//       continue;
//     }
//   }

//   cout << smallest<<endl;
//   cout << largest<<endl;
//   return 0;
// }



//find index of smallest/largest in array;

// int main(){
//   int arr[]={2,78,94,2,35,78,127,91,35,25,85,987,578,982};
//   int size =sizeof(arr)/sizeof(int)-1;
//   cout << "Size of the array is : "<< size << endl;


//   // for largest
//   int largest=INT16_MIN;
//   int largest_index=0;
//   for(int i=0;i<=size;i++){
//     if(arr[i]>largest){
//       largest=arr[i];
//       largest_index=i;
//     }
//     else{
//       continue;
//     }
//   }

//   cout << "Largest element in the array is : "<< largest << endl;
//   cout << "Index of largest Element is :" << largest_index << endl;


//   // for smallest
//   int smallest=INT16_MAX;
//   int smallest_index=0;
//   for(int j=0;j<=size;j++){
//     if(arr[j]<smallest){
//       smallest=arr[j];
//       smallest_index=j;
//     }else{
//       continue ;
//     }   
    
//   }

//   cout << "Smallest element in the array is : "<< smallest << endl;
//   cout << "Index of Smallest Element is :" << smallest_index << endl;



//   return 0;
// }






// Pass By Reference(address);
// direct change in original array;

// void changeArray(int arr[],int size){
//   cout << "in function" << endl;
//   for(int i=0;i<size;i++){
//     arr[i]=arr[i]*2;
//   }
// }

// int main(){
//   int arr[]={1,2,3,4,5,6};

//   cout << "Befor call" <<endl;
//   for(int i=0;i<6;i++){
//     cout <<arr[i]<<endl;
//   }
//   cout <<endl;


//   changeArray(arr,6);
//   cout << "After call function\n"<<"in main "<<endl;

//   for(int i=0;i<6;i++){
//     cout <<arr[i]<<endl;
//   }
//   cout <<endl;

//   return 0;
// }





// Linear Search
// it is a Algorithms


// Linear Probleam
// Reaten index of target element;

// Given array is;
// arr[]={4,2,7,8,1,2,5};
// target element is;
// target=8;

// int main(){

  // int arr[]={4,2,7,8,1,2,5};
  // int target=8;
  // int size = sizeof(arr)/sizeof(int)-1;

  // for(int i=0; i<=size;i++){
  //   if(arr[i]==target){
  //     cout << "Index of "<< target << " is : " <<i << endl;
  //   }else{
  //     continue;
  //   }
  // }
  // return -1;
// }


// using function creation;
// int linearSearch(int arr[], int size, int target)
// {

//   for (int i = 0; i <= size; i++)
//   {
//     if (arr[i] == target)
//     {
//       cout << "Index of " << target << " is : " << i << endl;
//     }
//     else
//     {
//       continue;
//     }
//   }
//   return -1;
// }

// int main()
// {
//   int arr[] = {4, 2, 7, 8, 1, 2, 5};
//   int target = 8;
//   int size = sizeof(arr) / sizeof(int) - 1;

//   linearSearch(arr, size, target);
// }




// Reverse an Array
// arr[]={4,2,7,8,1,2,5}

void reverseArray(int arr[],int size){
  int start=0;
  int end=size-1;
  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

int main(){
  int arr[]={4,2,7,8,1,2,5};
  int size=7;

  reverseArray(arr,size);

  for(int i=0;i<size;i++){
    cout << arr[i] <<" ";
  }
  return 0;

}