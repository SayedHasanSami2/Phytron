#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int level[1005];

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

    bfs(src);

    cout << "\nLevel of node " << des << " from source " << src << " = " << level[des] << endl;

    return 0;
}
