# Binary Trees Assignment Questions

This file contains **Week 8 Assignment Questions** in topics related to **Binary Trees**

---

## Concepts Covered
- Binary Search Tree properties
- Recursive vs. iterative (non-recursive) algorithms
- Tree traversals (inorder)
- Dynamic memory management with pointers
- Edge case handling (e.g., duplicates, deletion cases)

---

## Questions

### 1. Recursive Search in BST

**Question:**  
Write a C++ function that searches for a key in a BST using recursion. The function should return a pointer to the node if found, or `nullptr` if not found.

**Hint:**  
- Recursively compare the key to the current node’s data.
- If the key is smaller, search the left subtree. If larger, search the right.
- Base cases are when the root is `nullptr` or the root's data matches the key.

<br/>

---

### 2. Non-Recursive (Iterative) Search in BST

**Question:**  
Implement a function that searches for a given key in a BST without using recursion.

**Hint:**  
- Use a while loop instead of recursive calls.
- Continue traversing left or right according to BST rules until you find the key or reach `nullptr`.  

<br/>

---

### 3. Recursive Insertion in BST

**Question:**  
Write a function to insert a node into a BST recursively. The function should avoid inserting duplicate keys.

**Hint:**  
- Traverse left or right subtree recursively based on comparisons.
- When you reach `nullptr`, create and return a new node.
- Handle duplicates by ignoring them.

<br/>

---

### 4. Non-Recursive Insertion in BST

**Question:**  
Implement an iterative version of BST insertion. The function should avoid inserting duplicate keys.

**Hint:**  
- Use a loop and keep track of the parent node.
- Insert the new node as the left or right child as appropriate.
- Be careful with the case when the tree is empty.

<br/>

---

### 5. Find Minimum and Maximum in BST

**Question:**  
(a) Write separate recursive functions to find the minimum and maximum node in a BST.  
(b) Write separate iterative (non-recursive) functions to find the minimum and maximum node in a BST.

**Hint:**  
- The minimum is the leftmost node, the maximum is the rightmost.
- For recursion, base case is when left/right child is null.
- For iteration, use a loop to go left/right until you can't go further.

<br/>

---

### 6. Delete a Node from BST

**Question:**  
Implement a function that deletes a node from a BST given a key, maintaining the BST properties.

**Hint:**  
Consider three cases:
  1. Node to be deleted has no children (leaf node)
  2. Node to be deleted has one child
  3. Node to be deleted has two children (replace data with in-order successor, then delete successor)

<br/>

---

### 7. Building a BST with User Input

**Question:**  
Write a program that:
- Prompts the user to enter the number of nodes and their values
- Builds the BST using either recursive or non-recursive insertion
- Displays the BST in inorder traversal

**Hint:**  
- Use a loop for reading user values.
- After insertion, call the inorder traversal.

<br/>

---

### 8. Application: Search After Deletion

**Question:**  
Combine your previous code for insertion, deletion, and search.  
Write a program that lets the user:
- Build a BST with given values
- Delete a node by key
- Search for a specific key and print whether it exists after deletion

**Hint:**  
- Keep your functions modular.
- Call your search function after the delete operation.

---

## Further Practice (Non-Assignments)

- Implement preorder and postorder traversals (both recursive and iterative).
- Measure the height of the BST.
- Check if a binary tree is a valid BST.

---

## 🌟 Conclusion

Congratulations on completing your journey through Data Structures!  
You’ve built a strong foundation from arrays to trees and beyond. 

Remember:  
Algorithms may come and go, but a solid grasp of data structures will serve you for a lifetime.  
Keep questioning, keep experimenting, and keep coding; your adventure as a problem-solver has only just begun!

Wishing you all the best in your future endeavors!

*– Shreyanshu Kunwar*