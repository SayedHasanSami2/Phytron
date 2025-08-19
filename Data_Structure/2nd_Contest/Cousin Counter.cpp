#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft = (l == -1 ? NULL : new Node(l));
        Node *myRight = (r == -1 ? NULL : new Node(r));

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void cousin_counter(Node *root)
{
    if (!root) return;
    queue<Node *> q;
    q.push(root);
    unordered_map<Node*, Node*> parent; 
    parent[root] = nullptr;

    while (!q.empty())
    {
        int sz = q.size();
        vector<Node*> levelNodes;
        for (int i = 0; i < sz; i++)
        {
            Node* curr = q.front(); q.pop();
            levelNodes.push_back(curr);

            if (curr->left)
            {
                q.push(curr->left);
                parent[curr->left] = curr;
            }
            if (curr->right)
            {
                q.push(curr->right);
                parent[curr->right] = curr;
            }
        }

        // Count cousins correctly using parent map
        for (Node* node : levelNodes)
        {
            int siblings = 0;
            for (Node* other : levelNodes)
            {
                if (other == node) continue;
                if (parent[other] == parent[node])
                    siblings++;
            }

            node->val = sz - 1 - siblings;
        }
    }
}


void print_level_order(Node *root)
{
    if (!root)
        return;

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->val << " ";

        if (curr->left)
            q.push(curr->left);
        if (curr->right)
            q.push(curr->right);
    }
    cout << endl;
}

int main()
{
    Node *root = input_tree();

    cousin_counter(root);

    print_level_order(root);

    return 0;
}
