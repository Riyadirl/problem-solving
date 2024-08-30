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

int s = 0;
void sum(Node *root)
{
    if (!root)
        return;
    if (root->left || root->right)
        s += root->val;

    sum(root->left);
    sum(root->right);
}

int main()
{
    int r;
    cin >> r;
    Node *root;
    queue<Node *> q;
    if (r == -1)
        root = NULL;
    else
    {
        root = new Node(r);
        q.push(root);
    }

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int x, y;
        cin >> x >> y;
        if (x != -1)
            f->left = new Node(x);
        if (y != -1)
            f->right = new Node(y);

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    sum(root);
    cout << s << endl;
    return 0;
}