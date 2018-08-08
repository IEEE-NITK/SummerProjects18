#include<bits/stdc++.h>

using namespace std;

bool vis[10001];

vector<int>adj[10001];

int n;

int bfs(int s,vector<int>adj[])

{


int l[n+1];

queue <int> q;

q.push(s);

l[1]=0;

vis[s]=true;

while(!q.empty())

{

int t=q.front();

q.pop();

for(int i=0;i<adj[t].size();i++)

	if (!vis[adj[t][i]])

	{

		l[adj[t][i]]=l[t]+1;

		q.push(adj[t][i]);

		vis[adj[t][i]]=true;
	
	}

}

return l[n];

}

int main()

{

int m,x,y,i,p;

cin>>p;

while(p--)

{

    vector<int>adj[10001];

    
    cin>>n>>m;

    for(i=1;i<=n;i++)

        vis[i]=false;

    for(i=1;i<=m;i++)

    {

    cin>>x>>y;

    adj[x].push_back(y);

    adj[y].push_back(x);

    }

    cout<<bfs(1,adj)<<endl;


}
}
