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

int mxDepth(Node *root)
{
    if (root == NULL)
        return 0;
    return max(mxDepth(root->left), mxDepth(root->right)) + 1;
}

int main()
{
    int cnt = 0;
    int r;
    cin >> r;
    Node *root;
    queue<Node *> q;

    if (r == -1)
        root = NULL;
    else
    {
        cnt++;
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
        {
            cnt++;
            f->left = new Node(x);
        }
        if (y != -1)
        {
            cnt++;
            f->right = new Node(y);
        }

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    int ans = pow(2, mxDepth(root)) - 1;
    if (ans == cnt)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}