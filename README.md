🌳 Binary Trees in C
This project focuses on implementing and working with Binary Trees using the C programming language. Binary Trees are foundational structures in computer science and are widely used for organizing hierarchical data, efficient searching, sorting, and more.

What is a Binary Tree?
A Binary Tree is a data structure where each node has at most two children: a left child and a right child.

Structure of a Binary Tree Node in C:

typedef struct binary_tree_s { int n; struct binary_tree_s *left; struct binary_tree_s *right; } binary_tree_t;

Each node contains:

An integer value n

A pointer to the left child

A pointer to the right child

Binary Tree vs Binary Search Tree (BST)
Feature	Binary Tree	Binary Search Tree (BST)
Definition	Hierarchical structure with 2 child max	A special binary tree with sorted values
Ordering Rule	No ordering rule	Left subtree < Node < Right subtree
Duplicates	May or may not allow duplicates	Usually not allowed (depends on implementation)
Use Cases	Hierarchies, expression trees, graphics	Fast lookup, insertion, and deletion
Search Time (Average)	O(n)	O(log n) (if balanced)
Examples	File system, expression parsing	Maps, sets, databases, in-memory search
Common Operations
Create Node – Allocate and initialize a new node

Insert Left/Right – Attach child nodes to a parent

In-order Traversal – Visit left → node → right

Pre-order / Post-order Traversals

Search (BST only) – Quickly find if a value exists

Delete Tree – Recursively free all nodes

Sample Code
binary_tree_t *root = create_node(10); root->left = create_node(5); root->right = create_node(20);

inorder_traversal(root); // Output: 5 10 20 free_tree(root);

Project Structure
holbertonschool-binary_trees/ ├── binary_tree.h - Header file with type definitions ├── binary_tree.c - Tree operation implementations ├── main.c - Test and example usage └── README.md - Project documentation

How to Compile
Use gcc to compile your source files:

gcc -Wall -Werror -Wextra -pedantic *.c -o binary_tree ./binary_tree

Notes
This project is written in C for educational purposes.

For real-world applications, balanced BSTs like AVL Trees or Red-Black Trees are preferred.

Memory management is important—don’t forget to free your tree to avoid memory leaks.

Recommended Learning
GeeksforGeeks - Binary Trees: https://www.geeksforgeeks.org/binary-tree-data-structure/

Visualgo - BST Visualization: https://visualgo.net/en/bst

Data structures courses (CS50, MIT OpenCourseWare, etc.)

Authors
Arnaud TILAWAT - Clément GIBOTS - Holberton School Project
