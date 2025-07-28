#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    int size = st.size();


    queue<int> q;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    int size2 = q.size();
    if (size != size2)
    {
        cout << "NO" << endl;
        return 0;
    }
    int flag = true;
    while (!st.empty() && !q.empty())
    {
        if (st.top() == q.front())
        {
            
            st.pop();
            q.pop();
        }
        else
        {
           flag = false;
           break;
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    

    

    return 0;
}