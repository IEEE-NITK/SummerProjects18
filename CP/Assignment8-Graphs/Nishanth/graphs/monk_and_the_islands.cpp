#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {  
	vector<int>a[10000];
       int n,m;
       queue<int>node;
        cin>>n>>m;
        int visited[n+1];
        memset(visited,0,sizeof(visited));
        for(int i=1;i<=m;i++)
        {   
	    int x,y;
            cin>>x;
	    cin>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
	node.push(1);
    int l[n+1];
    visited[1]=1;
    l[1]=0;
    while(!node.empty())
    {
        int v=node.front();
        node.pop();
        for(int i=0; i<a[v].size();i++)
        {   if(visited[a[v][i]]!=1)
            {
                l[a[v][i]]=l[v]+1;
                visited[a[v][i]]=1;
                node.push(a[v][i]);
            }
        }
    }
    cout << l[n] << endl;
    }
}
