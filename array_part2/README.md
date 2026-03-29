# Array Part 2 — C++ Vectors

A beginner-friendly collection of C++ source files covering the fundamentals of **vectors** (dynamic arrays), their internal mechanics, and hands-on practice problems.

---

## 📁 Project Structure

```
array_part2/
├── vector_part1.cpp       # Vector basics & built-in functions
├── vector_part2.cpp       # Size vs Capacity internals
└── vector_practice.cpp    # Practice problems (LeetCode + algorithms)
```

---

## 📄 File Descriptions

### 1. `vector_part1.cpp` — Vector Basics & Functions

Introduces vectors as **dynamic arrays** and covers the three ways to declare them:

| Syntax | Description |
|--------|-------------|
| `vector<int> vec;` | Empty vector |
| `vector<int> vec = {1, 2, 3};` | Initialized with values |
| `vector<int> vec(3, 0);` | Size 3, all elements = 0 |

**Built-in functions covered:**

| Function | Description |
|----------|-------------|
| `vec.size()` | Returns number of elements |
| `vec.push_back(val)` | Appends an element to the end |
| `vec.pop_back()` | Removes the last element |
| `vec.front()` | Returns the first element |
| `vec.back()` | Returns the last element |
| `vec.at(index)` | Accesses element by index (safe access) |

Also demonstrates the **for-each loop** for iterating vectors:
```cpp
for (int value : vec) {
    cout << value << " ";
}
```

---

### 2. `vector_part2.cpp` — Size vs Capacity

Explains the difference between **static allocation** (arrays) and **dynamic allocation** (vectors), and introduces two key vector properties:

- **`size`** — the current number of elements stored
- **`capacity`** — the total space allocated in memory (heap)

**Key insight — capacity doubling:**  
When a vector runs out of capacity, it doubles its allocated memory automatically. This amortizes the cost of reallocation.

```
Elements Added | size | capacity
1              |  1   |  1
2              |  2   |  2
3              |  3   |  4   ← doubled
4              |  4   |  4
5              |  5   |  8   ← doubled again
```

**Memory location:**
- Arrays → stored on the **Stack** (compile time)
- Vectors → stored on the **Heap** (run time / dynamic)

---

### 3. `vector_practice.cpp` — Practice Problems

Contains three algorithm problems implemented using vectors:

#### Q1 — Single Number *(LeetCode #136)*
> Given an array where every element appears twice except one, find the element that appears only once. Must run in linear time O(n).

**Approach:** XOR bitwise operation — XORing a number with itself gives 0, so duplicate pairs cancel out, leaving the unique element.

```cpp
int singleNum(vector<int> arr) {
    int ans = 0;
    for (int val : arr) {
        ans = ans ^ val;
    }
    return ans;
}
```

**Examples:**
- `[2, 2, 1]` → `1`
- `[4, 1, 2, 1, 2]` → `4`
- `[1]` → `1`

---

#### Q2 — Linear Search
> Search for a target value in a vector and print its value and index.

```cpp
int linearSearch(vector<int> vec, int target, int size) {
    for (int i = 0; i < size; i++) {
        if (vec[i] == target) {
            cout << vec[i] << " : " << i << endl;
        }
    }
    return 0;
}
```

**Time Complexity:** O(n)

---

#### Q3 — Reverse a Vector (Active/Final Code)
> Reverse a vector in-place using the two-pointer technique.

```cpp
int reverseVec(vector<int> &vec, int size) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}
```

**Example:** `{24, 7, 8, 9, 6, 2, 3, 58, 96}` → `{96, 58, 3, 2, 6, 9, 8, 7, 24}`

> **Note:** The vector is passed by **reference** (`&vec`) so changes affect the original.

---

## 🧠 Key Concepts Summary

| Concept | Description |
|---------|-------------|
| Vector | Dynamic array that resizes at runtime |
| `push_back` / `pop_back` | Add/remove elements from the end |
| `size` vs `capacity` | Elements stored vs memory allocated |
| Capacity doubling | Vectors double capacity to reduce reallocations |
| Stack vs Heap | Arrays use stack; vectors use heap |
| For-each loop | Clean syntax to iterate all vector elements |
| XOR trick | Finds unique element in O(n) time, O(1) space |
| Two-pointer | Efficient in-place reversal technique |

---

# Run
./vector_part1
./vector_part2
./vector_practice
```

> Pre-compiled `.exe` files are included for Windows users.

---

## 🙌 Author
**Vishal Kumar Jha**

GitHub:\
https://github.com/vishalkumarjha192


Learning DSA with C++ 💪

---



