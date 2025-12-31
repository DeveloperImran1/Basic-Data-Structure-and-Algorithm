#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(10); // head name a akta pointer create hobe, jar type hobe Node. Ai head pointer er moddhe dynamic class create kore address ta set kortesi. Aita 1st element tai head name diasi.
    Node *a = new Node(20);    // a namer arekta pointer create kortesi,  jar moddhe arekta node er address rakhtesi.
    Node *b = new Node(30);

    // a.next = &b;  // static object a a, b aigulo static object silo. Tar a.next er moddhe address set korar jonno b ke dereference kore set korte hoto &b;
    head->next = a; // Aikhane head pointer er moddhe address ase. Tai 1st a head pointer ke dereference korte hobe, tarpor next property ke access kortesi and a node er address set kortesi. aikhane a akta pointer. Jar moddhe a er address ase. Tai a ke dereference korte hobena.
    a->next = b;

    cout << head->next->val << endl; // Output: 20; a er value print hobe.

    return 0;
}