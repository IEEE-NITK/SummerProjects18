#include<bits/stdc++.h>
using namespace std;
int bfs(vector<int>a[] , int visit[] , queue<int>&q , int n)
{
    q.push(1);
    int level[n+1];
    visit[1]=1;
    level[1]=0;
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        for(int i=0; i<a[v].size();i++)
        {   if(visit[a[v][i]]!=1)
            {
                level[a[v][i]]=level[v]+1;
                visit[a[v][i]]=1;
                q.push(a[v][i]);
            }
        }
    }
    return level[n];
}
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {  vector<int>adj[100001];
       int n,m;
       queue<int>node;
        cin>>n>>m;
        int visit[n+1];
        memset(visit,0,sizeof(visit));
        for(int i=1;i<=m;i++)
        {   int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
            cout<<bfs(adj,visit,node,n)<<endl;
    }
}