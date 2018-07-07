#include<bits/stdc++.h>
using namespace std;
const int MAX=1255;
void dijkstra(vector< vector<pair<int,int> > >adj, vector<bool> &marked, vector<int> &dist, int u)
{
    dist[u]=0;
    multiset< pair<int,int> >s;
    s.insert(make_pair(0,u));
    while(!s.empty())
    {
        pair<int,int> p=*s.begin();
        s.erase(s.begin());
        int x=p.second;
        if(marked[x]==true)
            continue;
        marked[x]=true;
        for(int i=0;i<adj[x].size();i++)
        {
            if(dist[adj[x][i].second]>dist[x]+adj[x][i].first){
                dist[adj[x][i].second]=dist[x]+adj[x][i].first;
                s.insert(make_pair(dist[adj[x][i].second],adj[x][i].second));
            }
        }
    }
}
int main()
{
    vector< vector<pair<int,int> > >road1(MAX),rail1(MAX),road2(MAX),rail2(MAX);
    vector<bool> marked_road(MAX,false),marked_rail(MAX,false);
    vector<int> dist_road(MAX,INT_MAX),dist_rail(MAX,INT_MAX);
    int n,w;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           cin>>w;
           road1[i].push_back(make_pair(w,j));
           road2[j].push_back(make_pair(w,i));
        }
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
    {
        cin>>w;
        rail1[i].push_back(make_pair(w,j));
        rail2[j].push_back(make_pair(w,i));
    }
    int u,v;
    cin>>u>>v;
    dijkstra(road1,marked_road,dist_road,u);
    dijkstra(rail2,marked_rail,dist_rail,v);

    long long min_dist=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        if(i!=u&&i!=v)
        {
            if((long long)dist_road[i]+dist_rail[i]<min_dist)
                min_dist=(long long)dist_road[i]+dist_rail[i];
        }
    }
    fill(marked_road.begin(),marked_road.end(),false);
    fill(marked_rail.begin(),marked_rail.end(),false);
    fill(dist_road.begin(),dist_road.end(),INT_MAX);
    fill(dist_rail.begin(),dist_rail.end(),INT_MAX);

    dijkstra(rail1,marked_rail,dist_rail,u);
    dijkstra(road2,marked_road,dist_road,v);
    for(int i=1;i<=n;i++)
    {
        if(i!=u&&i!=v)
        {
            if((long long)dist_road[i]+dist_rail[i]<min_dist)
                min_dist=(long long)dist_road[i]+dist_rail[i];
        }
    }

    cout<<min_dist;
}


