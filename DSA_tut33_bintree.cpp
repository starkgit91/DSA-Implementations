#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class BinaryTree
{
public:
    Node *root;

    BinaryTree()
    {
        root = NULL;
    }

    void addNode(int data)
    {
        Node *newNode = new Node(data);

        if (root == NULL)
        {
            root = newNode;
        }
        else
        {
            Node *focusNode = root;
            Node *parent;

            while (true)
            {
                parent = focusNode;

                if (data < focusNode->data)
                {
                    focusNode = focusNode->left;
                    if (focusNode == NULL)
                    {
                        parent->left = newNode;
                        return;
                    }
                }
                else
                {
                    focusNode = focusNode->right;
                    if (focusNode == NULL)
                    {
                        parent->right = newNode;
                        return;
                    }
                }
            }
        }
    }

    void preOrderTraversal(Node *focusNode)
    {
        if (focusNode != NULL)
        {
            cout << focusNode->data << " ";
            preOrderTraversal(focusNode->left);
            preOrderTraversal(focusNode->right);
        }

    }
    void inOrderTraversal(Node *focusNode){
        if (focusNode!=NULL)
        {
            inOrderTraversal(focusNode->left);
            cout << focusNode->data << " ";
            inOrderTraversal(focusNode->right);
        }
    
    }
    void postOrderTraversal(Node *focusNode){
        if (focusNode !=NULL)
        {
            postOrderTraversal(focusNode->left);
            postOrderTraversal(focusNode->right);
            cout << focusNode->data << " ";
        }
        
    }
};

int main()
{
    BinaryTree tree;

    tree.addNode(50);
    tree.addNode(25);
    tree.addNode(75);
    tree.addNode(12);
    tree.addNode(37);
    tree.addNode(43);
    tree.addNode(30);
    // Node *root = new Node(1);
    // root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
    cout<<"preorder: ";
    tree.preOrderTraversal(tree.root);
    cout<<"\ninorder: ";
    tree.inOrderTraversal(tree.root);
    cout<<"\npostorder: ";
    tree.postOrderTraversal(tree.root);

    return 0;
}
