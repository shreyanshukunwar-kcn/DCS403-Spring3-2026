# Linear and Circular Queue Assignment Questions

This file contains **Week 7 Day 1 Assignment Questions** in topics related to **Queues**

---

## Linear Queue

### 1. Creation of Queue
**Question:**  
Implement a linear queue using an array. Support operations for enqueue (insert), dequeue (remove), and display the queue.

**Hint:**  
- Use two variables, `front` and `rear`, to track the queue positions.
- Increment `rear` to add, and `front` to remove.
- Handle condition for empty and full queue.

---

### 2. Enqueue Operation
**Question:**  
Write a function to insert an element at the rear end of the linear queue. Display the updated queue.

**Hint:**  
- Check if the queue is full before inserting.
- After insertion, update `rear`.

---

### 3. Dequeue Operation
**Question:**  
Write a function to delete an element from the front of the linear queue. Display the updated queue.

**Hint:**  
- Check if the queue is empty before removing.
- After removal, update `front`.

---

### 4. Peek/Front Element
**Question:**  
Write a function to return and print the front element of the queue without removing it.

**Hint:**  
- Check if queue is empty.
- Return element at `front`.

---

### 5. Traversal/Display Queue
**Question:**  
Write a function to print all elements present in the linear queue from front to rear.

**Hint:**  
- Loop from `front` to `rear` and print the elements.

---

### 6. Check Full/Empty Conditions
**Question:**  
Write functions to check if the queue is full or empty.

**Hint:**  
- Queue is empty if `front == -1`.
- Queue is full if `rear == SIZE-1`.

---

## Circular Queue

### 1. Creation of Circular Queue
**Question:**  
Implement a circular queue using an array. Support operations for enqueue, dequeue, and display the queue.

**Hint:**  
- Use `front` and `rear` to manage positions.
- Use modulo operator to wrap around indices.

---

### 2. Enqueue Operation
**Question:**  
Write a function to insert an element at the rear end of a circular queue. Display the updated queue.

**Hint:**  
- Check if the queue is full before inserting (`(rear + 1) % SIZE == front`).
- Use modulo for updating `rear`.

---

### 3. Dequeue Operation
**Question:**  
Write a function to delete an element from the front of the circular queue. Display the updated queue.

**Hint:**  
- Check if the queue is empty.
- Use modulo for updating `front`.

---

### 4. Peek/Front Element
**Question:**  
Write a function to return and print the front element of the circular queue.

**Hint:**  
- Check if the queue is empty.
- Return element at `front`.

---

### 5. Traversal/Display Circular Queue
**Question:**  
Write a function to print all elements present in the circular queue from front to rear.

**Hint:**  
- Use a loop with modulo to wrap around from rear to front.

---

### 6. Check Full/Empty Conditions
**Question:**  
Write functions to check if the circular queue is full or empty.

**Hint:**  
- Full: `(rear + 1) % SIZE == front`
- Empty: `front == -1`

---

> **Tip:** For all queue implementations, try to handle exceptional cases like inserting into a full queue or removing from an empty queue. Test your code with different queue sizes and sequences of operations!