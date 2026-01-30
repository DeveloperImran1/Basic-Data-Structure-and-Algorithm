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

void print_same_level_node(Node *root, int target_level)
{
    vector<int> v;
    if (root == NULL)
    {
        cout << "Invalid";
        return;
    }

    queue<pair<Node *, int>> q;
    q.push({root, 0});

    int last_level = 0;
    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        Node *node = p.first;
        int level = p.second;

        q.pop();

        // node ke nia kaj korbo
        if (level == target_level)
        {
            v.push_back(node->val);
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
        last_level = level;
    }

    if (target_level > last_level)
    {
        cout << "Invalid";
    }
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
};

int main()
{
    Node *root = create_binary_tree();
    int level;
    cin >> level;
    print_same_level_node(root, level);

    return 0;
}