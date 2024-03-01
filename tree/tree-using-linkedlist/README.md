# Binary Tree using Linked List

## Create empty nodes of binary tree

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

## Create Binary Tree

Binary Tree class with constructor that accept root element.
Basic methods of Binary Tree Implementation

- Insert node at level traversal
- Level traversal of binary tree
- InOrder traversal using Recursion
- InOrder traversal using Non-Recursion
- PreOrder traversal using Recursion
- PreOrder traversal using Non-Recursion
- PostOrder traversal using Recursion

## Binary Tree Constructor

```c++
BinaryTree::BinaryTree(int rootData)
{
    // if root node empty, create root
    if (m_pRoot == nullptr)
    {
        m_pRoot = new Node(rootData);
    }
}
```

## Insert a node in Binary Tree. Insert at level traversal.

Assume we want to create a binary tree like this

First check if the root node has been created, if not create root and return.
If the root node is created,

1. Insert the node into Queue
2. Create a loop and traverse until Queue becomes empty
   - Get front node from the queue
   - Display that node
   - Check left node exist of the front node
     - if yes, add left node of the front to the Queue
     - if Not,
       - create empty node **Node \*p = new Node(data);**
       - assign data to the empty node **p->data = data**
       - assign left and right to NULL **p->pLeft = NULL, and p->pRight = NULL**
       - assign newly creaed node to the left side **pTemp->pLeft = p**
       - return from the loop **return**
   - Check right node exist of the front node
     - if yes, add right node of the front to the Queue
     - if Not,
       - create empty node **Node \*p = new Node(data);**
       - assign data to the empty node **p->data = data**
       - assign left and right to NULL **p->pLeft = NULL, and p->pRight = NULL**
       - assign newly creaed node to the right side **pTemp->pRight = p**
       - return from the loop **return**

```c++

void BinaryTree::insertData(int data)
{
    // if root is not created, create root
    if (m_pRoot == nullptr)
    {
        m_pRoot = new Node(data);
        return;
    }

    // if the root exist, push to the Queue
    queue<Node*> treeQ;
    treeQ.push(m_pRoot);

    // traverse until empty Queue
    while (!treeQ.empty())
    {
        // pop front node of the Queue
        Node* pTemp = treeQ.front();
        treeQ.pop();

        // if the left side does not exist, create node, assign to left and return
        if (pTemp->pLeft == nullptr)
        {
            pTemp->pLeft = new Node(data);
            return;
        }
        else
        {
            // if the left side exist, push to the Queue
            treeQ.push(pTemp->pLeft);
        }
        // if the right side does not exist, create node, assign to the right side and return
        if (pTemp->pRight == nullptr)
        {
            pTemp->pRight = new Node(data);
            return;
        }
        else
        {
            // if the right side exist, push to the Queue
            treeQ.push(pTemp->pRight);
        }
    }
}

```

## Level order traversal.

### Steps

- If root node does not exist, return
- Push root node to the Queue
- Iterate until Queue empty
  - Pop front node from the Queue
  - Display Data of the popped node
  - If left node exist of the popped node, push to the Queue
  - If right node exist of the popped node, push to the Queue

```c++

void BinaryTree::levelOrderTraverse()
{
    if (m_pRoot == nullptr)
    {
        cout << "Empty Tree" << endl;
        return;
    }

    Node* pTemp = m_pRoot;
    queue<Node*> treeQ;
    treeQ.push(pTemp);
    while (!treeQ.empty())
    {
        Node* p = treeQ.front();
        treeQ.pop();
        cout << p->data << " ";
        if (p->pLeft)
        {
            treeQ.push(p->pLeft);
        }
        if (p->pRight)
        {
            treeQ.push(p->pRight);
        }

    }
}

```
