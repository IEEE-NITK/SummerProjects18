
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
        int n,a,b,x;
        cin>>n;
        vector<int> adj[n+5];
        vector<int> dist(n+5,INT_MAX);
        for(int i=0;i<n-1;i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int Q;
        cin>>Q;
        vector<bool> girls(Q+5,false);
        for(int i=0;i<Q;i++)
        {
            cin>>x;
            girls[x]=true;
        }
        bfs(adj,dist);
        int min_dist=INT_MAX,id=1;
        for(int i=2;i<=n;i++)
        {
            if(girls[i])
            if(dist[i]<min_dist)
            {
                min_dist=dist[i];
                id=i;
            }
        }
        cout<<id<<endl;
    }

