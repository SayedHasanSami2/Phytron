#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int get_size(Node *head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}

void insert_value(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(to_string(val));
    if (pos == 0)
    {
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next; //   5 <->6       1 <-> 2
                               //           <-9->
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != NULL)
        {
            temp->next->prev = newNode;
        }
        else
        {
            tail = newNode;
        }
        temp->next = newNode;
    }
}

void print_fromLEFT(Node *head)
{
    cout << "L -> ";
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void print_fromRight(Node *tail)
{
    cout << "R -> ";
    while (tail)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}

void queriesAgain(Node *&head, Node *&tail, int q)
{
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        int size = get_size(head);
        if (x < 0 || x > size)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_value(head, tail, x, v);
            print_fromLEFT(head);
            print_fromRight(tail);
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    queriesAgain(head, tail, q);

    return 0;
}
