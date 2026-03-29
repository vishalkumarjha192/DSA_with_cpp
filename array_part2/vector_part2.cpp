#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Static VS Dynamic Allocation
// Static => Compile time ex: array
//        => inside stack

// Dynamic => run/exucation time ex: vector
//        => inside heap

// vector have two properties;
// 1. size => numbers if elements
// 2. capacity => 

int main(){
  vector<int>vec;
  vec.push_back(25);
  cout << "size of vector : " << vec.size() << endl; // 1
  cout << "capacity of vector : " << vec.capacity() << endl; //1

  vec.push_back(89);
  cout << "size of vector : " << vec.size() << endl; // 2
  cout << "capacity of vector : " << vec.capacity() << endl;  // 2

  vec.push_back(289);
  cout << "size of vector : " << vec.size() << endl; // 3
  cout << "capacity of vector : " << vec.capacity() << endl; // 4

  vec.push_back(2);
  cout << "size of vector : " << vec.size() << endl; // 4
  cout << "capacity of vector : " << vec.capacity() << endl; // 4


  vec.push_back(3);
  cout << "size of vector : " << vec.size() << endl;  // 5
  cout << "capacity of vector : " << vec.capacity() << endl;  // 8
  

}

