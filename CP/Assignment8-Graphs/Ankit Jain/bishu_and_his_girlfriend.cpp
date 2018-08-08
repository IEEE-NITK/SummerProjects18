#include<bits/stdc++.h>


using namespace std;


bool vis[1001];

vector<int>adj[1001];

int g[1001]={0};

int bfs(int s)

{
    
    vis[s]=true;


    queue <int> q;


    q.push(s);


    while(!q.empty())


    {

        
	int v=q.front();


        q.pop();


        for(int i=0;i<adj[v].size();i++)


        {


            if (!vis[adj[v][i]])


            {


                q.push(adj[v][i]);


                vis[adj[v][i]]=true;

		        if (g[adj[v][i]])

			        return adj[v][i];


            }


        }


    }


 }


int main()


{

       int n,q,x,y,i;


        cin>>n;


        for(i=1;i<=n;i++)


        {


            vis[i]=false;


        }


        for(i=1;i<n;i++)


        {


            cin>>x>>y;


            adj[x].push_back(y);


            adj[y].push_back(x);


        }

 
	cin>>q;

	for(i=1;i<=q;i++)

	{

	    cin>>x;

	   g[x]=1;

	}
       
	cout<<bfs(1)<<endl;

}