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

void remove_duplicates(node *&head)
{
    node *current = head;
    while (current != NULL && current->next != NULL)
    {
        node *temp = current;
        while (temp->next != NULL)
        {
            if (temp->next->val == current->val)
            {
                node *duplicate = temp->next;
                temp->next = temp->next->next;
                delete duplicate;
            }
            else
            {
                temp = temp->next;
            }
        }
        current = current->next;
    }
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
    node *head = NULL;
    int value;

    while (cin >> value && value != -1)
    {
        insert_at_tail(head, value);
    }

    remove_duplicates(head);
    print_list(head);
    delete_list(head);

    return 0;
}