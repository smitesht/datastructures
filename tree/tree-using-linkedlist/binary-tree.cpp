#include <iostream>
#include <stack>
#include <queue>

using namespace std;

// Binary Tree node
struct Node
{
    int data;
    Node* pLeft;
    Node* pRight;

    Node() :data(0), pLeft(nullptr), pRight(nullptr) {}
    Node(int num) :data(num), pLeft(nullptr), pRight(nullptr) {}

};


class BinaryTree
{
private:
    Node* m_pRoot; // root node

public:
    BinaryTree(int rootData);  // Constructor
    void insertData(int data); // Level order insertion
    void levelOrderTraverse(); // Level order traversal
    Node* getRoot(); // get root node
    void inorderTraverseRecursion(Node* pNode);
    void inorderTraverseNonRecursion(Node* pNode);
    void preorderTraverseRecursion(Node* pNode);
    void preorderTraverseNonRecursion(Node* pNode);
};

BinaryTree::BinaryTree(int rootData)
{
    if (m_pRoot == nullptr)
    {
        m_pRoot = new Node(rootData);
    }
}

Node* BinaryTree::getRoot()
{
    return m_pRoot;
}

void BinaryTree::insertData(int data)
{
    if (m_pRoot == nullptr)
    {
        m_pRoot = new Node(data);
        return;
    }

    queue<Node*> treeQ;
    treeQ.push(m_pRoot);

    while (!treeQ.empty())
    {
        Node* pTemp = treeQ.front();
        treeQ.pop();

        if (pTemp->pLeft == nullptr)
        {
            pTemp->pLeft = new Node(data);
            return;
        }
        else
        {
            treeQ.push(pTemp->pLeft);
        }
        if (pTemp->pRight == nullptr)
        {
            pTemp->pRight = new Node(data);
            return;
        }
        else
        {
            treeQ.push(pTemp->pRight);
        }
    }
}

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

// InOrder Traversal Recursive => Left - Data - Right
void BinaryTree::inorderTraverseRecursion(Node* pNode)
{
    if (pNode == nullptr)
        return;

    inorderTraverseRecursion(pNode->pLeft);
    cout << pNode->data<< " ";
    inorderTraverseRecursion(pNode->pRight);    
}

// InOrder Traversal Non-Recursive => Lef - Data - Right
void BinaryTree::inorderTraverseNonRecursion(Node* pNode)
{
    if (pNode == nullptr)
        return;

    stack<Node*> treeStack;
    treeStack.push(pNode);

    while (!treeStack.empty())
    {
        while (pNode->pLeft)
        { 
            pNode = pNode->pLeft;
            treeStack.push(pNode);
        }
        Node* pTemp = treeStack.top();
        treeStack.pop();
        cout << pTemp->data<<" ";
        if (pTemp->pRight)
        {
            pNode = pTemp->pRight;
            treeStack.push(pNode);
        }         
    }   
}

// PreOrder Traversal => Data - Left - Right
void BinaryTree::preorderTraverseRecursion(Node* pNode)
{
    if (pNode == nullptr)
        return;
    
    cout << pNode->data << " ";
    preorderTraverseRecursion(pNode->pLeft);
    preorderTraverseRecursion(pNode->pRight);
}

void BinaryTree::preorderTraverseNonRecursion(Node* pNode)
{
    if (pNode == nullptr)
        return;

    stack<Node*> treeStack;
    treeStack.push(pNode);

    while (!treeStack.empty())
    {
        while (pNode)
        {
            cout << pNode->data << " ";
            pNode = pNode->pLeft;
            if(pNode != nullptr)
                treeStack.push(pNode);
        }

        Node* pTemp = treeStack.top();
        treeStack.pop();

        if (pTemp->pRight)
        {
            pNode = pTemp->pRight;
            treeStack.push(pNode);
        }
    }

}


int main()
{
    BinaryTree t(20);
    t.insertData(10);
    t.insertData(11);
    t.insertData(12);
    t.insertData(13);
    t.insertData(14);
    t.insertData(15);

    t.levelOrderTraverse();
    cout << endl;
    t.inorderTraverseRecursion(t.getRoot());
    cout << endl;
    t.inorderTraverseNonRecursion(t.getRoot());
    cout << endl;
    t.preorderTraverseRecursion(t.getRoot());
    cout << endl;
    t.preorderTraverseNonRecursion(t.getRoot());
    return 0;
}