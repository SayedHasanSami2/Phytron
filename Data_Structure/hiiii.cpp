#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Hello, World!" << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

// Example usage
int main() {
    Node *head = NULL;
    Node *tail = NULL;

    string val;
    while (cin >> val ) {
        insert_at_tail(head, tail, val);
    }

    // Add further logic as needed
    
    return 0;
}