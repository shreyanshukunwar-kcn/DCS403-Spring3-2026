# C++ Pattern Printing Assignment Questions

This document contains **Week 3 Day 2 Assignments Questions** focused on **pattern printing** using loops. Each question includes a problem statement and a hint.

---

## 🟢 EASY LEVEL

### 1. Solid Square of Stars
**Problem:** Input `n` and print a solid square pattern of `*`.

**Example (n = 4):**
```
****
****
****
****
```

**Hint:** Use two nested loops — one for rows and one for columns.

---

## 🟡 MEDIUM LEVEL

### 2. Inverted Right-Angled Triangle
**Problem:** Print a triangle in reverse order.

**Example (n = 5):**
```
*****
****
***
**
*
```

**Hint:** The number of stars decreases each row.

---

### 3. Number Triangle
**Problem:** Print a triangle of increasing numbers.

**Example (n = 5):**
```
1
12
123
1234
12345
```

**Hint:** Print numbers instead of stars, up to the current row index.

---

### 4. Alphabet Pattern
**Problem:** Print a pattern of letters in increasing order.

**Example (n = 5):**
```
A
A B
A B C
A B C D
A B C D E
```

**Hint:** Use ASCII values of characters (`'A' + j`).

---

## 🔴 HARD LEVEL

### 5. Full Pyramid
**Problem:** Print a centered pyramid of stars.

**Example (n = 5):**
```
    *
   ***
  *****
 *******
*********
```

**Hint:** Print spaces first, then stars. Number of stars = `2*i - 1`.

---

### 6. Inverted Pyramid
**Problem:** Print an inverted pyramid.

**Example (n = 5):**
```
*********
 *******
  *****
   ***
    *
```

**Hint:** Print spaces first, then decreasing stars.

---

### 7. Diamond Pattern
**Problem:** Combine full and inverted pyramids to make a diamond.

**Example (n = 4):**
```
   *
  ***
 *****
*******
 *****
  ***
   *
```

**Hint:** Use two loops — one for the upper and one for the lower half.

---

### 8. ⭐ Hollow Square Pattern
**Problem:** Print a square of stars with hollow inside.

## **Pattern to Print**
```
*****
*   *
*   *
*   *
*****
```

---

## **Hints**

### 🧩 8.1. Observe the Structure
- The pattern has **5 rows** and **5 columns**.
- The **first** and **last** rows are **completely filled with '*'**.
- The **middle rows** have `*` only at the **first** and **last** columns.

---

### 🧠 8.2. Think in Terms of Loops
You can use **nested loops**:
- **Outer loop** → for rows (from 1 to 5)
- **Inner loop** → for columns (from 1 to 5)

---

### ⚙️ 8.3. Use Conditions
Inside the loops, decide **what to print**:
- If the current row is **first** or **last**, print `*`.
- Else, if the current column is **first** or **last**, print `*`.
- Otherwise, print a **space** `' '`.

---

### 💡 8.4. Logic Example (in plain language)
```
for each row:
    for each column:
        if it's the first/last row or first/last column:
            print "*"
        else:
            print " "
    move to next line
```
---

**Additional Hint:** Print stars only at borders (first/last row or first/last column).

### 🧪 8.5. Challenge (Optional)
Try changing the number of rows and columns (like 6×10) to make it more flexible!

---

### 9. Pascal’s Triangle
**Problem:** Print Pascal’s triangle up to N rows.

# 📘 Pascal’s Triangle

## **Definition**
**Pascal’s Triangle** is a **triangular array of numbers** in which each number is the **sum of the two numbers directly above it** in the previous row.

It starts with a **1** at the top, and each row represents the **coefficients of the binomial expansion** of \((a + b)^n\).

---

## **Structure Example**

| Row | Elements | Binomial Expansion |
|-----|-----------|--------------------|
| 0 | 1 | \((a + b)^0 = 1\) |
| 1 | 1   1 | \((a + b)^1 = a + b\) |
| 2 | 1   2   1 | \((a + b)^2 = a^2 + 2ab + b^2\) |
| 3 | 1   3   3   1 | \((a + b)^3 = a^3 + 3a^2b + 3ab^2 + b^3\) |
| 4 | 1   4   6   4   1 | \((a + b)^4 = a^4 + 4a^3b + 6a^2b^2 + 4ab^3 + b^4\) |

---

## **Pattern Rule**
Each entry can be calculated as:

\[
C(n, k) = \frac{n!}{k!(n-k)!}
\]

where  
- \( n \) is the row number (starting from 0),  
- \( k \) is the position in the row (starting from 0).

---

## **Visual Representation**
```
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
1   5  10  10  5   1
```

---

## **Applications**
- Used in **binomial expansions**
- Helps in finding **combinations (nCr)**
- Appears in **probability, algebra, and combinatorics**

**Example (n = 5):**
```
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
```

**Hint:** Use combinations formula: `nCr = n! / (r! * (n - r)!)`. 

