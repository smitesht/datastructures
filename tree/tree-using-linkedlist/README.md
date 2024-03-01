# Binary Tree using Linked List

## Create nodes of binary tree

![image](https://github.com/smitesht/datastructures/assets/52151346/1d4f1718-d858-4a12-82bb-a186b63fbe6c)


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
