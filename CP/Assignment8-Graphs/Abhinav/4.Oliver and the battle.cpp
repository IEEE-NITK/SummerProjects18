/*SOLVED*/
/*https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/oliver-and-the-battle-1/*/
#include<bits/stdc++.h>
using namespace std;
int n,m;
int mat[1002][1002];
int visited[1002][1002];
int findans(int x, int y)
{
    visited[x][y] = 1;
    int nodecount = 1;
    queue<pair<int,int> > q;
    q.push(make_pair(x,y));
    while(!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i = -1 ; i<=1; i++ )
            for(int j = -1; j<=1; j++)
                if(!visited[x+i][y+j] && mat[x+i][y+j])
                {
                    nodecount++;
                    q.push(make_pair(x+i,y+j));
                    visited[x+i][y+j] = 1;
                }
    }
    return nodecount;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        memset(mat,0,sizeof(mat));
        memset(visited,0,sizeof(visited));
        for(int i = 1; i<=n ; i++)
            for(int j = 1; j<= m; j++)
                scanf("%d",&mat[i][j]);
        int ans = 0;
        int count = 0;
        for(int i = 1; i <= n ; i++)
            for(int j = 1; j<= m; j++)
            {
                if(!visited[i][j] && mat[i][j])
                {
                    ans = max( findans(i,j), ans  );
                    counter++;
                }
            }
        cout << count << " " << ans << endl;
    }
    return 0;
}
