# 🌳 Binary Trees in C

This project focuses on implementing and working with **Binary Trees** using the C programming language. Binary Trees are a fundamental data structure in computer science and appear in many practical applications, such as parsing expressions, organizing hierarchical data, and building search structures.

---

## 📘 What is a Binary Tree?

A **Binary Tree** is a hierarchical data structure in which each node has **at most two children**, referred to as the left and right child.

### Structure in C

```c
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;
```

Each node contains:

An integer value n

A pointer to the left child

A pointer to the right child

#### 🧭 What is a Binary Search Tree (BST)?

A Binary Search Tree (BST) is a special type of binary tree where:

All nodes in the left subtree contain values less than the parent node.

All nodes in the right subtree contain values greater than the parent node.

This rule applies recursively to every node in the tree.

This structure makes searching, inserting, and deleting elements efficient — ideally O(log n) time for balanced trees.

#### 🔧 Basic Binary Tree Operations in C

Create Node – Allocate and initialize a new node

Insert Left/Right – Attach a node to a parent

Tree Traversals:

In-order (Left → Node → Right)

Pre-order (Node → Left → Right)

Post-order (Left → Right → Node)

Delete Tree – Free all nodes in memory

#### 🧪 Sample Code

```
binary_tree_t *root = create_node(10);
root->left = create_node(5);
root->right = create_node(15);

inorder_traversal(root);  // Output: 5 10 15

free_tree(root);
```

#### 📁 Project Structure

holbertonschool-binary_trees/
├── binary_tree.h        // Header file
├── binary_tree.c        // Implementation of tree functions
├── main.c               // Test and usage
└── README.md            // Project documentation

#### ▶️ How to Compile

Use gcc to compile:

gcc -Wall -Wextra -Werror -pedantic *.c -o binary_tree
./binary_tree

#### 🧠 Learn More

GeeksforGeeks: https://www.geeksforgeeks.org/binary-tree-data-structure/

Visualgo (interactive animations): https://visualgo.net/en/bst

CS50 & MIT OpenCourseWare (Data Structures)

#### ✍️ Authors

Arnaud TILAWAT - Clément GIBOT – Holberton School
