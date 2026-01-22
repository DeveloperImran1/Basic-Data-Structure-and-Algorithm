#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    // postorder a 1st a left, right then root node nia kaj korte hoi.
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
};

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    // root er sathe left, right er connection
    root->left = a;
    root->right = b;

    // a er sathe left er connection, right node nai.
    a->left = c;

    // b er sathe left, right er connection
    b->left = d;
    b->right = e;

    postorder(root);
    return 0;
}