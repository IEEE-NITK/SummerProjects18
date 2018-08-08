#include<bits/stdc++.h>

using namespace std;

bool vis[100001];

vector<int>adj[100001];

int child[100001]={0},h=0;

void dfs(int s)

{

    vis[s]=true;

    for(int i=0;i<adj[s].size();i++)

    {

        if (!vis[adj[s][i]])

        {

            child[adj[s][i]]=adj[adj[s][i]].size()-1;

            if (child[adj[s][i]] > child[s])

                h++;

            dfs(adj[s][i]);

        }

    }

}

int main()

{

    memset(vis,false,sizeof(vis));

    int m,n,x,i,y;

    cin>>n>>m;

    for(i=0;i<m;i++)

    {

        cin>>x>>y;

        adj[x].push_back(y);

        adj[y].push_back(x);

    }

    for(i=1;i<=n;i++)

    {

        if (!vis[i])

        {

            child[i]=adj[i].size();

            dfs(i);

        }

    }

    cout<<h<<endl;


}