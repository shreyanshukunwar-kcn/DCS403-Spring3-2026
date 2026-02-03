# C++ Recursion
This file contains **Week 5 Day 1 Assignment Questions** in topics related to **Recursion**

---

# 🟢 EASY LEVEL

## **Q1. Print Numbers from 1 to N (Basic Recursion)**
**Problem:**  
Write a recursive function that prints numbers from **1 to N**.

**Hint:**  
Make the recursive call first, then print the number during the unwinding phase.

**Expected Input:**
```
5
```
**Expected Output:**
```
1 2 3 4 5
```

---

## **Q2. Find Factorial of a Number**
**Problem:**  
Write a recursive function that returns the factorial of a number.

**Hint:**  
Use the relation: `n! = n * (n-1)!`.  
Base case should handle `0!` and `1!`.

**Expected Input:**
```
5
```
**Expected Output:**
```
120
```

---

# 🟡 MEDIUM LEVEL

## **Q3. Sum of Digits (Recursive)**
**Problem:**  
Write a recursive function that calculates the sum of digits of a given number.

**Hint:**  
Isolate the last digit, then recursively process the remaining number.

**Expected Input:**
```
9876
```
**Expected Output:**
```
30
```

---

## **Q4. Print All Elements of an Array Using Recursion**
**Problem:**  
Print each element of an array recursively.

**Hint:**  
Use an index that increments with each recursive call.

**Expected Input:**
```
4
10 20 30 40
```
**Expected Output:**
```
10 20 30 40
```

---

## **Q5. Tail-Recursive Power Function**
**Problem:**  
Use **tail recursion** to compute `a^b`.

**Hint:**  
Carry the intermediate result as an argument in each recursive call.

**Expected Input:**
```
2 5
```
**Expected Output:**
```
32
```

---

# 🔴 HARD LEVEL

## **Q6. Fibonacci Number (Recursive)**
**Problem:**  
Compute the nth Fibonacci number using recursion.

**Hint:**  
Use the relation: `Fib(n) = Fib(n-1) + Fib(n-2)`.

**Expected Input:**
```
6
```
**Expected Output:**
```
8
```

---

## **Q7. Tail-Recursive Fibonacci**
**Problem:**  
Rewrite Fibonacci using **tail recursion**.

**Hint:**  
Carry two parameters: current and next Fibonacci number.

**Expected Input:**
```
6
```
**Expected Output:**
```
8
```

---

## **Q8. Reverse a String Using Recursion**
**Problem:**  
Reverse a given string using recursion.

**Hint:**  
Swap characters at two indices, then recursively move inward.

**Expected Input:**
```
hello
```
**Expected Output:**
```
olleh
```

---

## **Q9. Tower of Hanoi (3 Pegs)**
**Problem:**  
Solve the Tower of Hanoi puzzle for `n` disks.

**Hint:**  
Move `n-1` disks to auxiliary rod, move largest disk, then move `n-1` back.

**Expected Input:**
```
3
```
**Expected Output:**
```
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C
```

---

## **Q10. Check if a String is Palindrome (Recursive)**
**Problem:**  
Write a recursive function to check if a string is a palindrome.

**Hint:**  
Compare start and end characters; then recurse inward.

**Expected Input:**
```
racecar
```
**Expected Output:**
```
Palindrome
```

---