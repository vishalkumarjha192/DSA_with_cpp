#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Qs. predict output
// int a=5;
// int *p=&a;
// int **q=&p;

// cout << *p << endl;   // 5
// cout << **q << endl;  // 5
// cout << p << endl;    // address which is stored (address of a)
// cout << *q << endl;   // address which is stored (address of a)


// int main()
// {
//   int a = 5;
//   int *p = &a;
//   int **q = &p;

//   cout << *p << endl;  // 5
//   cout << **q << endl; // 5
//   cout << p << endl;   // address which is stored (address of a)
//   cout << *q << endl;  // address which is stored (address of a)
// }





// Qs Predict Output
// int arr[]={10,20,30,40};
// int *ptr=arr;

// cout << *(ptr+1) << endl;  // 20
// cout << *(ptr+3) << endl;  // 40
// ptr++;
// cout << *ptr << endl; // 20


int main()
{
  int arr[] = {10, 20, 30, 40};
  int *ptr = arr;

  cout << *(ptr + 1) << endl; // 20
  cout << *(ptr + 3) << endl; // 40
  ptr++;
  cout << *ptr << endl;  // 20
}