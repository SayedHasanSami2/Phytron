#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool visited_or_not[1005][1005];
int n, m;
int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int BFS(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited_or_not[si][sj] = true;
    int area = 0;
    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        int x = cur.first, y = cur.second;
        ++area;
        for (int k = 0; k < 4; ++k)
        {
            int nx = x + directions[k][0];
            int ny = y + directions[k][1];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited_or_not[nx][ny] && grid[nx][ny] == '.')
            {
                visited_or_not[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return area;
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

    memset(visited_or_not, 0, sizeof(visited_or_not));
    int min_area = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (!visited_or_not[i][j] && grid[i][j] == '.')
            {
                int area = BFS(i, j);
                if (area < min_area)
                    min_area = area;
            }
        }
    }

    if (min_area == INT_MAX)
        cout << -1 << '\n';
    else
        cout << min_area << '\n';
    return 0;
}