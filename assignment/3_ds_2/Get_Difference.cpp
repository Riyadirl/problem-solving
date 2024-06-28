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

void insert_tail(node *&head, node *&tail, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void minMax(node *head)
{
    int mx = INT_MIN;
    int mn = INT_MAX;
    node *temp = head;

    while (temp != NULL)
    {
        if (temp->val < mn)
        {
            mn = temp->val;
        }
        if (temp->val > mx)
        {
            mx = temp->val;
        }
        temp = temp->next;
    }
    cout << mx - mn << endl;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    minMax(head);
    return 0;
}