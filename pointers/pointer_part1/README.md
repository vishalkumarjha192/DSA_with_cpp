# Pointers in C++ — Part 1

A beginner-friendly C++ learning project covering the fundamentals of pointers, memory addresses, and pointer arithmetic through commented examples and practice problems.

---

## 📁 Project Structure

```
pointer_part1/
├── pointer_part1.cpp           # Main lesson file with annotated examples
├── pointer_part1.exe           # Compiled executable (Windows)
├── pointer_part1_practice.cpp  # Practice problems with predicted outputs
└── pointer_part1_practice.exe  # Compiled executable (Windows)
```

---

## 📚 Topics Covered

### 1. Memory Addresses (`&` operator)
Every variable in C++ has a memory address. The address-of operator `&` retrieves it.

```cpp
int a = 25;
cout << &a << endl;  // prints memory address of 'a'
```

---

### 2. Pointers
A pointer is a special variable that **stores the memory address** of another variable.

```cpp
int a = 10;
int* pointer = &a;

cout << pointer  << endl;   // address stored in pointer
cout << &a       << endl;   // address of 'a'
cout << &pointer << endl;   // address of the pointer itself
cout << *pointer << endl;   // value at the address (dereference)
cout << a        << endl;   // value of 'a'
```

- `*` in declaration → creates a pointer
- `*` on an existing pointer → **dereference** (get the value at the address)
- `&` → get the address of a variable

---

### 3. Pointer to Pointer (`**`)
A pointer can also store the address of another pointer.

```cpp
int a = 10;
int*  pointer  = &a;        // stores address of 'a'
int** pointer2 = &pointer;  // stores address of 'pointer'

cout << **pointer2 << endl; // 10 — double dereference to get original value
```

---

### 4. NULL Pointer
A pointer that does not point to any valid memory location. Always initialize pointers to `NULL` when not immediately assigned, to avoid garbage address values.

```cpp
int* pointer = NULL;
cout << pointer << endl;   // prints 0

// WARNING: Never dereference a NULL pointer
// cout << *pointer << endl;  // runtime error / crash
```

> **Use case:** NULL pointers are heavily used in data structures like Linked Lists and Trees to mark the end of a chain.

---

### 5. Pass by Reference
Functions in C++ can receive values in three ways:

| Method | Syntax | Modifies Original? |
|---|---|---|
| Pass by value | `void f(int a)` | ❌ No |
| Pass by pointer | `void f(int* p)` | ✅ Yes |
| Pass by reference (alias) | `void f(int &b)` | ✅ Yes |

```cpp
// Pass by pointer
void changeA(int* pointer) {
    *pointer = 20;
}
int main() {
    int a = 10;
    changeA(&a);
    cout << a << endl;  // 20
}

// Pass by reference (alias) — cleaner syntax
void changeA(int &b) {
    b = 20;
}
int main() {
    int a = 10;
    changeA(a);
    cout << a << endl;  // 20
}
```

---

### 6. Array Pointers
An array name itself acts as a pointer to its first element.

```cpp
int arr[] = {1, 5, 4, 7, 8, 9, 6, 5, 4};

cout << arr      << endl;   // address of 0th element
cout << *arr     << endl;   // value at 0th position → 1
cout << &arr[0]  << endl;   // address of index 0
cout << &arr[2]  << endl;   // address of index 2
```

---

### 7. Pointer Arithmetic

Pointers support arithmetic operations. Each step moves by the **size of the data type** (e.g., 4 bytes for `int`).

**Increment / Decrement:**
```cpp
int* ptr = &a;
ptr++;   // moves forward by 4 bytes
ptr--;   // moves back by 4 bytes
```

**Add / Subtract a number:**
```cpp
ptr = ptr + 1;   // moves 4 bytes forward
ptr = ptr - 2;   // moves 8 bytes back
```

**Traverse an array using pointer arithmetic:**
```cpp
int arr[] = {1, 5, 4};
cout << *arr       << endl;  // 1
cout << *(arr + 1) << endl;  // 5
cout << *(arr + 2) << endl;  // 4
```

**Subtract two pointers** (returns the number of elements between them):
```cpp
int* ptr;
int* ptr2 = ptr + 2;
cout << ptr2 - ptr << endl;  // 2
```

**Compare pointers** (compares their addresses):
```cpp
int* ptr;
int* ptr2;
cout << (ptr < ptr2) << endl;  // 1 (true) or 0 (false)
```

---

## 🧪 Practice Problems

Located in `pointer_part1_practice.cpp`. Each question asks you to **predict the output** before running.

**Q1 — Pointer to Pointer output prediction:**
```cpp
int a = 5;
int *p  = &a;
int **q = &p;

cout << *p  << endl;  // 5
cout << **q << endl;  // 5
cout << p   << endl;  // address of 'a'
cout << *q  << endl;  // address of 'a'
```

**Q2 — Array pointer arithmetic output prediction:**
```cpp
int arr[] = {10, 20, 30, 40};
int *ptr = arr;

cout << *(ptr + 1) << endl;  // 20
cout << *(ptr + 3) << endl;  // 40
ptr++;
cout << *ptr << endl;        // 20
```

---

## 🛠️ How to Compile & Run

**Using g++ (Linux / macOS / Windows with MinGW):**

```bash
# Compile main lesson
g++ pointer_part1.cpp -o pointer_part1

# Compile practice file
g++ pointer_part1_practice.cpp -o pointer_part1_practice

# Run
./pointer_part1
./pointer_part1_practice
```

> Pre-compiled `.exe` files are included for Windows users — simply double-click or run from the terminal.

---

## 📌 Key Concepts Summary

| Concept | Symbol | Description |
|---|---|---|
| Address-of | `&var` | Gets the memory address of a variable |
| Pointer declaration | `int* ptr` | Declares a pointer to an `int` |
| Dereference | `*ptr` | Gets the value stored at the pointer's address |
| Pointer to pointer | `int** ptr` | Stores the address of another pointer |
| NULL pointer | `ptr = NULL` | Pointer pointing to no valid address (value: 0) |
| Pointer arithmetic | `ptr + n` | Moves pointer by `n * sizeof(type)` bytes |

---


## ✨ Author

**Vishal Kumar Jha**

GitHub:\
https://github.com/vishalkumarjha192


Learning DSA with C++ 💪

---