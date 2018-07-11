#include<bits/stdc++.h>
using namespace std;
int j=0;
int x[1001];
int bfs(vector<int> adj[], int visit[], queue<int> &nodes , int n)
{
    visit[1]=1;
    nodes.push(1);
   int level[n+1];
   level[1]=0;
    while(!nodes.empty())
    {
        int v=nodes.front();
        nodes.pop();
        for(int i=0; i<adj[v].size();i++)
        {   if(visit[adj[v][i]]!=1)
            {
                level[adj[v][i]]=level[v]+1;
                visit[adj[v][i]]=1;
                nodes.push(adj[v][i]);
            }
        }
    }
    j++;
    return level[x[j-1]];
}
int main()
{
    int n,u,v,q,i;
    cin>>n;
    vector<int>adj[n+1];
    for(i=0;i<n-1;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>x[i];
    }
    int visit[n+1];
    queue<int>nodes;
    int m=n;
    int a,b;
    for(i=0;i<q;i++)
   {   
      a=bfs(adj,visit,nodes,n);
      if(a<m)
      {
          m=a;
          b=x[i];
      }
       
   }
   cout<<b<<endl;
}