# Binary Tree Construction Explanation

This document explains how the given binary tree is constructed from the provided traversals and shows the actual tree structure, with step-by-step details.

---

## 1. Traversal Definition

- **Preorder**: Root, Left, Right
- **Inorder**: Left, Root, Right
- **Postorder**: Left, Right, Root

---

## 2. Given Traversals

```
Inorder   : G D H B E I A C J F K
Preorder  : A B D G H E I C F J K
Postorder : G H D I E B J K F C A
```

---

## 3. Constructing the Binary Tree (Step-by-step)

### Step 1: Find the Root

- The **first node in Preorder** is always the root.
- Root: `A`

### Step 2: Split Inorder into Subtrees

Locate A in the Inorder sequence (index 6):

```
Index : 0 1 2 3 4 5 6 7 8 9 10
InOrder: G D H B E I A C J F K
                          ↑
               (A at index 6)
```

- **Left Subtree Inorder** : G D H B E I (`indices 0-5`)
- **Right Subtree Inorder**: C J F K     (`indices 7-10`)

From Preorder, pick the next elements for left and right subtrees based on their lengths.

---

## 4. Detailed Breakdown

### Building the Left Subtree of `A`

#### Preorder: `B D G H E I`  
#### Inorder:  `G D H B E I`

- Root: `B` (next in Preorder)
- Position of B in Inorder: index 3

**Further split:**
- **Left Subtree of B**  
  - Preorder: `D G H`  
  - Inorder : `G D H`  
  - Root: D (preorder), in inorder at idx 1
    - Left: G (preorder G, inorder G)
    - Right: H (preorder H, inorder H)
- **Right Subtree of B**  
  - Preorder: `E I`  
  - Inorder : `E I`
  - Root: E
    - Right: I

### Building the Right Subtree of `A`

#### Preorder: `C F J K`  
#### Inorder : `C J F K`  

- Root: C
- C's right subtree: J F K (preorder F J K)
  - Root F (inorder index 1)
    - Left: J
    - Right: K

---

## 5. Complete Tree Structure

```
                    A
                  /   \
                B       C
              /   \      \
            D     E       F
           / \     \     / \
         G    H     I   J   K
```

**Node Relationships:**
- `A`: root  
  - `B`: left child of A  
    - `D`: left child of B  
      - `G`: left child of D  
      - `H`: right child of D  
    - `E`: right child of B  
      - `I`: right child of E  
  - `C`: right child of A  
    - `F`: right child of C  
      - `J`: left child of F  
      - `K`: right child of F  

---

## 6. Traversal Outputs

For this tree, traversals produce:

- **Preorder**  (Root, Left, Right): `A B D G H E I C F J K`
- **Inorder**   (Left, Root, Right):  `G D H B E I A C J F K`
- **Postorder** (Left, Right, Root):  `G H D I E B J K F C A`

---

## 7. Display Function

The `display()` function outputs the tree sideways, with the right subtree at the top and left at the bottom, using indentation for levels.

---

## 8. Summary

- The provided code builds the tree correctly from the traversals.
- Tree structure and traversals match the input and output requirements.
- The stepwise approach ensures every subtree is constructed at the right place according to traversal rules.

---