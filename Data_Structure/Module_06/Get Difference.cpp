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

int min(Node *head)
{
    int min = head->data;
    while (head != NULL)
    {
       
        if (head->data < min)
        {
            min = head->data;
        }
         head = head->next;
    }
    return min;
}


int max(Node *head)
{
    int max = head->data;
    while (head != NULL)
    {
        
        if (head->data > max)
        {
            max = head->data;
        }
        head = head->next;
    }
    return max;
}

int main()
{
    Node *head = NULL, *tail = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int diff = (max(head) - min(head));
    cout << diff ;

    return 0;
}
