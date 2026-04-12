#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Memory Addresses
// Address of operator => &
// Example
// int main(){
//   int a=25;
//   cout << &a <<endl;
// }



// Pointers
// => Spaical variables that store address of other variables

// int main(){
//   int a=10;
//   int* pointer=&a; // using & for store address and * use for create pointer

//   cout << pointer << endl; // for stored adderess
//   cout << &a << endl; // for address of a
//   cout << &pointer << endl; // for address of pointer

//   cout << *pointer << endl; // for value which is stored

//   cout << a << endl; // for value of a

// }


// pointer to pointer 

// int main(){
//   int a=10;
//   int* pointer=&a; // using & for store address and * use for create pointer
//   int** pointer2=&pointer; // ** use for store address pointer to pointer

//   cout << "address stored in pointer is : " << pointer << endl; // for stored adderess
//   cout << "Address of a : " << &a << endl; // for address of a
//   cout << "Address of pointer : "<< &pointer << endl; // for address of pointer
//   cout << "address stored in pointer2 is : " << pointer2 << endl; // for address of pointer to pointer
//   cout << "address of pointer2 is " << &pointer2 << endl;
   


//   // Derefrence operator(*)
//   // =>use to print value which value stored on the address 
//   // => value at address



//   cout << "pointer value :" << *pointer << endl; // for value which is stored

//   cout << "value of a :" << *(&a) << endl; // for value of a
//   cout << "value of pointer2 : " <<  **pointer2 << endl;

// }





// NULL pointer 
// => A pointer that doesn't to any location.
// we use NULL pointer in LinkedList and Tree

// we need to create NULL pointer because when we no assigne value then it's return garbage value(any address)

// int main(){
//   int* pointer=NULL;
//   cout << pointer << endl; // 0 (means no address)
// }


// also we not Derefrence the NULL pointer
// int main(){
//   int* pointer=NULL;
//   cout << *pointer << endl; // error
// }




// Pass by Reference

// void changeA(int a){ // pass by value
//   a=20;
// }
// int main(){
//   int a=10;

//   changeA(a);
//   cout << "inside main function : " << a << endl;
// }


// void changeA(int* pointer){ // pass by refrence
//   *pointer=20;
// }
// int main(){
//   int a=10;

//   changeA(&a);
//   cout << "inside main function : " << a << endl;
// }



// void changeA(int &b){ // pass by refrence using alias
//   b=20;
// }
// int main(){
//   int a=10;

//   changeA(a);
//   cout << "inside main function : " << a << endl;
// }



// // Array Pointers
// int main(){
//   int arr[]={1,5,4,7,8,9,6,5,4};
//   cout << arr << endl; //pointer
//   cout << *arr << endl; // value of 0th poisition;
//   cout << &arr[0] << endl; // address of 0th index
//   cout << &arr[2] << endl;// address of 2nd index
//   cout << &arr[4] << endl;// address of 4th index
//   cout << &arr[1] << endl;// address of 1st index

// }




// Pointer Arathmetic
// Increment(++)/ Decrement(--)

// int main(){
//   int a=10;
//   int* ptr=&a;
//   cout << ptr <<endl;
//   ptr++; // 4 bite
//   cout << ptr << endl;
//   ptr--;  // 4 bite
//   cout << ptr << endl;

// }



// Add / subtract number
// int main(){
//   int a=10;
//   int* ptr=&a;
//   cout << ptr <<endl;
//   ptr=ptr+1; 
//   cout << ptr << endl;
//   ptr = ptr-2;
//   cout << ptr << endl;

// }

// int main(){
//   int arr[]={1,5,4,7,8,9,6,5,4};
//   cout << *arr << endl; // 1
//   cout << *(arr+1) << endl; // 5
//   cout << *(arr+2) << endl; // 4

// }



// subtract pointer
// int main(){
//   int* ptr;
//   int* ptr2=ptr+2;
//   cout << ptr2-ptr <<endl;

// }

// compare 
int main(){
  int* ptr;
  int* ptr2;;
  cout << ptr <<endl;
  cout << ptr2 <<endl;
  cout << (ptr<ptr2) <<endl; // in pointer compare with address

}