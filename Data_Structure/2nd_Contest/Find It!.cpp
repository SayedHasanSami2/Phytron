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
        // 1. ber kore ana
        Node *p = q.front();
        q.pop();

        // 2. oi node ke niye kaj
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

        // 3. children push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void find_leaf_Nodes(Node *root, vector<int> &leafValues)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        leafValues.push_back(root->val); 
        return;
    }

    find_leaf_Nodes(root->left, leafValues);
    find_leaf_Nodes(root->right, leafValues);
}

int main()
{
    Node *root = input_tree();

    vector<int> leafNodes;
    find_leaf_Nodes(root, leafNodes);

    vector<int> fre(101, 0);

    for (int v : leafNodes)
    {
        fre[v]++;
    }

    int maxFreq = 0, ans = -1;
    for (int type = 1; type <= 100; type++)
    {
        if (fre[type] > maxFreq)
        {
            maxFreq = fre[type];
            ans = type;
        }
    }

    cout << ans << endl;

    return 0;
}
