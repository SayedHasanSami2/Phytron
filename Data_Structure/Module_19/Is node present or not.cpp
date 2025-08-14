// /************************************************************

//     Following is the Binary Tree node structure

// ************************************************************/

// template <typename T>
// class BinaryTreeNode
// {
//     public :
//     T data;
//     BinaryTreeNode<T> *left;
//     BinaryTreeNode<T> *right;

//     BinaryTreeNode(T data)
//     {
//         this -> data = data;
//         left = NULL;
//         right = NULL;
//     }
// };

// bool isNodePresent(BinaryTreeNode<int> *root, int x) {
//     if(root == NULL)
//     {
//         return false;
//     }
    
//     if(root->data == x)
//     {
//         return true;
//     }
//     bool left = isNodePresent(root->left, x);
//     bool right = isNodePresent(root->right, x);
//     return left || right;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     BinaryTreeNode<int>* root = input_tree();
//     int x;
//     return 0;
// }