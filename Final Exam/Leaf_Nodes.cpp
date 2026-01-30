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

Node *create_binary_tree()
{
    int v;
    cin >> v;

    Node *root;

    if (v == -1)
    {
        return root = NULL;
    }
    root = new Node(v);

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        // node create with get input
        int l, r;
        cin >> l >> r;

        Node *left, *right;
        if (l == -1)
        {
            left = NULL;
        }
        else
        {
            left = new Node(l);
        }

        if (r == -1)
        {
            right = NULL;
        }
        else
        {
            right = new Node(r);
        }

        // linkup with parent
        p->left = left;
        p->right = right;

        // queue te push
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
}

vector<int> get_leaf_node(Node *root)
{
    vector<int> v;
    if (root == NULL)
    {
        return v;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        if (p->left == NULL && p->right == NULL)
        {
            v.push_back(p->val);
        }

        // push in queue
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return v;
};

int main()
{
    Node *root = create_binary_tree();
    if (root == NULL)
    {
        return 0;
    }
    vector<int> leaf = get_leaf_node(root);

    sort(leaf.begin(), leaf.end(), greater<int>());

    for (int i = 0; i < leaf.size(); i++)
    {
        cout << leaf[i] << " ";
    }

    return 0;
}