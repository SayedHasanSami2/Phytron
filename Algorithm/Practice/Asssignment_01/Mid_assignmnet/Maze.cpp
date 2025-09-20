#include <bits/stdc++.h>
using namespace std;

char maze[1005][1005];
bool visited[1005][1005];
pair<int, int> par[1005][1005];
int n, m;
pair<int, int> R = {-1, -1}, D = {-1, -1};
int directions[4][2] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool BFS(int si, int sj, int di, int dj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    par[si][sj] = {-1, -1};
    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        int x = cur.first, y = cur.second;
        if (x == di && y == dj)
            return true;
        for (int k = 0; k < 4; ++k)
        {
            int nx = x + directions[k][0];
            int ny = y + directions[k][1];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && maze[nx][ny] != '#')
            {
                visited[nx][ny] = true;
                par[nx][ny] = {x, y};
                q.push({nx, ny});
            }
        }
    }
    return false;
}

int main()
{

    if (!(cin >> n >> m))
        return 0;
    string row;
    for (int i = 0; i < n; ++i)
    {
        cin >> row;
        for (int j = 0; j < m; ++j)
        {
            maze[i][j] = row[j];
            if (maze[i][j] == 'R')
                R = {i, j};
            if (maze[i][j] == 'D')
                D = {i, j};
        }
    }

    if (R.first == -1 || D.first == -1)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
                cout << maze[i][j];
            cout << '\n';
        }
        return 0;
    }

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            visited[i][j] = false, par[i][j] = {-1, -1};

    bool found_path = BFS(R.first, R.second, D.first, D.second);

    if (found_path)
    {
        pair<int, int> curnt = D;
        while (!(curnt == R))
        {
            if (!(curnt == D))
                maze[curnt.first][curnt.second] = 'X';
            curnt = par[curnt.first][curnt.second];
            if (curnt.first == -1)
                break;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cout << maze[i][j];
        cout << '\n';
    }

    return 0;
}