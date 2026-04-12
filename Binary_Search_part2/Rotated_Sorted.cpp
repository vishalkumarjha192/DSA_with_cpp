#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Searching in rotated sorted array
// [3,4,5,6,7,0,1,2] tar==0;

int sortArr(vector<int> vec, int tar)
{
  int start = 0;
  int end = vec.size() - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (vec[mid] == tar)
    {
      return mid;
    }

    // for left
    if (vec[start] <= vec[mid])
    {
      if (vec[start] <= tar && tar <= vec[mid])
      {
        end = mid - 1;
      }
      else
      {
        start = mid + 1;
      }
    }

    // for right
    else
    {
      if (vec[mid] <= tar && tar <= vec[end])
      {
        start = mid + 1;
      }
      else
      {
        end = mid - 1;
      }
    }
    return -1;
  }
}


int main()
{
  vector<int> vec = {3,4,5,6,7,0,1,2};
  int tar = 6;

  int result = sortArr(vec, tar);

  if (result != -1)
    cout << "Found at index: " << result;
  else
    cout << "Not found";

  return 0;

  // cout << result << endl;
}