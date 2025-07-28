#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    cin.ignore();  

    queue<string> q1;

    while (q--)
    {
        string command;
        getline(cin, command); 
        
        if (command[0] == '0') 
        {
            q1.push(command.substr(2)); 
        }
        else if (command[0] == '1')
        {
            if (!q1.empty())
            {
                cout << q1.front() << endl;
                q1.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
