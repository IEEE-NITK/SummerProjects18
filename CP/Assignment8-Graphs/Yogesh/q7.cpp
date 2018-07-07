#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
const int MAX=1000005;
vector<int> w_edge;
multiset< pair<int,int> > s;
vector< vector< pair<int,int> > >adj(MAX);
vector<bool> marked(MAX,false);

void mst(int x)
{

    s.insert({0,x});
    while(!s.empty())
    {
        pair<int,int> p;
        p=*s.begin();
        s.erase(s.begin());
        int x=p.second;
        if(marked[x]==true)
            continue;
        marked[x]=true;
        w_edge.push_back(p.first);
        for(int i=0;i<adj[x].size();i++)
        {
            if(marked[adj[x][i].second]==false)
            {
                s.insert({adj[x][i].first,adj[x][i].second});
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,a,b,w;
    ull k;
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b>>w;
        adj[a].push_back(make_pair(w,b));
        adj[b].push_back(make_pair(w,a));
    }
    int inter_road=0;
    for(int i=1;i<=n;i++)
    {
        if(marked[i]==false){
            mst(i);
            inter_road++;
        }

    }
    ull sum=0;
    sort(w_edge.begin(),w_edge.end());
    for(int i=0;i<w_edge.size();i++)
    {
        sum=sum+ull(w_edge[i]);
    }
    int i=w_edge.size()-1,cnt=0;
    sum+=(inter_road-1);
    while(i>=inter_road&&sum>k)
    {
       sum-= w_edge[i];
       sum+=1;
       i--;
       cnt++;
    }
    if(inter_road>1)
        cout<<-1;
    else if(sum<=k)
        cout<<cnt;
    else
        cout<<-1;
}
