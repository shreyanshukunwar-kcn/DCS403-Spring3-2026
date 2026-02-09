# Algorithm Time Complexity Questions

This file contains **Week 6 Day 1 Assignment Questions** in topics related to **Time Complexity** in Big-O.

------------------------------------------------------------------------

## **Key Definitions**

### **Assignment Operation**

A constant‑time operation such as `x = 5`. Runs in: **O(1)**.

### **Arithmetic Operation**

Any fixed mathematical computation (`+`, `-`, `*`, `/`). Runs in: **O(1)**.

### **Comparison**

Checking conditions like `i < n` or `a == b`. Runs in **O(1)**.

### **Input / Output**

Reading or printing values. Generally treated as **O(1)** unless
repeated in loops.

### **Loop Time Complexity Rule**

If a loop runs:
1. **n times → O(n)**
2. **n² times → O(n²)**
3. **n³ times → O(n³)** 
4. **log n times → O(log n)**
5. **n log n → O(n log n)**

------------------------------------------------------------------------

# **Questions**

------------------------------------------------------------------------

## **Question 1**

``` cpp
someAlgorithm(int n)
{
   Assignment   
   for(i=n-2; i>=1; i--) 
     Arithmetic operation
   Output
   for(i=0; i<n; i++) 
     Comparison
   for(i=0; i<6; i++)
     Assignment
}
```

### **Hint:**

Identify how many times each loop runs. 
Note that the last loop runs a constant number of times (6 iterations).

------------------------------------------------------------------------

## **Question 2**

``` cpp
someAlgorithm(int n)
{
   Input
   for(i=n; i>=1; i=i-4)
     Arithmetic operation
   Output
}
```

### **Hint:**

The loop decreases by 4 each time. 
Determine how many steps until it reaches 1.

------------------------------------------------------------------------

## **Question 3**

``` cpp
someAlgorithm(int n)
{
   Input
   for(i=1; i<=n; i=i+5) 
     Comparison
   Output
}
```

### **Hint:**

How many increments of 5 are needed to reach `n`?

------------------------------------------------------------------------

## **Question 4**

``` cpp
someAlgorithm(int n)
{
   Assignment
   for(i=n; i>=1; i/=2)
     Arithmetic operation
   Output
}
```

### **Hint:**

Dividing by 2 repeatedly leads to what type of complexity?

------------------------------------------------------------------------

## **Question 5**

``` cpp
someAlgorithm(int n)
{
   Assignment
   for(i=1; i<=n; i*=2)
     Arithmetic operation
   Output
}
```

### **Hint:**

Starting at 1 and doubling each iteration results in how many steps?

------------------------------------------------------------------------

## **Question 6**

``` cpp
someAlgorithm(int n)
{
   Input
   for(i=0; i<n; i++)
   {
     Assignment
     for(j=0; j<n; j++)
       Comparison
   }
   Arithmetic operation
   Output
}
```

### **Hint:**

This is a nested loop: 
  Outer loop runs `n` times; 
  Inner loop also runs `n` times.

------------------------------------------------------------------------

## **Question 7**

``` cpp
someAlgorithm(int n)
{
   Input
   for(i=0; i<n; i++)
   {
     for(i=n; i>=1; i/=2)
       Arithmetic operation
     for(j=0; j<n; j++)
       Comparison
   }
   Arithmetic operation
   Output
}
```

### **Hint:**

Careful: the inner loop reuses `i`. 
The structure still contains: 
  1. An outer loop,
  2. An inner logarithmic loop,
  3. An inner linear loop.

------------------------------------------------------------------------

## **Question 8**

``` cpp
someAlgorithm(int n)
{
   input    
   for(i=0; i<n; i++) 
     for(j=0; j<n; j++)
       for(k=0; k<n; k++) 
         comparison
   arithmetic operation
   for(i=0; i<n; i++)
     for(j=10; j>=1; j--)
       assignment
}
```

### **Hint:**

Identify: - triple nested loops, 
a loop with constant inner loop (j runs from 10 to 1 → constant time).

------------------------------------------------------------------------

## **Question 9**

``` cpp
someAlgorithm(int n)
{
   Assignment
   for(i=0; i<n; i++)
     for(j=0; j<=i; j++)
       arithmetic operation
   output
}
```

### **Hint:**

This is a triangular nested loop:
Total operations = `1 + 2 + 3 + ... + n`.

------------------------------------------------------------------------
