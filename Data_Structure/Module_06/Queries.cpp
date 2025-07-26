#include <bits/stdc++.h>
using namespace std;

int sz = 0;

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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
    if (tail == NULL)
        tail = new_node;
    sz++;
}

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
    sz++;
}

void delete_at_index(Node *&head, Node *&tail, int index)
{
    if (index < 0 || index >= sz || head == NULL)
        return;

    sz--;

    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        if (head == NULL)
            tail = NULL;
        return;
    }

    Node *prev = head;
    for (int i = 0; i < index - 1; i++)
    {
        prev = prev->next;
    }

    Node *DELET = prev->next;
    prev->next = DELET->next;

    if (DELET == tail)
    {
        tail = prev;
    }

    delete DELET;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;

    while (t--)
    {
        int m, n;
        cin >> m >> n;

        if (m == 0)
        {
            insert_at_head(head, tail, n);
        }
        else if (m == 1)
        {
            insert_at_tail(head, tail, n);
        }
        else if (m == 2)
        {
            delete_at_index(head, tail, n);
        }

        print_linked_list(head);
    }

    return 0;
}
