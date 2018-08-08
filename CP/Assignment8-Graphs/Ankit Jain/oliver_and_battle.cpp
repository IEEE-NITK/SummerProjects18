#include<bits/stdc++.h>
using namespace std;
int a[1002][1002],c=0,n,m;
bool vis[1002][1002];
void dfs(int i, int j)
{
	c++;
	vis[i][j]=true;
	if (j!=m-1)
	{
	    if ((a[i][j+1]==1) && (vis[i][j+1]==false))
		{
			dfs(i,j+1);
		}
		if (i!=0)
	    {
	        if ((a[i-1][j+1]==1) && (vis[i-1][j+1]==false))
	    	{
	    		dfs(i-1,j+1);
		    }
	    }
	}
	if (i!=n-1)
	{
	    if ((a[i+1][j]==1) && (vis[i+1][j]==false))
		{
			dfs(i+1,j);
		}
		if (j!=m-1)
	    {
	        if ((a[i+1][j+1]==1) && (vis[i+1][j+1]==false))
		    {
			    dfs(i+1,j+1);
	    	}
	    }
	}
	if (j!=0)
	{
	    if ((a[i][j-1]==1) && (vis[i][j-1]==false))
		{
			dfs(i,j-1);
		}
		if (i!=n-1)
	    {
	        if ((a[i+1][j-1]==1) && (vis[i+1][j-1]==false))
	    	{
		    	dfs(i+1,j-1);
		    }
	    }
	}
	if (i!=0)
	{
	    if ((a[i-1][j]==1) && (vis[i-1][j]==false))
		{
			dfs(i-1[j]);
		}
		if (j!=0)
	    {
	        if ((a[i-1][j-1]==1) && (vis[i-1][j-1]==false))
		    {
			    dfs(i-1,j-1);
	    	}
	    }
	}
}
int main()
{	int max=0,count=0,i,t,j;
	cin>>t;
	while(t--)
	{
	    count=0;
	    max=0;
		cin>>n>>m;
		for(i=0;i<=n;i++)
			for(j=0;j<=m;j++)
			{
			    a[i][j]=0;
			    vis[i][j]=false;
			}
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				cin>>a[i][j];
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				if (a[i][j])
					if (!vis[i][j])
					{
						dfs(i,j);
						count++;
						if (c>max)
							max=c;
						c=0;
					}
	cout<<count<<" "<<max<<endl;
	}
	
}