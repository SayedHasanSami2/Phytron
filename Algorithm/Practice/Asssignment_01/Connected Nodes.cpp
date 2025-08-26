#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    //int a[n];
    vector<int> adj_list[n];    
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);   
    }
    int q;
    cin >> q;
    vector<bool> visited(n, false);
    while(q--)
    {
        int X;
        cin >> X;
        if(adj_list[X].empty())
        {
            cout << "-1" << endl;
            continue;

        }
        else
        {
            sort(adj_list[X].rbegin(), adj_list[X].rend());
            for(int answer: adj_list[X])
            {
                cout << answer << " ";
            }
        }
        cout << endl;

    
    }
    return 0;
}