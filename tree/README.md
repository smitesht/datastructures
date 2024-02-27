# Tree

A tree is a non-linear data structure of a collection of nodes and edges where each node points to several other nodes, and nodes represent the hierarchical structure.

![image](https://github.com/smitesht/datastructures/assets/52151346/7634c1e4-c7e1-49b9-a96d-491cd47d270d)

## root

A node with no parents is called a root. For example, A is a root node.

## edge

Link from parent to child

## leaf node

A node with no children is called a leaf node. For example, K, L, M, N, O, P.

## siblings

Children of the same parent are called siblings. For example, D and E.

## path

A sequence of consecutive edges is called a path. For example, a path from the root node A to L is A, B, D, H, L.

## Ancestor Node:

An ancestor of a node is any predecessor node on the path from the root to that node.

A node is reachable by repeated moving from child to parent. for example, A, B, D, and H are ancestors of L.

## Descendent node:

A descendent node is any successor node on a path from the node to a leaf node.

Leaf nodes do not have descendants.

For example, B, D, H, and L are descendants of A.

## Level of node

The level of a node is the number of edges on the path from the root node to that node.

![image](https://github.com/smitesht/datastructures/assets/52151346/7634c1e4-c7e1-49b9-a96d-491cd47d270d)

## Height of Tree and Node

The height of the tree is the length of the path from the root to the deepest node in the tree.

A tree with only one node has a height of zero

![image](https://github.com/smitesht/datastructures/assets/52151346/14663dc6-3ce0-4ab7-b131-4f24f37fef45)

The height of the node is the length of the oath from that node to the deepest node.

