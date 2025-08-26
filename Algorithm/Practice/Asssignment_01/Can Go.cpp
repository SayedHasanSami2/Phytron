#include<bits/stdc++.h>
using namespace std;
char grid[1000][1000];
bool vis[1000][1000];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;
bool found = false;

bool valid(int i, int j)
{
    return i>=0 && i<n && j>=0 && j<m;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    
    for(int i=0;i<4;i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && (grid[ci][cj] == '.')){
            dfs(ci,cj);
        }
    }
    
}

int main()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> grid[i][j];

    
    memset(vis,false,sizeof(vis));
    int dfs_count = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(grid[i][j] == '.' && !vis[i][j]){
                dfs_count++;
                dfs(i,j);
            }
        }
    }
    
    cout << dfs_count << endl;
    

    return 0;
}