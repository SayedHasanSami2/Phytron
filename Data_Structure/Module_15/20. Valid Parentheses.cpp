// class Solution
// {
// public:
//     //bool isValid(string s)
//     {
//         //stack<char> str;
//         for (char c : s)
//         {

//             if (c == '(' || c == '{' || c == '[')
//             {
//                 str.push(c);
//             }
//             else
//             {
//                 if (str.empty())
//                 {
//                     return false;
//                 }
//                 else
//                 {
//                     if (c == ')' && str.top() == '(')
//                     {
//                         str.pop();
//                     }
//                     else if (c == '}' && str.top() == '{')
//                     {
//                         str.pop();
//                     }
//                     else if (c == ']' && str.top() == '[')
//                     {
//                         str.pop();
//                     }
//                     else
//                     {
//                         return false;
//                     }
//                 }
//             //}
//         }
//         if (str.empty())
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };