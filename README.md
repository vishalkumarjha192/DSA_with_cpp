# 📘 DSA with C++ — My Learning Journey

> This repository contains my notes, code, and practice problems as I learn **Data Structures and Algorithms** using **C++**.

---

## 🧭 What is DSA?

**Data Structures** → Ways to organize and store data in memory so it can be accessed and modified efficiently.

**Algorithms** → Step-by-step instructions to solve a problem or perform a task.

**Why learn DSA?**
- Crack coding interviews (Google, Amazon, Microsoft, etc.)
- Write faster and better code
- Solve competitive programming problems
- Build a strong foundation in computer science

---

## 📚 Full Syllabus

---

### 📦 Module 1 — C++ Basics (Prerequisites)

> Before DSA, you need to be comfortable with C++ fundamentals.

| Topic | Definition |
|-------|-----------|
| Variables & Data Types | Containers that store data like `int`, `float`, `char`, `bool` |
| Loops & Conditions | Control flow using `if`, `for`, `while`, `switch` |
| Functions | Reusable blocks of code that perform a specific task |
| Arrays | A fixed-size collection of elements of the same type |
| Strings | A sequence of characters, e.g. `"hello"` |
| Pointers | Variables that store the memory address of another variable |
| References | An alias (another name) for an existing variable |
| STL (Standard Template Library) | Built-in C++ library with ready-to-use data structures like `vector`, `map`, `set` |

---

### ⏱️ Module 2 — Time & Space Complexity

> How efficient is your code?

| Topic | Definition |
|-------|-----------|
| Time Complexity | How long an algorithm takes to run as input size grows |
| Space Complexity | How much memory an algorithm uses |
| Big O Notation | A way to express complexity — `O(1)`, `O(n)`, `O(n²)`, etc. |
| Best / Worst / Average Case | Different scenarios for algorithm performance |

**Common Big O values (fastest to slowest):**
```
O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)
```

---

### 🔁 Module 3 — Recursion

> A function that calls itself to solve smaller sub-problems.

| Topic | Definition |
|-------|-----------|
| Base Case | The condition where recursion stops |
| Recursive Case | The part where the function calls itself |
| Call Stack | Memory used to track recursive function calls |
| Backtracking | Trying all possibilities and undoing choices that don't work |

```cpp
// Example: Factorial using recursion
int factorial(int n) {
    if (n == 0) return 1;        // base case
    return n * factorial(n - 1); // recursive case
}
```

---

### 🗃️ Module 4 — Arrays

> A fixed-size, ordered collection of elements stored in contiguous memory.

| Topic | Definition |
|-------|-----------|
| 1D Array | Simple list of elements: `int arr[5]` |
| 2D Array | Grid/matrix of elements: `int arr[3][3]` |
| Traversal | Visiting every element one by one |
| Searching | Finding an element in the array |
| Sorting | Arranging elements in a specific order |
| Sliding Window | Technique to process subarrays efficiently |
| Two Pointers | Using two indices to solve array problems efficiently |

---

### 🔤 Module 5 — Strings

> A sequence of characters stored as an array of `char` or using `std::string`.

| Topic | Definition |
|-------|-----------|
| String Basics | Declaration, input, output |
| String Functions | `length()`, `substr()`, `find()`, `reverse()`, etc. |
| Palindrome Check | A string that reads the same forwards and backwards |
| Anagram Check | Two strings with the same characters in different order |
| Pattern Matching | Finding a pattern inside a string |

---

### 📍 Module 6 — Pointers & Memory

> One of the most important topics for understanding how C++ works internally.

| Topic | Definition |
|-------|-----------|
| Pointer | A variable that stores the address of another variable |
| Dereferencing | Accessing the value at the stored address using `*` |
| Pointer to Pointer | A pointer that stores the address of another pointer (`**`) |
| NULL Pointer | A pointer that points to nothing (value = `0`) |
| Pointer Arithmetic | Moving a pointer forward/backward using `+`, `-`, `++`, `--` |
| Pass by Reference | Sending a variable's address to a function so it can modify the original |
| Dynamic Memory | Allocating memory at runtime using `new` and `delete` |

---

### 🔗 Module 7 — Linked List

> A linear data structure where each element (node) points to the next.

| Topic | Definition |
|-------|-----------|
| Node | A unit containing data and a pointer to the next node |
| Singly Linked List | Each node points to the next node only |
| Doubly Linked List | Each node points to both next and previous nodes |
| Circular Linked List | The last node points back to the first node |
| Traversal | Moving through nodes from head to tail |
| Insertion | Adding a node at beginning, end, or middle |
| Deletion | Removing a node from the list |
| Reversal | Reversing the direction of the linked list |

---

### 📚 Module 8 — Stack

> A linear data structure that follows **LIFO** (Last In, First Out).

| Topic | Definition |
|-------|-----------|
| Push | Add an element to the top |
| Pop | Remove the element from the top |
| Peek / Top | View the top element without removing it |
| isEmpty | Check if the stack is empty |
| Stack using Array | Implementing stack manually with an array |
| Stack using STL | Using `stack<int>` from C++ STL |
| Applications | Undo operations, balanced parentheses, function call stack |

---

### 🚶 Module 9 — Queue

> A linear data structure that follows **FIFO** (First In, First Out).

| Topic | Definition |
|-------|-----------|
| Enqueue | Add an element to the back |
| Dequeue | Remove the element from the front |
| Front & Rear | The two ends of a queue |
| Circular Queue | The rear connects back to the front to reuse space |
| Deque | Double-ended queue — insert/delete from both ends |
| Priority Queue | Elements are served based on priority, not order |
| Applications | Scheduling, BFS traversal, printer queues |

