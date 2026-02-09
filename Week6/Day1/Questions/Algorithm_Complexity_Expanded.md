# Algorithm Time Complexity

# 📘 **1. Key Definitions (Expanded)**

## **1.1 Time Complexity**

Time complexity expresses how the runtime of an algorithm grows relative to input size `n`.

### **Categories**

| Column 1        | Column 2            | Column 3                   |
|-----------------|---------------------|----------------------------|
| **O(1)**        | Constant time       | Accessingarray element     |
| **O(log n)**    | Logarithmic time    | Binary search              |
| **O(n)**        | Linear time         | Single loop                |
| **O(n log n)**  | Linearithmic        | Merge sort                 |
| **O(n²)**       | Quadratic           | Nested loops               |
| **O(n³)**       | Cubic               | Triple nested loops        |
| **O(2ⁿ)**       | Exponential         | Recursive subset generation|

------------------------------------------------------------------------

## **1.2 What Is a Loop?**

A loop repeats operations multiple times.

### Simple Diagram

    start
      ↓
    repeat action until condition fails
      ↓
    end

------------------------------------------------------------------------

## **1.3 Logarithmic Loops**

A loop where the value reduces by a factor (like halved each time):

    i = n
    while (i > 1):
        i = i / 2

### Growth Diagram

    n → n/2 → n/4 → n/8 → ... → 1

Number of steps ≈ **log₂(n)**.

------------------------------------------------------------------------

## **1.4 Nested Loops**

Loops inside loops multiply their growth.

Example:

    for i in range(n):
      for j in range(n):

Runs **n × n = n²** times.

Diagram:

    i0 → j0 j1 j2 ... j(n-1)
    i1 → j0 j1 j2 ... j(n-1)
    ...

------------------------------------------------------------------------

# 📘 **2. Examples**

------------------------------------------------------------------------

## **Example 1 --- Linear Loop**

    for (i = 0; i < n; i++)
        do constant work

**Runs n times → O(n)**

------------------------------------------------------------------------

## **Example 2 --- Logarithmic Loop**

    i = n;
    while (i > 0)
        i = i / 2;

Values:

    n → n/2 → n/4 → n/8 → ... → 1

Number of halvings = log₂(n).\
**Complexity = O(log n)**

------------------------------------------------------------------------

## **Example 3 --- Triangular Nested Loop**

    for (i = 0; i < n; i++)
      for (j = 0; j <= i; j++)

Iterations:

    1 + 2 + 3 + ... + n = n(n+1)/2

Therefore:\
**Time Complexity = O(n²)**
