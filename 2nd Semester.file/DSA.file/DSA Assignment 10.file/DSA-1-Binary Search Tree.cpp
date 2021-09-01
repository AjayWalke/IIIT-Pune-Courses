/*
Implement binary search tree as an ADT. 
Perform following operations: a) Insert, b) Delete, c)
Depth of the tree, d) Search a node, 
e) Find its mirror image f) Print original g) Mirror image
level wise.
*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
};

Node *newNode(int key1)
{
    Node *node = new Node;
    node->key = key1;
    node->left = node->right = nullptr;
    return node;
}

// printing BT
void inorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}

// minimum value of nodes
Node *minValueNode(struct Node *node)
{
    Node *current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

// inserting keys to BT
Node *insert(Node *root, int key1)
{
    if (root == nullptr)
    {
        return newNode(key1);
    }

    if (key1 < root->key)
    {
        root->left = insert(root->left, key1);
    }

    else
    {
        root->right = insert(root->right, key1);
    }
    return root;
}

// Deleting key from BT
Node *Delete(Node *root, int key1)
{
    if (root == NULL)
        return root;

    if (key1 < root->key)
        root->left = Delete(root->left, key1);

    else if (key1 > root->key)
        root->right = Delete(root->right, key1);

    else
    {
        if (root->left == NULL and root->right == NULL)
        {
            return NULL;
        }

        else if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }
        struct Node *temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = Delete(root->right, temp->key);
    }
    return root;
}

// Finding the depth of BT
int maxDepth(Node *node)
{
    if (node == NULL)
        return 0;
    else
    {
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}

// Searching element
void Search(Node *root, int data)
{
    int depth = 0;
    Node *temp = new Node;
    temp = root;
    while (temp != NULL)
    {
        depth++;
        if (temp->key == data)
        {
            cout << "\nKey found at depth: " << depth << "\n";
            return;
        }
        else if (temp->key > data)
            temp = temp->left;
        else
            temp = temp->right;
    }
    cout << "\n Key not found\n";
    return;
}

//finding mirror image
void mirror(struct Node *node)
{
    if (node == NULL)
        return;
    else
    {
        struct Node *temp;

        mirror(node->left);
        mirror(node->right);

        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}

// printing node levelwise
void printLevel(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);

    while (q.empty() == false)
    {
        int nodeCount = q.size();

        while (nodeCount > 0)
        {
            Node *node = q.front();
            cout << node->key << " ";
            q.pop();
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
            nodeCount--;
        }
        cout << endl;
    }
}

int main()
{
    Node *root = nullptr;
    do
    {
        int ans;
        cout << "\n\n---------------------------------------\n"
             << "1 -> Insert\n2 -> Delete\n3 -> depth of tree\n"
             << "4 -> serach node\n5 -> mirror image inorder & levelwise"
             << "\n6 -> print\n7 -> exit\n";
        cin >> ans;
        cout << "----------------------------------------\n";
        if (ans == 1)
        {
            cout << "\n **** Insert ****\n";
            int elm;
            cout << "Number of elements : ";
            cin >> elm;
            int keys[elm];
            cout << "Enter elements : \n";
            for (int i = 0; i < elm; i++)
            {
                cin >> keys[i];
                root = insert(root, keys[i]);
            }
            cout << "BT in in-order : \n";
            inorder(root);
        }
        if (ans == 2)
        {
            int gg;
            cout << "\n **** Delete ****\n"
                 << "Enter the key to delete : ";
            cin >> gg;
            root = Delete(root, gg);
            cout << "BT in in-order : \n";
            inorder(root);
        }
        if (ans == 3)
        {
            cout << "\n **** Depth of BT ****\n";
            cout << "Depth : " << maxDepth(root) << "\n";
        }
        if (ans == 4)
        {
            int jkl;
            cout << "\n **** Search node of BT ****\n"
                 << "Enter the key to search : ";
            cin >> jkl;
            Search(root, jkl);
        }
        if (ans == 5)
        {
            cout << "\n**** mirror image inorder & levelwise ****\n";
            cout << "Mirror image : \n";
            mirror(root);
            inorder(root);
            cout << "\nLevel-wise mirror : \n";
            printLevel(root);
        }
        if (ans == 6)
        {
            cout << "\n **** Print BT ****\n";
            inorder(root);
        }
        if (ans == 7)
        {
            exit(0);
        }
    } while (true);
    return 0;
}
