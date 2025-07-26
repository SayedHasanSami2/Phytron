#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
}

void rmv_dup(Node *head)
{
    Node *cur = head;

    while (cur != NULL)
    {
        Node *temp = cur;

        while (temp->next != NULL)
        {
            if (temp->next->data == cur->data)
            {
                Node *duplicate = temp->next;
                temp->next = temp->next->next;
                delete duplicate;
            }
            else
            {
                temp = temp->next;
            }
        }
        cur = cur->next;
    }
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next != NULL)
            cout << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    rmv_dup(head);
    print_linked_list(head);

    return 0;
}
