#include <iostream>
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

void insert_at_head(node *&head, int val)
{
    node *newNode = new node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(node *&head, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void delete_any_position(node *&head, int pos)
{
    if (head == NULL || pos < 0)
    {
        return;
    }

    if (pos == 0)
    {
        node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    node *tmp = head;
    for (int i = 1; i < pos && tmp->next != NULL; i++)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL || tmp->next == NULL)
    {
        return;
    }

    node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void print_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void delete_list(node *&head)
{
    while (head != NULL)
    {
        node *tmp = head;
        head = head->next;
        delete tmp;
    }
}

int main()
{
    int q;
    cin >> q;
    node *head = NULL;

    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, v);
        }
        else if (x == 2)
        {
            delete_any_position(head, v);
        }
        print_list(head);
    }

    delete_list(head);
    return 0;
}