# Tree

A tree is a non-linear data structure of a collection of nodes and edges where each node points to several other nodes, and nodes represent the hierarchical structure.

![image](https://github.com/smitesht/datastructures/assets/52151346/7634c1e4-c7e1-49b9-a96d-491cd47d270d)

## root

A node with no parents called root. For example A is a root node.

## edge

Link from parent to child

## leaf node

A node with no children is called leaf node. For example, K, L, M, N, O, P.

## siblings

Children of same parent are called sibling. For example, D and E.

## path

A sequence of consecutive edges is called a path. For example, a path from the root node A to L is A, B, D, H, L.

## Ancestor Node:

An ancestor of a node is any predecessor node on the path from root to that node.

A node reachable by repeated moving from child to parent. for example, A, B, D, H are ancestor of L.

## Descendent node:

A descendent node is any successor node on an path from the node to a leaf node.

Leaf node do not have descendent.

For example, B, D, H and L are descendent of A.

## Level of node

The level of a node is the number of edges on the path from the root node to that node.

![image](https://github.com/smitesht/datastructures/assets/52151346/7634c1e4-c7e1-49b9-a96d-491cd47d270d)

## Height of Tree and Node

Height of the tree is the length of the path from the root to the deepest node in the tree.

A tree with only one node has a height of zero
