
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

void find(node *head, int x)
{
    int flag = 0;
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == x)
        {
            cout << flag << endl;
            return;
        }
        temp = temp->next;
        flag++;
    }
    cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
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
        
        int x;
        cin >> x;
        find(head, x);
    }
    return 0;
}
