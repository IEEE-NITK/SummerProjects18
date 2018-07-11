#include<bits/stdc++.h>
using namespace std;
#define max 100000
int n,m,child[max+1],parent[max+1];
 int visit[max+1];
vector<int>adj[max+1];
int dfs(int x)
{
    visit[x]=true;
    for(int i=0;i<adj[x].size();i++)
    {
        if(visit[adj[x][i]]==false)
        {
            child[x]++;
            parent[adj[x][i]]=x;
            dfs(adj[x][i]);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visit,false,sizeof(visit));
    memset(child,0,sizeof(child));
    for(int i=1;i<=n;i++)
    {
        if(visit[i]==false)
        {
            parent[i]=max+2;
            dfs(i);
        }
    }
    child[max+2]=max-4;
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(child[i]>child[parent[i]])
        {
            c++;
        }
    }
    cout<<c<<endl;
}