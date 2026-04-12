#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Binary Search
// => time Complexity = O(log n)
// => space Complexity = O(1)
// we can apply binary search on vector/array when sorted(increading/decreasing) order
// => also known as monotomic/montonous


// arr=[-1,0,3,4,5,9,12] ,  target=12
// int binarySearch(vector<int>arr,int target){
//   int start=0;
//   int end=arr.size()-1;
//   while(start <= end){
//     int mid=start+(end-start)/2;


//     if(arr[mid]<target){
//       start=mid+1;
//     }
//     else if(arr[mid]>target){
//       end=mid-1;
//     }
//     else{
//       return mid;
//     }
//   }
//   return -1;
// }

// int main(){
//   vector<int>arr={-1, 0, 3, 4, 5, 9, 12};
//   int target=12;
//   cout << binarySearch(arr,target) << endl;
// }





// Binary Search
// with recursion
// => time Complexity = O(log n)
// => space Complexity = O(log n)

int binarySearch(vector<int>vec,int target,int start,int end){
  if (start > end) {
    return -1;
  }

  int mid=start+(end-start)/2;
  if(target>vec[mid]){
    return binarySearch(vec, target, mid+1, end);
  }else if(target<vec[mid]){
    return binarySearch(vec, target, start, mid-1);
  }else{
    return mid;
  }

}

int main(){
  vector<int> vec={-1, 0, 3, 4, 5, 9, 12};
  int target=12;
  int start=0;
  int end=vec.size()-1;

  cout << binarySearch(vec, target, start, end) << endl;
}

