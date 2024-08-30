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

void leftSide(Node *root)
{
    if (root->left)
    {
        leftSide(root->left);
        cout << root->left->val << ' ';
    }
    else if (root->right)
    {
        leftSide(root->right);
        cout << root->right->val << ' ';
    }
}

void rightSide(Node *root)
{
    if (root->right)
    {
        cout << root->right->val << ' ';
        rightSide(root->right);
    }
    else if (root->left)
    {
        cout << root->left->val << ' ';
        rightSide(root->left);
    }
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

    if (root->left && !root->right)
    {
        leftSide(root);
        cout << root->val;
    }
    else if (!root->left && root->right)
    {
        cout << root->val << ' ';
        rightSide(root);
    }
    else
    {
        leftSide(root);
        cout << root->val << ' ';
        rightSide(root);
    }
    cout << endl;
    return 0;
}