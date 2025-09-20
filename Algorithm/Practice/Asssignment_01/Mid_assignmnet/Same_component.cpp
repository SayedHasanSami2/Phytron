#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool visited_or_not[1005][1005];
int n, m;
int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool bfs(int si, int sj, int di, int dj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited_or_not[si][sj] = true;
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
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited_or_not[nx][ny] && grid[nx][ny] == '.')
            {
                q.push({nx, ny});
                visited_or_not[nx][ny] = true;
            }
        }
    }
    return false;
}

int main()
{

    if (!(cin >> n >> m))
        return 0;
    string line;
    for (int i = 0; i < n; ++i)
    {
        cin >> line;
        for (int j = 0; j < m; ++j)
            grid[i][j] = line[j];
    }

    int si, sj, di, dj;
    cin >> si >> sj;
    cin >> di >> dj;

    if (si < 0 || si >= n || sj < 0 || sj >= m || di < 0 || di >= n || dj < 0 || dj >= m)
    {
        cout << "NO" << endl;
        return 0;
    }

    if (bfs(si, sj, di, dj))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}