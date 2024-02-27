# Tree using Array

![image](https://github.com/smitesht/datastructures/assets/52151346/9d5e6499-3cbe-4fcb-9d90-4ef0a776c8b2)

- array is used to store elements of tree
- Root stored at the first location
- Left child is stored at **2N+1** position
- Right child is stored at **2N + 2** position
- If any node does not have a left or right child then it stored NULL or -1 at that index
- Total elements **2<sup>h</sup> - 1** where h is the height

```c++
#include <iostream>
#include <vector>

using namespace std;

class TreeArray
{
private:
    vector<int> tree;

public:
    TreeArray(int size, int root);
    void insertLeftElement(int data, int leftOfIndex);
    void insertRightElement(int data, int rightOfIndex);
};

// Create root element
TreeArray::TreeArray(int size, int root)
{
    tree = vector<int>(size, -1);
    tree[0] = root;
    
}

// insert left node
// -1 for NULL
// Left Node available at 2N + 1 where N is the index
void TreeArray::insertLeftElement(int data, int leftOfIndex)
{
    if (tree[leftOfIndex] < 0)
    {
        cout << "Left Of Index is NULL" << endl;
    }
    else
        tree[(2 * leftOfIndex + 1)] = data;
}

// insert right node
// -1 for NULL
// Right Node available at 2N + 2 where N is the index
void TreeArray::insertRightElement(int data, int rightOfIndex)
{
    if (tree[rightOfIndex] < 0)
    {
        cout << "Left Of Index is NULL" << endl;
    }
    else
        tree[(2 * rightOfIndex + 2)] = data;
}


int main()
{
    TreeArray tree(10,1);
    tree.insertLeftElement(2, 0);
    tree.insertRightElement(3, 0);

    tree.insertLeftElement(4, 1);
    

    tree.insertLeftElement(6, 2);
    tree.insertRightElement(7, 2);

    return 0;   
}
```
