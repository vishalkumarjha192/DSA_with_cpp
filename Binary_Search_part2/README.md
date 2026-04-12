# Binary Search Part 2 — Search in Rotated Sorted Array

## Overview

This project demonstrates how to apply **Binary Search** on a **rotated sorted array** — a classic and frequently asked problem in coding interviews.

A rotated sorted array is an array that was originally sorted in ascending order but has been rotated at some pivot point.

**Example:**
```
Original: [0, 1, 2, 3, 4, 5, 6, 7]
Rotated:  [3, 4, 5, 6, 7, 0, 1, 2]
```

---

## Problem Statement

Given a rotated sorted array and a target value, return the **index** of the target if found, otherwise return `-1`.

---

## Algorithm

The key insight is that even after rotation, **at least one half of the array is always sorted**. We use this property to decide which half to search:

1. Calculate `mid = start + (end - start) / 2`
2. If `vec[mid] == target`, return `mid`
3. **Check if the left half is sorted** (`vec[start] <= vec[mid]`):
   - If target lies within `[vec[start], vec[mid]]`, search **left**
   - Otherwise, search **right**
4. **Otherwise, the right half is sorted** (`vec[mid] <= vec[end]`):
   - If target lies within `[vec[mid], vec[end]]`, search **right**
   - Otherwise, search **left**

**Time Complexity:** `O(log n)`  
**Space Complexity:** `O(1)`

---

## File Structure

```
Binary_Search_part2/
├── Rotated_Sorted.cpp   # C++ source code
├── Rotated_Sorted.exe   # Compiled executable (Windows)
└── README.md
```

---

## Code

```cpp
int sortArr(vector<int> vec, int tar) {
    int start = 0;
    int end = vec.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (vec[mid] == tar) return mid;

        // Left half is sorted
        if (vec[start] <= vec[mid]) {
            if (vec[start] <= tar && tar <= vec[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        // Right half is sorted
        else {
            if (vec[mid] <= tar && tar <= vec[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return -1;
}
```

---

## Example

```cpp
vector<int> vec = {3, 4, 5, 6, 7, 0, 1, 2};
int tar = 6;
// Output: Found at index: 3
```

---

## How to Compile & Run

```bash
g++ Rotated_Sorted.cpp -o Rotated_Sorted
./Rotated_Sorted
```

---

## Note
**Bug Notice:** The `return -1` statement on line 48 is placed **inside** the `while` loop, which causes the function to exit after the first iteration even if the target hasn't been found. It should be moved **outside** the loop:

```cpp
  } // end while
  return -1; // ✅ Correct placement
}
```

---

## 🙌 Author


**Vishal Kumar Jha**

GitHub:\
https://github.com/vishalkumarjha192


Learning DSA with C++ 💪

---

---