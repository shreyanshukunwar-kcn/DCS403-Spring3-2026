# C++ Two-Dimensional Arrays - Assignment, Examples, and Hints
This document is part of your **Week 4 Day 2 Assignments**, and contains **questions and hints** for 2D arrays.

---

# 📌 1. Basics of 2D Arrays

## **Q1. Input and Display a 3×3 Matrix**
**Problem:**  
Declare a `3×3` integer array. Take input from the user and display it in matrix form.

**Example:**
Input:
```
1 2 3 4 5 6 7 8 9
```
Output:
```
1 2 3
4 5 6
7 8 9
```

**Hint:**  
Use two nested loops: the outer loop for rows and the inner loop for columns.

---

## **Q2. Sum of All Elements in a 2×3 Array**
**Problem:**  
Write a program that calculates and prints the sum of all elements in a 2×3 array.

**Example:**
Array:
```
1 2 3
4 5 6
```
Output:
```
Sum = 21
```
**Hint:**  
Use a `sum` variable and accumulate values inside nested loops.

---

# 📌 2. Row-wise and Column-wise Processing

## **Q3. Print Row-wise and Column-wise Sums**
**Problem:**
Given a `3×3` array, print:
- Sum of each row
- Sum of each column

**Example:**
Matrix:
```
1 2 3
4 5 6
7 8 9
```
Row sums:
```
6, 15, 24
```
Column sums:
```
12, 15, 18
```

**Hint:**  
For row sums: fix row index, loop over columns.  
For column sums: fix column index, loop over rows.

---

## **Q4. Find Largest Element in Each Row**
**Problem:**  
Input a `3×3` matrix and print the largest element of each row.

**Example:**
```
3 9 1
4 2 7
8 6 5
```
Row max values:
```
9, 7, 8
```

**Hint:**  
Assume the first element in the row is max and compare it with the remaining elements.

---

# 📌 3. Matrix-Level Computations

## **Q5. Transpose of a Matrix**
**Problem:**  
Print the transpose of a given `3×3` matrix.

**Example:**
Original:
```
1 2 3
4 5 6
7 8 9
```
Transpose:
```
1 4 7
2 5 8
3 6 9
```

**Hint:**  
Swap rows and columns: element at `[i][j]` becomes `[j][i]`.

---

## **Q6. Matrix Addition**
**Problem:**  
Add two `2×2` matrices and store the result.

**Example:**
A:
```
1 2
3 4
```
B:
```
5 6
7 8
```
Result:
```
6 8
10 12
```

**Hint:**  
Add elements at the same positions: `C[i][j] = A[i][j] + B[i][j]`.

---

## **Q7. Matrix Multiplication (2×3 × 3×2)**
**Problem:**  
Multiply matrix A (2×3) with matrix B (3×2) to produce matrix C (2×2).

**Example:**
A:
```
1 2 3
4 5 6
```
B:
```
7  8
9  10
11 12
```
C = A × B:
```
58  64
139 154
```

**Hint:**  
Use triple nested loops:  
Row of A × Column of B.

---

## **Q8. Passing a 2D Array to a Function**
**Problem:**  
Write a function `printMatrix()` that prints a `3×3` matrix.

**Example:**
Calling `printMatrix()` with:
```
1 2 3
4 5 6
7 8 9
```
should output the same matrix.

**Hint:**  
Use fixed column size in parameters: `void printMatrix(int arr[][3])`.

---

## **Q9. Check if a Matrix is Symmetric**
**Problem:**  
Determine if a `3×3` matrix is symmetric.

**Example:**
Symmetric:
```
1 2 3
2 1 4
3 4 1
```
Non-symmetric:
```
1 2 3
4 5 6
7 8 0
```

**Hint:**  
A matrix is symmetric if `A[i][j] == A[j][i]` for all i, j.

---

# 📌 4. Additional 2D Manipulation Tasks (For Practice, Not Part of Your Assignments!)

## **Q10. Reverse Each Row of a Matrix**
**Problem:**  
Reverse the contents of each row in a matrix.

**Example:**
Original:
```
1 2 3
4 5 6
```
Reversed rows:
```
3 2 1
6 5 4
```

**Hint:**  
Use two-pointer swapping (`start`, `end`) for each row.

---

## **Q11. Reverse Each Column of a Matrix**
**Problem:**  
Reverse each column of a 2D array.

**Example:**
Original:
```
1 2
3 4
5 6
```
Reversed columns:
```
5 6
3 4
1 2
```

**Hint:**  
Swap top and bottom elements for each column.

---

## **Q12. Print Boundary Elements of a Matrix**
**Problem:**  
Print only the boundary elements of an `N×N` matrix.

**Example:**
Matrix:
```
1 2 3
4 5 6
7 8 9
```
Boundary:
```
1 2 3 6 9 8 7 4
```

**Hint:**  
Boundary cells satisfy:  
- `i == 0` or `i == n-1` or  
- `j == 0` or `j == n-1`

---

