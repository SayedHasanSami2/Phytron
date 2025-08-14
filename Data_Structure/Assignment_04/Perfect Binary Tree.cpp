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
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int depth_of_tree(Node *node)
{
    int depth = 0;
    while (node != NULL)
    {
        depth++;
        node = node->right;
    }
    return depth;
}


bool checking_perfect_tree(Node *root, int depth, int level = 1) //level fix kore dibo 
{
    if (root == NULL)
        return true;

        // leaf node hole depth check korbo
    if (root->left == NULL && root->right == NULL)
        return (depth == level);

    if (root->left == NULL || root->right == NULL)
        return false;

    return checking_perfect_tree(root->left, depth, level + 1) &&
           checking_perfect_tree(root->right, depth, level + 1);
}

int main()
{
    Node *root = input_tree();
    int depth = depth_of_tree(root);

    if (checking_perfect_tree(root, depth))
        cout << "YES";
    else
        cout << "NO";
    return 0;

    return 0;
}