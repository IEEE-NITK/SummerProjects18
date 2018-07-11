#include<bits/stdc++.h>
using namespace std;
const int MAX=1000;
int n,m,c=0,visit[1001][1001],mat[1001][1001];
void init()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            visit[i][j]=false;
        }
    }
}
int dfs(int x,int y)
{
        visit[x][y]=true;
        c++;
        if(x<n-1)
        {
            if(mat[x+1][y]==1 && visit[x+1][y]==false)
            dfs(x+1,y);
            
            if(y<m-1)
            {
                if(mat[x+1][y+1]==1 && visit[x+1][y+1]==false)
                dfs(x+1,y+1);
                
                if(mat[x][y+1]==1 && visit[x][y+1]==false)
                dfs(x,y+1);
            }
          if(y!=0)
          {
                if(mat[x][y-1]==1 && visit[x][y-1]==false)
                dfs(x,y-1);
                
                if(mat[x+1][y-1]==1 && visit[x+1][y-1]==false)
                dfs(x+1,y-1);
          }
          if(m==1)
          {
              if(mat[x+1][y]==1 && visit[x+1][y]==false)
              dfs(x+1,y);
          }
        }
        if(x!=0)
        {
            if(mat[x-1][y]==1 && visit[x-1][y]==false)
            dfs(x-1,y);
            
            if(y!=0)
            {
                if(mat[x-1][y-1]==1 && visit[x-1][y-1]==false)
                dfs(x-1,y-1);
                
                if(mat[x][y-1]==1 && visit[x][y-1]==false)
                dfs(x,y-1);
            }
            if(y<m-1)
            {
                if(mat[x-1][y+1]==1 && visit[x-1][y+1]==false)
                dfs(x-1,y+1);
                
                if(mat[x][y+1]==1 && visit[x][y+1]==false)
                dfs(x,y+1);
            }
            if(m==1)
            {
                if(mat[x-1][y]==1 && visit[x-1][y]==false)
                dfs(x-1,y);
            }
        }
        if(n==1)
        {
            if(y<m-1)
            {
                if(mat[x][y+1]==1 && visit[x][y+1]==false)
                dfs(x,y+1);
            }
            if(y!=0)
            {
                if(mat[x][y-1]==1 && visit[x][y-1]==false)
                dfs(x,y-1);
            }
        }
}
int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        init();
        int i,j;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>x;
                mat[i][j]=x;
            }
        }
        int troops=0,killed=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(mat[i][j]==1 && visit[i][j]==false)
                {
                    troops++;
                    dfs(i,j);
                    killed=max(c,killed);
                    c=0;
                }
            }
        }
        cout<<troops<<" "<<killed<<endl;
    }
}