# Linked List Assignment Questions

This file contains **Week 7 Day 2 Assignment Questions** in topics related to **Linked Lists**

---

## 1. Creation and Traversal

**Question:**  
Write a program to create a singly linked list from a given array of integers. Traverse the list and print all the elements.

**Hint:**  
- Start by defining a node structure (with data and a pointer to the next node).
- Loop through the array, create nodes, and link them.
- Use a loop to traverse and print each node's value.

---

## 2. Searching an Element

**Question:**  
Given a singly linked list and a value X, write a function to search for X in the list. If found, print its position (1-based index), otherwise print that the element is not present.

**Hint:**  
- Traverse the list while comparing each node’s value with X.
- Keep a counter for the position.
- Return position if found, otherwise indicate not found.

---

## 3. Insertion at the End

**Question:**  
Write a function to insert a new node with a given value at the end of a singly linked list. Print the updated list after insertion.

**Hint:**  
- Traverse to the last node of the list.
- Make the last node point to the newly created node.
- Make sure to handle the case when the list is empty.

---

## 4. Insertion at the Beginning

**Question:**  
Write a function to insert a new node with a given value at the beginning of a singly linked list. Print the updated list after insertion.

**Hint:**  
- Create a new node.
- Point its next to the current head.
- Update head to this new node.

---

## 5. Deletion of an Element by Value

**Question:**  
Given a value X, write a function to delete the first occurrence of X from the singly linked list. Print the updated list after deletion.

**Hint:**  
- Search for the node with value X.
- Update the previous node's next pointer to skip the deleted node.
- Handle cases where X is at the head, not found, or the list is empty.

---

## 6. Deletion at a Given Position

**Question:**  
Write a function to delete the node at a given position (1-based index) from the singly linked list. Print the updated list after deletion.

**Hint:**  
- Traverse to the node just before the given position.
- Update pointers to remove the target node.
- Pay special attention to deleting the head node.

---

## 7. Reversal of a Linked List

**Question:**  
Write a function to reverse a singly linked list and print the reversed list.

**Hint:**  
- Use three pointers: previous, current, and next.
- Change the next pointers of each node to point to the previous node.
- Update the head pointer at the end.

---

## 8. Count Number of Nodes

**Question:**  
Write a function that returns the number of nodes in the given singly linked list.

**Hint:**  
- Initialize a counter variable.
- Traverse through each node, incrementing the counter.

---

## 9. Insert After a Given Value

**Question:**  
Given a value X and a value Y, insert a new node with value Y immediately after the first node with value X in the list. Print the updated list.

**Hint:**  
- Search for the node containing X.
- Create a new node with value Y.
- Update pointers to insert Y after X.

---

## 10. Print Elements in Reverse Order (without modifying the list)

**Question:**  
Write a function to print the elements of the singly linked list in reverse order using recursion (do not reverse the actual list).

**Hint:**  
- Use recursion to travel to the end of the list.
- Print the node value as you return from each recursive call.

---

> **Tip:** Practice each operation by coding it yourself. Test edge cases such as inserting or deleting from an empty list, and lists with only one node.