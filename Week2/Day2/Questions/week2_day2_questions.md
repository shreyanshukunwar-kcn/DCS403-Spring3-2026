# Assignment Questions: Mathematical Functions, Characters, and Strings

---
## 🚀 Beginners Assignment Questions


## 🧮 Mathematical Functions

### **Question 1:**
Write a program to find the square root, power, and absolute value of a number using mathematical functions.

**Hint:** Use `sqrt()`, `pow()`, and `fabs()` from `<cmath>`.

**Expected Input:**
```
Number: -9
```
**Expected Output:**
```
Square root of 9 = 3
2 raised to power 3 = 8
Absolute value of -9 = 9
```

---

### **Question 2:**
Write a program to calculate the sine, cosine, and tangent of an angle in radians.

**Hint:** Use `sin()`, `cos()`, and `tan()` functions from `<cmath>`.

**Expected Input:**
```
Angle: π/4
```
**Expected Output:**
```
sin(45°) = 0.707
cos(45°) = 0.707
tan(45°) = 1
```

---

### **Question 3:**
Write a program to find the largest and smallest of two numbers using `fmax()` and `fmin()`.

**Hint:** Use `fmax(a, b)` and `fmin(a, b)` from `<cmath>`.

**Expected Input:**
```
12.7 9.3
```
**Expected Output:**
```
Maximum = 12.7
Minimum = 9.3
```

---

## 🔤 Characters

### **Question 1:**
Write a program to check if a character is a letter, digit, or special character.

**Hint:** Use `isalpha()`, `isdigit()`, and `ispunct()` from `<cctype>`.

**Expected Input:**
```
@
```
**Expected Output:**
```
@ is a special character.
```

---

### **Question 2:**
Write a program to convert lowercase letters to uppercase and vice versa.

**Hint:** Use `toupper()` and `tolower()`.

**Expected Input:**
```
a
```
**Expected Output:**
```
Uppercase: A
```

---

### **Question 3:**
Write a program to count the number of vowels and consonants in a given string.

**Hint:** Use `isalpha()` and check characters `'a', 'e', 'i', 'o', 'u'`.

**Expected Input:**
```
Hello World
```
**Expected Output:**
```
Vowels: 3
Consonants: 7
```

---

## 🧵 Strings

### **Question 1:**
Write a program to find the length of a string.

**Hint:** Use `length()` or `size()` function.

**Expected Input:**
```
Programming
```
**Expected Output:**
```
Length of string: 11
```

---

### **Question 2:**
Write a program to reverse a string.

**Hint:** Use `reverse(str.begin(), str.end())`.

**Expected Input:**
```
Hello
```
**Expected Output:**
```
Reversed string: olleH
```

---

### **Question 3:**
Write a program to check if a string is a palindrome.

**Hint:** Compare the string with its reversed version.

**Expected Input:**
```
madam
```
**Expected Output:**
```
The string is a palindrome.
```

---

### **Question 4:**
Write a program to concatenate two strings.

**Hint:** Use `+` operator or `append()` function.

**Expected Input:**
```
Kings
College
```
**Expected Output:**
```
Concatenated String: Kings College
```

---

## 🚀 Advanced Assignment Questions

### 🧮 **Mathematical Functions**

#### **1. Quadratic Equation Roots**
Write a program to calculate the roots of a quadratic equation
\[
ax^2 + bx + c = 0
\]

**Formula Used:**  
\[
D = b^2 - 4ac
\]  
\[
x_1 = \frac{-b + \sqrt{D}}{2a}, \quad x_2 = \frac{-b - \sqrt{D}}{2a}
\]

**Hint:** Use `sqrt()` and conditional statements for real, equal, or imaginary roots.

**Expected Input:**
```
a = 1, b = -3, c = 2
```
**Expected Output:**
```
Roots are real and distinct: 2 and 1
```

---

#### **2. Distance Between Two Points**
Find the distance between two points \((x_1, y_1)\) and \((x_2, y_2)\).

**Formula Used:**  
\[
\text{Distance} = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}
\]

**Expected Input:**
```
x1 = 2, y1 = 3, x2 = 5, y2 = 7
```
**Expected Output:**
```
Distance between points = 5
```


### 🔤 **Characters**

#### **1. Character Frequency Counter**
Count how many times each alphabet appears in a string (ignore case).

**Hint:** Use an array of size 26 and `tolower()`.

**Expected Input:**
```
Programming
```
**Expected Output:**
```
a:1  g:2  i:1  m:2  n:1  o:1  p:1  r:2
```

---

#### **2. Character Case Alternator**
Convert every alternate character in a string to uppercase, starting with lowercase.

**Expected Input:**
```
hello world
```
**Expected Output:**
```
hElLo wOrLd
```

---

#### **3. Remove All Non-Alphabetic Characters**
Remove digits and special symbols from a string, keeping only letters.

**Expected Input:**
```
C++123 is #1!
```
**Expected Output:**
```
Cis
```

---

### 🧵 **Strings**

#### **1. Count Words in a Sentence**
Count how many words are in a sentence.

**Hint:** Count spaces while ignoring multiple consecutive spaces.

**Expected Input:**
```
This  is   a test
```
**Expected Output:**
```
Number of words: 4
```

---

#### **2. Find the Longest Word in a Sentence**
Find and print the longest word from a sentence.

**Expected Input:**
```
C++ programming is amazing
```
**Expected Output:**
```
Longest word: programming
```

---

#### **3. Anagram Checker**
Check if two strings are anagrams (contain same characters in any order).

**Expected Input:**
```
listen
silent
```
**Expected Output:**
```
Strings are anagrams.
```

---

#### **4. Remove Vowels from a String**
Remove all vowels from a string.

**Expected Input:**
```
Education
```
**Expected Output:**
```
dctn
```

---

#### **5. String Compression**
Compress a string by counting consecutive repeated characters.

**Expected Input:**
```
aaabbccccd
```
**Expected Output:**
```
a3b2c4d1
```

