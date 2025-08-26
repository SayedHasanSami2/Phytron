#include <bits/stdc++.h>
using namespace std;

char grid[1000][1000];
bool vis[1000][1000];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;
vector<int> dfs_count;

bool valid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

int dfs(int si, int sj) {
    vis[si][sj] = true;
    int dfs_cnt = 1; 

    for (int i = 0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.') {
            dfs_cnt += dfs(ci, cj); 
        }
    }
    return dfs_cnt;
}

int main() {


    if (!(cin >> n >> m)) return 0;

    string row;
    for (int i = 0; i < n; i++) {
        cin >> row;
        for (int j = 0; j < m; j++)
            grid[i][j] = row[j];
    }

    memset(vis, 0, sizeof(vis));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                dfs_count.push_back(dfs(i, j));
            }
        }
    }

    if (dfs_count.empty()) {
        cout << 0 << '\n';
        return 0;
    }

    sort(dfs_count.begin(), dfs_count.end());
    for (size_t k = 0; k < dfs_count.size(); ++k) {
        if (k) cout << ' ';
        cout << dfs_count[k];
    }
    cout << '\n';

    return 0;
}
