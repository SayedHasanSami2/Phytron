#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> v;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s)
        {
            if (c == '0')
            {
                st.push(c);
            }
            else if (c == '1')
            {
                if (!st.empty() && st.top() == '0')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
        }

        if (st.empty())
        {
            v.push_back("YES");
        }
        else
        {
            v.push_back("NO");
        }
    }
    for (const string &result : v)
    {
        cout << result << endl;
    }

    return 0;
}