# C++ Function Concepts - Classwork

This document is part of your **Week 3 Day 2** class activity, and includes **C++ questions and hints** for various function-related concepts. 
Each question focuses on one topic, with example descriptions.

---

## 🧩 1. Defining and Calling a Function
**Problem:**  
Write a function `add()` that takes two integers as parameters and returns their sum. Call this function from `main()` and display the result.

**Hint:**  
Define the function before calling it, or use a function prototype.

---

## 🧩 2. Void Functions
**Problem:**  
Create a void function `greet()` that displays “Hello, welcome to C++ functions!”.

**Hint:**  
A `void` function does not return a value.

---

## 🧩 3. Passing Arguments by Value
**Problem:**  
Write a function `square(int n)` that prints the square of a number. Verify that the original number in `main()` does not change.

**Hint:**  
When arguments are passed **by value**, a copy is made and the original variable is unaffected.

---

## 🧩 4. Overloading Functions
**Problem:**  
Create an overloaded function `area()` that calculates the area of a circle (one parameter) and a rectangle (two parameters).

**Hint:**  
Use the same function name with different parameter lists to achieve overloading.

---

## 🧩 5. Default Arguments
**Problem:**  
Write a function `power(int base, int exponent = 2)` that calculates base raised to the given power. If the exponent is not provided, assume it is 2.

**Hint:**  
Assign a default value to the parameter in the function declaration.

---

## 🧩 6. Inline Functions
**Problem:**  
Create an inline function `cube(int n)` that returns the cube of a number.

**Hint:**  
Use the keyword `inline` before the function definition for small, frequently used functions.

---

## 🧩 7. Static, Global, and Static Local Variables
**Problem:**  
Demonstrate the difference between global, local, and static local variables.

**Hint:**  
Static local variables retain their value between function calls.

---

## 🧩 8. Passing Arguments by Reference
**Problem:**  
Write a function `swapValues(int &a, int &b)` that swaps two numbers using references.

**Hint:**  
Use the reference symbol `&` in the parameter list to directly modify the caller’s variables.

---

## 🧩 9. Constant Reference Parameters
**Problem:**  
Write a function `display(const string &msg)` that takes a constant reference to a string and prints it.

**Hint:**  
Use `const` to prevent modification of the argument inside the function.
