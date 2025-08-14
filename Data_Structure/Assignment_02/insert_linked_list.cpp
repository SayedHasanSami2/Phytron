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

bool checking_are_they_same(Node *head1st, Node *head2nd)
{
    if (head1st == NULL && head2nd == NULL)
    {
        return true;
    }

    if (head1st == NULL || head2nd == NULL || head1st->data != head2nd->data)
    {
        return false;
    }

    return checking_are_they_same(head1st->next, head2nd->next);
}

int main()
{
    Node *head1st = NULL, *tail1 = NULL;
    Node *head2nd = NULL, *tail2 = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1st, tail1, val);
    }

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2nd, tail2, val);
    }

    if (checking_are_they_same(head1st, head2nd))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
