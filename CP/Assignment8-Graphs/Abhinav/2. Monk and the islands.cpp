/*  SOLVED */
/*   https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/description/   */
#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void bfs(ll s,bool vis[],ll level[],vector <ll> v[])
{
    queue <ll> q;
    q.push(s);
    level[s] = 0;
    vis[s] = true;
    while(!q.empty())
    {
        ll p = q.front();
        q.pop();
        for(ll i=0;i<v[p].size();++i)
        {
            if(vis[v[p][i]] == false)
            {
                //Setting the level of each node with an increment in the level of parent node
                level[v[p][i]] = level[p] + 1;
                q.push(v[p][i]);
                vis[v[p][i]] = true;
            }
        }
    }
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        vector <ll> adj[100000+5];
        bool visited[100000+5];
        ll level[100000+5];
        memset(visited,false,sizeof(visited));
        memset(level,0,sizeof(level));
        ll nodes, edges;
        cin >> nodes >> edges;
       
        for(ll i=0;i<edges;++i)
        {
            ll x,y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        
        bfs(1,visited,level,adj);
        cout << level[nodes] << endl;
    }
    return 0;
}