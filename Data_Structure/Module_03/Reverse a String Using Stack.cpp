#include <iostream>
#include <stack>
using namespace std;

string ReverseString(string str)
{
    stack<char> s;

    // Step 1: Push all characters into the stack
    for (int i = 0; i<str.length(); i++)
    {
        s.push(str[i]);
    }

    // Step 2: Pop characters and store back into the string
    for (int i = 0; i<str.length(); i++)
    {
        str[i] = s.top();
        s.pop();
    }

    return str;
}

int main()
{
    string input;

    cout << "Enter a string: ";
    cin >> input;

    string reversed = ReverseString(input);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
