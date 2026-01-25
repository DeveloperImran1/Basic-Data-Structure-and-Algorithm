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

Node *input_tree()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        // queue er front node ke get korbo
        Node *p = q.front();
        q.pop();

        // parent node nia kaj korbo
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }

        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }

        p->left = myLeft;
        p->right = myRight;

        // queue te parent node er childreen push korbo
        if (p->left)
        {
            q.push(p->left);
        }

        if (p->right)
        {
            q.push(p->right);
        }
    }

    return root;
};

int max_height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    // root er left and right a kono node na thakle root nijei leaf node. Ar 1st er node ba root node er height 0 hoi.
    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }

    // root node er childreen node thakle, sei root node er left site er node gulo count kore l variable a rakhbo. Ar root node er right site er node gulo count kore r variable a rakhbo.
    int l = max_height(root->left);
    int r = max_height(root->right);

    // Jeheto akta bulding er 10 tala akta site thake, ar 20 tala akta site tahke. Tahole amra sei building er maximum floor number 20 takei boli. Temni tree er height get korar somoi maximum tai nita hobe. Ar +1 koresi. karon root node ke count korte hobe.
    return max(l, r) + 1;
};

int main()
{

    Node *root = input_tree();
    int height = max_height(root);
    cout << height;
    return 0;
}