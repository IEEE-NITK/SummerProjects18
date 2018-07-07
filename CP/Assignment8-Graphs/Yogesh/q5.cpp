#include<bits/stdc++.h>
using namespace std;
const int MAX=100005;
vector< vector<int> > adj(MAX);
vector<int> child(MAX,0),parent(MAX);
vector<bool> vis(MAX,false);
int happy;
void dfs(int x)
{
    vis[x]=true;
    for(int i=0;i<adj[x].size();i++)
    {
        if(vis[adj[x][i]]==false)
        {
            child[x]++;
            parent[adj[x][i]]=x;
            dfs(adj[x][i]);
        }
    }

}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==false)
        {
            parent[i]=MAX-2;
            dfs(i);
        }
    }
    child[MAX-2]=MAX;
    for(int i=1;i<=n;i++)
        if(child[i]>child[parent[i]])
        happy++;

    cout<<happy;

}
