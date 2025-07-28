#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Stack
{
    Node *head = NULL;

public:
    void push(int v)
    {
        Node *n = new Node(v);
        n->next = head;
        head = n;
    }
    void pop()
    {
        Node *d = head;
        head = head->next;
        delete d;
    }
    int top()
    {
        return head->val;
    }
    bool empty()
    {
        return head == NULL;
    }
};

class Queue
{
    Node *head = NULL, *tail = NULL;

public:
    void push(int v)
    {
        Node *n = new Node(v);
        if (!tail)
            head = tail = n;
        else
            tail = tail->next = n;
    }
    void pop()
    {
        Node *d = head;
        head = head->next;
        if (!head)
            tail = NULL;
        delete d;
    }
    int front()
    {
        return head->val;
    }
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    int n, m, x;
    cin >> n >> m;

    Stack st;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.push(x);
    }

    Queue q;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        q.push(x);
    }

    if (n != m)
    {
        cout << "NO";
        return 0;
    }

    int flag = true;
    while (!st.empty() && !q.empty())
    {
        if (st.top() == q.front())
        {

            st.pop();
            q.pop();
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
