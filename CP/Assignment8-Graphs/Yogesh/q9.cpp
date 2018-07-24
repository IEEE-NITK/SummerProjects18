#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
const int MAX=100005;
const ull max_d=1e15;
vector<bool> marked(MAX,false);
vector<ull> dist(MAX,max_d);
void dijkstra(vector< vector<pair<int,int> > >adj, vector<int> &parent, int x)
{
    dist[x]=0;
    multiset<pair<int,int> >s;
    s.insert(make_pair(0,x));
    while(!s.empty())
    {
        pair<int,int> p=*s.begin();
        s.erase(s.begin());
        int q=p.second;
        if(marked[q]==true)
            continue;
        marked[q]=true;
        for(int i=0;i<adj[q].size();i++)
        {
            if(dist[adj[q][i].second]>dist[q]+adj[q][i].first)
            {
                dist[adj[q][i].second]=dist[q]+adj[q][i].first;
                s.insert(make_pair(dist[adj[q][i].second],adj[q][i].second));
                parent[adj[q][i].second]=q;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector< vector<pair<int,int> > > adj(MAX);
        vector<int> parent(MAX,0);
        int n,k,r,s,w;
        cin>>n>>k;
        vector<int> path(k+1);
        for(int i=0;i<k;i++)
        {
            cin>>r>>s>>w;
            adj[r].push_back(make_pair(w,s));
            adj[s].push_back(make_pair(w,r));
        }
        fill(marked.begin(),marked.end(),false);
        fill(dist.begin(),dist.end(),max_d);
        int a,b,c;
        bool f=false;
        cin>>a>>b>>c;
        stack<int> p1;
        queue<int> p2;
        parent[a]=MAX;
        dijkstra(adj,parent,a);
        p1.push(b);
        ull min_d=0;
        if(dist[b]!=max_d){
            min_d=dist[b];
            while(parent[p1.top()]!=MAX)
                p1.push(parent[p1.top()]);

        }
        else
            f=true;
        fill(parent.begin(),parent.end(),0);
        if(!f){

            p2.push(b);
            fill(marked.begin(),marked.end(),false);
            fill(dist.begin(),dist.end(),max_d);
            parent[c]=MAX;
            dijkstra(adj,parent,c);
            if(dist[b]!=max_d){
                min_d+=dist[b];
                while(parent[p2.back()]!=MAX)
                    p2.push(parent[p2.back()]);
                p2.pop();
            }
            else
                f=true;
        }
        if(f)
            cout<<"No Train Found."<<endl;
        else{
            cout<<min_d<<endl;
           while(!p1.empty()){
                cout<<p1.top()<<" ";
                p1.pop();
           }
           while(!p2.empty()){
                cout<<p2.front()<<" ";
                p2.pop();
           }
            cout<<endl;
        }

    }

}
