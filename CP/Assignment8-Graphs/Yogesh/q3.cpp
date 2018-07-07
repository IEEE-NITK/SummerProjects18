#include<bits/stdc++.h>
using namespace std;
const int MAX=1000;
vector< vector<bool> > mat(MAX+1,vector<bool>(MAX+1,false));
vector< vector<bool> > vis(MAX+1,vector<bool>(MAX+1,false));
int cnt=0,n,m;
void init()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            vis[i][j]=false;

}
void dfs(int x,int y)
{
    vis[x][y]=true;
    cnt++;
    if(x<n-1)
    {

            if(mat[x+1][y]==1&&vis[x+1][y]==false)
                dfs(x+1,y);
            if(y<m-1){
                if(mat[x+1][y+1]==1&&vis[x+1][y+1]==false)
                    dfs(x+1,y+1);

                if(mat[x][y+1]==1&&vis[x][y+1]==false)
                    dfs(x,y+1);

            }
            if(y!=0)
            {
                if(mat[x+1][y-1]==1&&vis[x+1][y-1]==false)
                    dfs(x+1,y-1);
                if(mat[x][y-1]==1&&vis[x][y-1]==false)
                    dfs(x,y-1);
            }
            if(m==1)
            {
                if(mat[x+1][y]==1&&vis[x+1][y]==false)
                    dfs(x+1,y);
            }

    }
    if(x!=0)
    {
        if(mat[x-1][y]==1&&vis[x-1][y]==false)
                dfs(x-1,y);
        if(y<m-1)
        {
            if(mat[x-1][y+1]==1&&vis[x-1][y+1]==false)
                dfs(x-1,y+1);
            if(mat[x][y+1]==1&&vis[x][y+1]==false)
                dfs(x,y+1);
        }
        if(y!=0)
        {
            if(mat[x-1][y-1]==1&&vis[x-1][y-1]==false)
                dfs(x-1,y-1);
            if(mat[x][y-1]==1&&vis[x][y-1]==false)
                dfs(x,y-1);
        }
        if(m==1)
            {
                if(mat[x-1][y]==1&&vis[x-1][y]==false)
                    dfs(x-1,y);
            }
    }
    if(n==1)
    {
        if(y<m-1)
            if(mat[x][y+1]==1&&vis[x][y+1]==false)
                dfs(x,y+1);

    }
}
int main()
{
    int T;
    bool x;
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                cin>>x;
                mat[i][j]=x;
            }
        int troops=0,max_destr=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
        {
            if(mat[i][j]==1&&vis[i][j]==false)
            {
                troops++;
                dfs(i,j);
                max_destr=max(cnt,max_destr);
                cnt=0;
            }
        }
        cout<<troops<<" "<<max_destr<<endl;
        init();
    }
}
