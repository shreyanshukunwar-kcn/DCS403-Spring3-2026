# C++ Arrays, Searching, and Sorting
This document is part of your **Week 4 Day 1 Assignments**, and contains **questions and hints** in the concept of Arrays.

---

# 📌 1. Arrays (Basics)

### **Q1. Store and Display 5 Integers**
**Problem:**  
Declare an array of 5 integers. Take input from the user and print all elements.

**Hint:**  
Use a loop to take input and another loop to display values.

---

# 📌 2. Array Manipulation

### **Q2. Find the Maximum Element in an Array**
**Problem:**  
Input `n` elements and find the largest value.

**Hint:**  
Assume the first element is the maximum, then compare it with the rest.

---

# 📌 3. Passing Arrays to Functions

### **Q3. Sum of Elements Using a Function**
**Problem:**  
Write a function that accepts an integer array and returns the sum of its elements.

**Hint:**  
Arrays decay to pointers when passed to functions. Use an additional parameter to pass array size.

---

# 📌 4. Array Searching Algorithms

## 🔍 **Concepts: Searching**

### **🔸 Linear Search (Definition)**
- Checks each element one by one.
- Works on **unsorted or sorted** arrays.

### **Time Complexity:**
- **Best case:** O(1) (element found at first position)
- **Worst case:** O(n) (element at end or not present)
- **Average case:** O(n)

### **When to Use:**
- When array is small or unsorted.

---

### **Q4. Linear Search**
**Problem:**  
Search for a number in an array using linear search.

**Hint:**  
Scan each element sequentially until the target is found.

---

### **🔸 Binary Search (Definition)**
- Efficient searching on **sorted arrays only**.
- Repeatedly divides the search space in half.

### **Time Complexity:**
- **Best case:** O(1)
- **Worst case:** O(log n)
- **Average case:** O(log n)

### **When to Use:**
- When the array is sorted.
- When fast searching is required.

---

### **Q5. Binary Search**
**Problem:**  
Search for an element using binary search in a sorted array.

**Hint:**  
Use mid = (low + high)/2 to compare and adjust search boundaries.

---

# 📌 5. Array Sorting Algorithms

## 🔧 **Concepts: Sorting**

---

## **🔸 Selection Sort (Definition)**
- Repeatedly selects the smallest element and swaps it to its correct position.
- Performs well on small arrays, but inefficient for large ones.

### **Time Complexity:**
- **Best case:** O(n²)
- **Worst case:** O(n²)
- **Average case:** O(n²)

### **When to Use:**
- When memory usage must be minimal.
- Simple and predictable behavior.

---

### **Q6. Selection Sort**
**Problem:**  
Sort an array in ascending order using selection sort.

**Hint:**  
Find the minimum element in the unsorted portion and swap with the first element.

---

## **🔸 Bubble Sort (Definition)**
- Compares adjacent elements and swaps them if out of order.
- Simple but slow for large datasets.

### **Time Complexity:**
- **Best case:** O(n) (when optimized with early-stop)
- **Worst case:** O(n²)
- **Average case:** O(n²)

### **When to Use:**
- When teaching sorting basics.
- When the array is nearly sorted.

---

### **Q7. Bubble Sort**
**Problem:**  
Sort an array in ascending order using bubble sort.

**Hint:**  
Swap adjacent elements if they are in the wrong order. Repeat until no swaps occur.

---

