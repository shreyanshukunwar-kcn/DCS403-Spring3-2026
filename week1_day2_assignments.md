# 🧮 C++ Basics — Assignment Questions

---

## **Q1. Salary Calculation Using Constants and Type Conversion**

### **Problem Statement**
Write a C++ program that calculates an employee’s **total salary** based on a base salary and a bonus percentage.

The program should:
- Store the **base salary** as an integer value
- Store the **bonus percentage** as a constant
- Compute the **bonus amount**
- Calculate and display the **total salary**

This question is designed to test your understanding of:
- Constants (`const`)
- Numeric data types
- Arithmetic operations
- Implicit and explicit type conversion

---

### **Concept Explanation**
- A **base salary** is typically a whole number (e.g., 50,000), making `int` a suitable data type.
- A **bonus percentage** should not change during program execution, so it must be declared using `const`.
- Percentage calculations usually produce fractional values, requiring the use of a floating-point type (`float` or `double`).
- Proper type conversion is required to avoid incorrect results due to integer division.

---

### **Formula**

```
Bonus Amount = Base Salary × (Bonus Percentage / 100)
Total Salary = Base Salary + Bonus Amount
```

---

### **Hints**
- Declare the bonus percentage using the `const` keyword.
- Convert integer values to floating-point before performing percentage calculations.
- Use a floating-point variable to store the bonus amount and total salary.
- Be careful of integer division when dividing by `100`.

---

### **Expected Input**
```
Base Salary: 50000
```

### **Expected Output**
```
Total Salary: 57500
```
*(Assuming bonus percentage = 15%)*

---

---

## **Q2. Temperature Conversion (Celsius to Fahrenheit)**

### **Problem Statement**
Write a C++ program that converts a temperature value from **Celsius** to **Fahrenheit**.

The program should:
- Read a temperature value in Celsius
- Use constants for fixed conversion values
- Calculate the equivalent temperature in Fahrenheit
- Display the result

This problem emphasizes:
- Constants in formulas
- Floating-point arithmetic
- Type conversion and precision

---

### **Concept Explanation**
- Temperature conversion formulas involve **multiplication and division**, which may result in fractional values.
- Using integer division in such cases can produce incorrect results.
- Constants such as `9` and `5` should be used carefully to avoid truncation.
- Using floating-point constants ensures accurate calculations.

---

### **Formula**

```
Fahrenheit = (Celsius × 9 / 5) + 32
```

---

### **Hints**
- Use `const` variables for fixed values like `9`, `5`, and `32`.
- Ensure at least one operand in the division is a floating-point value.
- Store the Celsius temperature in a floating-point variable.
- Print the result with appropriate formatting.

---

### **Expected Input**
```
Celsius: 25
```

### **Expected Output**
```
Fahrenheit: 77
```

---

### **Common Mistakes to Avoid**
- Using integer division (`9 / 5`) instead of floating-point division
- Not declaring conversion constants as `const`
- Storing results in integer variables

---