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
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void insert_at_head(Node *&head, int val) 
{

   
    Node *new_node = new Node(val);

    
    new_node->next = head;



    head = new_node;
    sz++;
}

void insert_at_tail(Node *&head, Node *&tail, int val) 
{

    
    Node *new_node = new Node(val);
    sz++;

    

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    
    tail->next = new_node;

   

    tail = new_node;
}

int size_of_list(Node *head)
{

    Node *temp = head;

    int count = 0;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
        count++;
    }
    return count;
}

void insert_at_any_position(Node *&head, int pos, int val)
{

    Node *new_node = new Node(val);
    sz++;

    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert_at_tail(head, tail, x);
    }

    insert_at_head(head, 100);
    cout << size_of_list(head) << endl;
    print_linked_list(head);
}