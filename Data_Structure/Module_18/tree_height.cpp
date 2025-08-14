#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* input_tree()
{
    int val;
    cin >> val;
    Node* root;
    if(val == -1)  root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        // 1. ber kore ana
        Node* p = q.front();
        q.pop();

        // 2. oi node ke niye kaj
        int l,r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children push kora
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

int maximum (Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    else if(root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    else
    {
        int l = maximum(root->left);
        int r = maximum(root->right);
        return max(l,r) +1;
    }

}

int main()
{
    // Node* root = new Node(10);
    // Node* a = new Node(20);
    // Node* b = new Node(30);
    // Node* c = new Node(40);
    // Node* d = new Node(50);
    // Node* e = new Node(60);

    // root->left = a;
    // root->right = b;
    // a->left = c;
    // b->left = d;
    // b->right = e;

    Node* root = input_tree();
    int result = maximum(root);
    cout << "\nHeight of the tree is: " << result << endl;
    return 0;
}