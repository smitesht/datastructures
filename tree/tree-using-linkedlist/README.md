# Binary Tree using Linked List

## Create nodes of binary tree

```c++

struct Node
{
    int data;
    Node* pLeft; // left node
    Node* pRight; // right node

    // construct empty node with left=NULL, right=NULL
    Node() :data(0), pLeft(nullptr),pRight(nullptr){}

    // construct node with data, left=NULL, right=NULL
    Node(int num) :data(num), pLeft(nullptr), pRight(nullptr) {}

};

```
