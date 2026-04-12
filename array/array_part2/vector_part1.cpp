#include <iostream>
#include <string>
#include <vector>
using namespace std;

// vector 
// it is dynamic in nature
// ir is a type of array / array like


// // Vector Syntax for create
// // 1. vector<int> vec:
// // 2. vector<int>vec={1,2,3}
// // 3. vector<int>vec(3,0)

// int main(){
//   //1
//   // vector<int> vec;
//   // cout << vec[0];


//   //2.
//   // vector <int> vec={1,2,3,4,5,6};
//   // cout<< vec[2];


//   //3.
//   vector<int>vec(3,0); // vec(size,element)
//   // for(int i=0;i<3;i++){
//   //   cout << vec[i] << " ";
//   // }

//   // for each loop
//   // for(int value:vec){ //value not sotre index but value store value of vector
//   //   cout << value << " ";
//   // }

//   return 0;
// }



// vector functions;

//size
// int main(){
//   vector<int> vec={1,5,7,8,7,9,5,7,5,2};
//   cout << vec.size() << endl ;
// }


// //push_back

// int main(){
//   vector<int> vec;
//   cout << "Befor push_back : " << vec.size() << endl ;


//   vec.push_back(25);
//   vec.push_back(2);
//   vec.push_back(5);
//   vec.push_back(28);
//   vec.push_back(29);
//   vec.push_back(75);

//   cout << "Aftre push_back : " << vec.size() << endl ;
//   cout << vec[0] << endl ;

//   for(int value:vec){
//     cout << value << " ";
//   }

//   return 0;
// }



// pop_pack
// int main(){
//   vector<int> vec;

//   vec.push_back(25);
//   vec.push_back(2);
//   vec.push_back(5);
//   vec.push_back(28);
//   vec.push_back(29);
//   vec.push_back(75);

//   cout << "Befor pop_back array value : ";
//   for(int value:vec){
//     cout << value << " ";
//   }
//   cout << endl;

//   vec.pop_back(); // delete from last 
  
//   cout << "After pop_back array value : ";
//   for(int value:vec){
//     cout << value << " ";
//   }


//   return 0;
// }



// //front 
// // give front(starting) value of vector

// int main(){
//   vector<int> vec;

//   vec.push_back(25);
//   vec.push_back(2);
//   vec.push_back(5);
//   vec.push_back(28);
//   vec.push_back(29);
//   vec.push_back(75);

//   cout << "fornt value : " << vec.front() << endl ;

//   return 0;
// }



// // back
// // give last value of vector
// int main(){
//   vector<int> vec;

//   vec.push_back(25);
//   vec.push_back(2);
//   vec.push_back(5);
//   vec.push_back(28);
//   vec.push_back(29);
//   vec.push_back(75);

//   cout << "back value : " << vec.back() << endl ;

//   return 0;
// }



// at
// another method for execess value of vector
int main(){
  vector<int> vec;

  vec.push_back(25);
  vec.push_back(2);
  vec.push_back(5);
  vec.push_back(28);
  vec.push_back(29);
  vec.push_back(75);

  cout << vec.at(5) << endl ; // vec.at(index)

  return 0;
}
