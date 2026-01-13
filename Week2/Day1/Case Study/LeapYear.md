# 🗓️ C++ Program to Check Leap Year

## 🧩 Problem Statement

Write a C++ program to check whether a given year is a **leap year** or not.

A **leap year** is a year that has **366 days** instead of 365 — the extra day is added to February (making it 29 days).

Your program should:
- Ask the user to enter a year.
- Determine if that year is a leap year.
- Print an appropriate message.

---

## 🧠 Logic Explanation

A year is a **leap year** if it satisfies **either** of the following conditions:

1. It is **divisible by 4**, but **not divisible by 100**.  
   ✅ Example: 2016, 2020, 2024

2. It is **divisible by 400**.  
   ✅ Example: 1600, 2000

If neither of these conditions are true, it’s **not** a leap year.

| Year | Divisible by 4 | Divisible by 100 | Divisible by 400 | Leap Year? |
|------|----------------|------------------|------------------|-------------|
| 2020 | ✅ | ❌ | ❌ | ✅ |
| 1900 | ✅ | ✅ | ❌ | ❌ |
| 2000 | ✅ | ✅ | ✅ | ✅ |
| 2023 | ❌ | ❌ | ❌ | ❌ |

---

## 💡 Example Inputs and Outputs

### Example:
**Input:** Enter a year: 2000.

**Ouput:** 2000 is a leap year.
