#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,m,x;
    cin >> n;
    cin >> k;
    int a[257];
    memset(a,-1,sizeof(a));
    
    for(int i=0;i<n;i++)
    {
    	cin>>x;
    	if(a[x]==-1)
    	{
    		int j=x-k+1;
    		if(j<0)
    			j=0;
    		for(m=j;m<=x;m++)
    		{
    				if(a[m]==-1)
    				{
    					int t=m;
    					cout<<m<<" ";
    					while(m<=x)
    					{
    						a[m]=t;
    						m++;

    					}
    					break;
    				}
    				else
    				{
    					if(a[m]==m)
    					{
    						int t=m;
    						while(m<=x)
    						{
    							a[m++]=t;
    						}
    						cout<<t<<" ";
    						break;
    					}
    				}
    		}
    	}
    	else
    		cout<<a[x]<<" ";
    }
}