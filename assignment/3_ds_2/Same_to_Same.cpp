#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(node *&head, node *&tail, int v)
{
    node *newNode = new node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

bool same(node *head1, node *head2)
{
    node *tmp1 = head1, *tmp2 = head2;

    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val != tmp2->val)
            return false;
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return tmp1 == NULL && tmp2 == NULL;
}

int main()
{
    node *head1 = NULL, *tail1 = NULL;
    node *head2 = NULL, *tail2 = NULL;
    int v;

    while (cin >> v && v != -1)
    {
        insert_at_tail(head1, tail1, v);
    }
    cin.clear();

    while (cin >> v && v != -1)
    {
        insert_at_tail(head2, tail2, v);
    }

    cout << (same(head1, head2) ? "YES" : "NO") << endl;

        return 0;
}