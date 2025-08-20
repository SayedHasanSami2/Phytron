#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int level[1005];
int parent[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        //cout << par << " ";

        for (int child : adj_list[par])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par; // Track parent for path reconstruction
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // undirected
    }

    int src, des;
    cin >> src >> des;

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent)); // Initialize parent array

    bfs(src);

   
    // for(int i = 0; i < n; i++)
    // {
    //     cout << "parent of " << i << " = " << parent[i] << endl;
    // }
    vector<int>path;
    while(des != -1)
    {
        path.push_back(des);
        des = parent[des]; // Move to parent
    }
    reverse(path.begin(), path.end()); // Reverse to get path from source to destination
    for(int x : path)
    {
        cout << x << " ";
    }

    return 0;
}
