#include <bits/stdc++.h>
using namespace std;

bool visited_or_not[1005][1005];
int n, m;
int directions[8][2] = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

int BFS(int si, int sj, int di, int dj)
{
    if (si == di && sj == dj)
        return 0;
    queue<tuple<int, int, int>> q;
    q.push({si, sj, 0});
    visited_or_not[si][sj] = true;
    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        int x = get<0>(cur);
        int y = get<1>(cur);
        int steps = get<2>(cur);
        for (int k = 0; k < 8; ++k)
        {
            int nx = x + directions[k][0];
            int ny = y + directions[k][1];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited_or_not[nx][ny])
            {
                if (nx == di && ny == dj)
                    return steps + 1;
                visited_or_not[nx][ny] = true;
                q.push({nx, ny, steps + 1});
            }
        }
    }
    return -1;
}

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int si, sj, di, dj;
        cin >> n >> m;
        cin >> si >> sj;
        cin >> di >> dj;

        if (n <= 0 || m <= 0 || n > 1000 || m > 1000 ||
            si < 0 || si >= n || sj < 0 || sj >= m ||
            di < 0 || di >= n || dj < 0 || dj >= m)
        {
            cout << -1 << "\n";
            continue;
        }

        memset(visited_or_not, 0, sizeof(visited_or_not));
        cout << BFS(si, sj, di, dj) << "\n";
    }
    return 0;
}