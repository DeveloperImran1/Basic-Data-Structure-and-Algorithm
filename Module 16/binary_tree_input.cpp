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
    // 1st a akta value nita hobe, jeita dia root node create korbo.
    int val;
    cin >> val;
    Node *root;

    // 1st a jodi -1 value ase, tahole root er value NULL set kora dorkar. Koronar case tao handle korlam.
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    // q name a akta queue create kortesei. Jar data type hobe Node type er. Ar data type er pore * symboll use koresi. Karon aikhane node er address thakbe. Tarpor sei root node ke queue er moddhe push kore disi.
    // root NULL hole queue te push korbona. Jarfole niche while loop er condition true hobena.
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    // jototkkhon queue empty hossena, totokkhon loop ta choltei thakbe.
    while (!q.empty())
    {
        // queue theke front a jei node ase, take get kore p namer variable a rakhtesi and queue theeke sei node ke pop kortesi.
        Node *p = q.front();
        q.pop();

        // p node ke nia kaj korbo. left and righ node er jonno 2 ta value input nibo. Jodi node null hoi, tahole input a value hisabe -1 asbe.
        int l, r;
        cin >> l >> r;

        // myLeft and myRight name a 2 ta Node type er variable initialize kore rakhtesi. aikhane Node *myLeft = new Node(l); ai rokom kore declare kora jabena age. Karon l, r er value -1 hole NULL set korte hobe. Tai agei declare kora jabena. Korle NULL set kora jabena.
        Node *myLeft, *myRight;

        // Akhon aikhane l and r er value -1 kina check kortesi. Jodi -1 hoi: tahole oi variable er value NULL set kortesi. Ar -1 na hoia kono value thakle oi variable er value hisabe new node declare kortesi oi value dia.
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

        // parent node er left and right property er sathe create kore new node 2 tar connection dissi.
        p->left = myLeft;
        p->right = myRight;

        // New create kora 2 node queue te push korbo, jodi node er left NULL na hoi.
        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }

    return root;
};

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // front node ke get korbo and pop korbo.
        Node *p = q.front();
        q.pop();

        // p node ke nia kaj korbo
        cout << p->val << " ";

        // p node er childreen node gulo ke queue te push korbo.
        // aikhane p->left != NULL   aivabe na likhe direct p->left dilew same kaj korbe. Karon p->left er value jodi NULL hoi tahole condition true hobena and if bloock a dhokbena.
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
};

int main()
{
    Node *root = input_tree();
    level_order(root);
    return 0;
}