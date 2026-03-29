#include <iostream>
#include <string>
#include <vector>
using namespace std;

// leadcode problem number 136
// Problem
// Q1.
// solution with a linear runtime complexity

// Single Number;
// Example 1:
// Input: nums = [2,2,1]
// Output: 1

// Example 2:
// Input: nums = [4,1,2,1,2]
// Output: 4

// Example 3:
// Input: nums = [1]
// Output: 1

// int singleNum(vector<int>arr){
//   int ans=0;
//   for(int val:arr){
//     ans=ans^val; // bitwise
//   }
//   return ans;
// }

// int main(){
//   vector<int>nums = {2,2,1};
//   vector<int>nums1 = {4,1,2,1,2};
//   vector<int>nums2 = {1};

//   cout<< singleNum(nums) << endl;
//   cout<< singleNum(nums1) << endl;
//   cout<< singleNum(nums2) << endl;
// }




// // Q2. Linear Search;
// int linearSearch(vector<int>vec,int target,int size){
//   // for(int val:vec){
//   //   if(val==target){
//   //     cout << val << endl;
//   //   }else{
//   //     continue;
//   //   }
//   // }


//   for(int i=0;i<size;i++){
//     if(vec[i]==target){
//       cout << vec[i] << " : " << i << endl; 
//     }else{
//       continue;
//     }
//   }
//   return 0;
// }

// int main(){
//   vector<int>vec={24,7,8,9,6,2,3,58,96};
//   int size=vec.size();
//   int target=7;
//   cout << size << endl;
//   linearSearch(vec,target,size);
// }




// Reaverse vector
int reverseVec(vector<int> &vec,int size){
  int start=0;
  int end=size-1;
  while(start<=end){
    swap(vec[start],vec[end]);
    start++;
    end--;
  }
}

int main(){
  vector<int>vec={24,7,8,9,6,2,3,58,96};
  int size=vec.size();
  reverseVec(vec,size);
  for(int val:vec){
    cout << val << " ";
  }
}