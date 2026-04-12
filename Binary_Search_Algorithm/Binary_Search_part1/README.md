# 🔍 Binary Search in C++ (Iterative + Recursive)

## 📘 Overview
This repository contains the implementation of the **Binary Search algorithm** in C++ using:
- Iterative Approach
- Recursive Approach

Binary Search is an efficient algorithm used to search in a **sorted array or vector**.

---

## ⚡ Time & Space Complexity

| Approach   | Time Complexity | Space Complexity |
|------------|----------------|------------------|
| Iterative  | O(log n)       | O(1)             |
| Recursive  | O(log n)       | O(log n)         |

---

## 🧠 Key Concepts
- Works only on sorted data
- Divide and Conquer algorithm
- Reduces search space by half each step

---

## 📂 Code

### Iterative
```cpp
int binarySearch(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < target) start = mid + 1;
        else if (arr[mid] > target) end = mid - 1;
        else return mid;
    }
    return -1;
}
```

### Recursive
```cpp
int binarySearch(vector<int> vec, int target, int start, int end) {
    if (start > end) return -1;

    int mid = start + (end - start) / 2;

    if (target > vec[mid])
        return binarySearch(vec, target, mid + 1, end);
    else if (target < vec[mid])
        return binarySearch(vec, target, start, mid - 1);
    else
        return mid;
}
```

---

## ▶️ Example
Input:
```
[-1, 0, 3, 4, 5, 9, 12], target = 12
```

Output:
```
6
```

---

## 🛠️ How to Run
```
g++ binary_search_part1.cpp -o output
./output
```

---

## 🙌 Author


**Vishal Kumar Jha**

GitHub:\
https://github.com/vishalkumarjha192


Learning DSA with C++ 💪

---

---
