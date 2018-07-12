#include<bits/stdc++.h>
using namespace std;


void bfs(vector<int> adj[], vector<int> &dist)
{
    int x=1;
    dist[x]=0;
    queue<int> Q;
    Q.push(x);
    while(!Q.empty())
    {
        int p=Q.front();
        Q.pop();
        for(int i=0;i<adj[p].size();i++)
        {
            if(dist[adj[p][i]]>dist[p]+1){
                dist[adj[p][i]]=dist[p]+1;
                Q.push(adj[p][i]);
            }
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
        int n,m,a,b;
        cin>>n>>m;
        vector<int> adj[n+5];
        vector<int> dist(n+5,INT_MAX);
        for(int i=0;i<m;i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        bfs(adj,dist);
        cout<<dist[n]<<endl;
    }
}
