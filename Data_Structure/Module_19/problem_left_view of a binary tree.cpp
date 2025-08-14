// #include <bits/stdc++.h>
// /************************************************************

//     Following is the TreeNode class structure

//     template <typename T>
//     class TreeNode {
//        public:
//         T data;
//         TreeNode<T> *left;
//         TreeNode<T> *right;

//         TreeNode(T data) {
//             this->data = data;
//             left = NULL;
//             right = NULL;
//         }
//     };

// ************************************************************/

// vector<int> getLeftView(TreeNode<int> *root)
// {
//     int nodeLevel(TreeNode<int> * root, int searchedValue)
//     {

//         vector<int> answer;
//         bool fre[3005] = {false};
//         queue < pair<TreeNode<int> *, int> q;
//         if (root)
//         {
//             q.push({root, 1});
//         }

//         while (!q.empty())
//         {
//             pair<TreeNode<int> *, int> parent = q.front();
//             q.pop();
//             TreeNode<int> *node = parent.first;
//             int level = parent.second;
//             if (fre[level] == false)
//             {
//                 fre[level] = true;
//                 answer.push_back(node->data);
//             }
//             else
//             {
//                 if (node->left)
//                 {
//                     q.push({node->left, level + 1})
//                 }
//                 if (node->right)
//                 {
//                     q.push({node->right, level + 1});
//                 }
//             }
//         }
//     }
//     return answer;
// }
