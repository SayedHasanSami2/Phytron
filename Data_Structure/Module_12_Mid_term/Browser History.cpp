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

void browserHistory(Node *head, int q) {
    Node *present = head;
    cin.ignore();

    while (q--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        string command;
        ss >> command;

        if (command == "visit") {
            string address;
            ss >> address;
            Node *temp = head;
            bool found = false;
            while (temp != NULL) {
                if (temp->val == address) {
                    present = temp;
                    cout << present->val << endl;
                    found = true;
                    break;
                }
                temp = temp->next;
            }
            if (!found) {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next") {
            if (present->next != NULL) {
                present = present->next;
                cout << present->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev") {
            if (present->prev != NULL) {
                present = present->prev;
                cout << present->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    string val;
    while (cin >> val && val != "end") {
        insert_at_tail(head, tail, val);
    }

    int q;
    cin >> q;
    browserHistory(head, q);

    return 0;
}
