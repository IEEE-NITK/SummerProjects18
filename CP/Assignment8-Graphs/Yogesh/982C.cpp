#include<bits/stdc++.h>
using namespace std;
const int MAX=100005;
vector< vector<int> >adj(MAX);
vector<int> child(MAX),parent(MAX);
vector<bool> marked(MAX,false);
int edge;
void dfs(int x)
{
    marked[x]=true;
    child[x]=adj[x].size()-1;
    for(int i=0;i<adj[x].size();i++)
    {
        if(marked[adj[x][i]]==false)
        {
            parent[adj[x][i]]=x;
            dfs(adj[x][i]);

        }
    }
    if(parent[x]!=MAX)
        if(child[x]%2)
        {
            edge++;
            child[parent[x]]--;
        }
}
int main()
{
    int n,a,b;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    if(n%2)
        cout<<-1;
    else{
        dfs(1);
        cout<<edge;
    }

}

