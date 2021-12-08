Product Requirements Description
By: Anahit Doshoyan & Elizabeth Vickery
1. Introduction
 
1.1  Document Identifier
 
This is a product requirement document. It summarizes and includes the product requirements description (PRD) in regards to our Data Structures and Algorithms project. This document also encompasses the scope of our product, a glossary including terms and acronyms included in the PRD, functional, platform, implementation, performance, verification, and documentation requirements. It also introduces the means of product and project management, the dependencies, assumptions, and risks associated with the implementation, the effort estimations and schedule of deliverables, and acceptance criteria.
 
1.2  Scope
 
 
 
1.3  Definitions of Terms and Acronyms
Glossary
Binary Search Tree – A binary search tree is a rooted binary tree data structure with internal nodes, of which each stores a key or element greater than all of the keys in the node’s left subtree and less than those in the node’s right subtree. The left and right subtrees of a binary search tree must also be binary search trees.
 
Child – a node protruding from a parent node (or the node above it)
 
Parent – a node from which other nodes emerge to create a new subtree
 
Brother – nodes on the same level emerging from the same parent node are brother nodes

Key/Element – the data stored or kept in any of the nodes of the binary tree
 
Self-balancing – A self-balancing binary search tree means that when we add new data or values to our initial set the binary tree will sort and balance itself out. We will not have to manually carry out new iterations or implementations in order for the tree to be balanced. It will be automated.
 
Node – A node is a basic unit of a data structure, such as a linked list or tree data structure. Nodes contain data and also may link to other nodes. A node represents the information contained in a single data structure.
 
Root node – the topmost node in a binary search tree
 
Height – the longest path from the root node to a leaf node

Leaf – a node with two empty subtrees or child nodes
 
Hash table – a data structure that can map a key to a value
 
Treap – a hybrid between trees and heaps
 
Heap – a tree-based data structure in which the tree is a complete binary tree
 
Stack – a linear data structure that follows a particular order in which the operations are performed

Morse code – Morse code is a method used in telecommunication to encode text characters as standardized sequences of two different signal durations, called dots and dashes, or dits and dahs. 

Degree – the number of children a node has
 
 
Operating System
     	The project is being implemented on macOS using Terminal and GitHub.
 
 
1.4  References

1.https://en.wikipedia.org/wiki/Node_(computer_science) 
2. https://en.wikipedia.org/wiki/Morse_code

 
1.5 Overview
     	The project being implemented is a balanced binary search tree. A binary tree is a tree data structure. Each of its nodes has a maximum of two “children”, also referred to as the left and right children. Each “child” is another node. A self-balancing search tree automatically tries to keep its height, the number of levels of nodes underneath the root, minimal by performing transformations at relevant times.
    	These binary trees can be used for constructing and maintaining ordered lists, associative arrays, and key-value pairs. They can be altered to record additional data and perform other operations, which can help optimize database queries and different algorithms.
	Using a self-balancing binary search tree, we are going to sort Morse code.
 
2. Requirements
 
2.1 Functional Requirements
The tree should be self-balancing
It should be able to be supported on all platforms that support C or C++
 
 


2.2 Platform Requirements
Any platform or medium that supports C or C++ should be able to support our project/product.

 
