#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];

 void bfs(int src)
    {
        queue<int>q;
        q.push(src);
        visited[src] = true; // Mark the source as visited
        while (!q.empty())

        {
            int par = q.front();
            q.pop();

            
            visited[par] = true;

            for(int child : adj_list[par])
            {
                if (!visited[child])
                {
                    q.push(child);
                    visited[child] = true; // Mark as visited when pushing to queue
                }
            }
        }
        

    }

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // For undirected graph

    }
   
    memset(visited, false, sizeof(visited));
    int src, dest;
    cin >> src >> dest;

    bfs(src);
    if (visited[dest])
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}