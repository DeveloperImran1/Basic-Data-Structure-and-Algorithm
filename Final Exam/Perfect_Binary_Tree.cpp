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

void is_perfect_tree(Node *root)
{
    vector<int> v;
    if (root == NULL)
    {
        cout << "NO" << endl;
        return;
    }

    queue<pair<Node *, int>> q;
    q.push({root, 1});

    int perfect = 1;

    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        Node *node = p.first;
        int level = p.second;

        q.pop();

        // node ke nia kaj korbo
        if ((node->left && node->right == NULL) || (node->left == NULL && node->right))
        {
            perfect = 0;
            cout << "NO" << endl;
            return;
        }
        // push in queue
        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }

    cout << "YES" << endl;
};

int main()
{
    Node *root = create_binary_tree();
    is_perfect_tree(root);

    return 0;
}