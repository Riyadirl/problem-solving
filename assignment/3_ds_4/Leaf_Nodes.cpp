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

vector<int> v;
void LeafNode(Node *root)
{

    if (!root)
        return;
    if (!root->left && !root->right)
        v.push_back(root->val);
    LeafNode(root->left);
    LeafNode(root->right);
}

int main()
{

    int t;
    cin >> t;
    Node *root;
    queue<Node *> q;
    if (t == -1)
        root = NULL;
    else
    {
        root = new Node(t);
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
    
    LeafNode(root);

    sort(v.rbegin(), v.rend());
    for (int x : v)
        cout << x << ' ';

    return 0;
}