---

### 🌳 Module 10 — Trees

> A hierarchical data structure with a root node and child nodes.

| Topic | Definition |
|-------|-----------|
| Node | Contains data, left child, and right child |
| Root | The topmost node of the tree |
| Leaf | A node with no children |
| Height | Number of edges from root to the deepest leaf |
| Binary Tree | Each node has at most 2 children |
| Binary Search Tree (BST) | Left child < Parent < Right child |
| Tree Traversal | Inorder, Preorder, Postorder, Level Order |
| AVL Tree | A self-balancing BST |
| Heap | A complete binary tree used for priority queues |

---

### #️⃣ Module 11 — Hashing

> Mapping data to a fixed-size table using a hash function for fast access.

| Topic | Definition |
|-------|-----------|
| Hash Function | Converts a key into an index |
| Hash Map | Key-value pairs with O(1) average access (`unordered_map`) |
| Hash Set | Stores unique values with O(1) lookup (`unordered_set`) |
| Collision | When two keys map to the same index |
| Chaining | Handling collisions using linked lists at each index |
| Applications | Frequency count, duplicate detection, caching |

---

### 🔍 Module 12 — Searching Algorithms

> Finding an element in a collection.

| Algorithm | Definition | Time Complexity |
|-----------|-----------|-----------------|
| Linear Search | Check each element one by one | O(n) |
| Binary Search | Divide sorted array in half each time | O(log n) |
| Binary Search on Answer | Apply binary search on the result range | O(log n × f(n)) |

---

### 🔃 Module 13 — Sorting Algorithms

> Arranging elements in a specific order (ascending or descending).

| Algorithm | Definition | Time Complexity |
|-----------|-----------|-----------------|
| Bubble Sort | Repeatedly swap adjacent elements if out of order | O(n²) |
| Selection Sort | Select the smallest and place it in the correct position | O(n²) |
| Insertion Sort | Insert each element into its correct position | O(n²) |
| Merge Sort | Divide array, sort halves, then merge | O(n log n) |
| Quick Sort | Pick a pivot and partition around it | O(n log n) avg |
| Counting Sort | Count occurrences of each element | O(n + k) |

---

### 🌐 Module 14 — Graphs

> A collection of nodes (vertices) connected by edges.

| Topic | Definition |
|-------|-----------|
| Vertex / Node | A point in the graph |
| Edge | A connection between two vertices |
| Directed Graph | Edges have a direction (one-way) |
| Undirected Graph | Edges have no direction (two-way) |
| Weighted Graph | Each edge has a weight/cost |
| Adjacency Matrix | 2D array to represent connections |
| Adjacency List | List of neighbors for each vertex |
| BFS | Breadth-First Search — explore level by level |
| DFS | Depth-First Search — explore as deep as possible |
| Shortest Path | Dijkstra's, Bellman-Ford algorithms |
| Minimum Spanning Tree | Prim's, Kruskal's algorithms |
| Topological Sort | Linear ordering of vertices in a DAG |

---

### 💡 Module 15 — Dynamic Programming (DP)

> Solving complex problems by breaking them into overlapping sub-problems and storing results.

| Topic | Definition |
|-------|-----------|
| Memoization | Top-down DP — store results of recursive calls |
| Tabulation | Bottom-up DP — fill a table iteratively |
| 0/1 Knapsack | Choose items with max value within weight limit |
| Fibonacci | Classic DP example using previous results |
| Longest Common Subsequence (LCS) | Find longest shared subsequence of two strings |
| Longest Increasing Subsequence (LIS) | Find longest increasing subsequence in an array |
| Coin Change | Find minimum coins to make a given amount |

---

### 🧩 Module 16 — Greedy Algorithms

> Make the locally optimal choice at each step hoping for a global optimum.

| Topic | Definition |
|-------|-----------|
| Activity Selection | Choose maximum non-overlapping activities |
| Fractional Knapsack | Take fractions of items for max value |
| Huffman Coding | Optimal prefix-free encoding for compression |
| Job Scheduling | Schedule jobs to maximize profit |

---

### 🔢 Module 17 — Bit Manipulation

> Directly manipulate individual bits of a number.

| Topic | Definition |
|-------|-----------|
| AND `&` | 1 only if both bits are 1 |
| OR `\|` | 1 if at least one bit is 1 |
| XOR `^` | 1 if bits are different |
| NOT `~` | Flips all bits |
| Left Shift `<<` | Multiply by 2 |
| Right Shift `>>` | Divide by 2 |
| Check even/odd | `n & 1` — 0 is even, 1 is odd |
| Count set bits | Count number of 1s in binary representation |

---

## 🛠️ How to Run the Code

```bash
# Compile
g++ filename.cpp -o output

# Run on Linux/macOS
./output

# Run on Windows
output.exe
```

---

## 📈 My Progress

- [ ] C++ Basics
- [ ] Time & Space Complexity
- [ ] Recursion
- [ ] Arrays
- [ ] Strings
- [X] Pointers
- [ ] Linked List
- [ ] Stack
- [ ] Queue
- [ ] Trees
- [ ] Hashing
- [ ] Searching & Sorting
- [ ] Graphs
- [ ] Dynamic Programming
- [ ] Greedy
- [ ] Bit Manipulation

---

## ✨ Author

**Vishal Kumar Jha**

GitHub:\
https://github.com/vishalkumarjha192


---

<div align="center">
Learning DSA one topic at a time 🚀
</div>

