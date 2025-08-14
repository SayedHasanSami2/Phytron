#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* new_node = new Node(val);

    if (head == NULL) {
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
}

int present_OrNot(Node* head, int x) {
    int index = 0;
    while (head != NULL) {
        if (head->data == x) {
            return index;
        }
        head = head->next;
        index++;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        Node* head = NULL;
        Node* tail = NULL;

        string line;
        getline(cin, line);
        stringstream ss(line);

        int val;
        while (ss >> val && val != -1) {
            insert_at_tail(head, tail, val);
        }

        int x;
        cin >> x;
        cin.ignore();

        int result = present_OrNot(head, x);
        cout << result << endl;


    }

    return 0;
}
