#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=0,k,x,q[255],p;
	cin>>n;
	cin>>k;
	memset(q,1,255*sizeof(int));
	for(p=0;p<n;p++)
	{
		cin>>x;int j=0;
		if(x==0)
		{	cout<<0;
			q[x]=0;
		}		
		else if(x<k)
		{
			if(!q[0])
			{				
				cout<<1;
				for(i=1;i<=x;i++)
					q[i]=0;
			}
			if(q[0])
			{
				cout<<0;
				for(i=0;i<x;i++)
					q[i]=0;
			}
		}
		else
		{
			for(i=x+k-1;i>=x;i--)
			{
				if(!q[i])
				{
					cout<<i-k+1;
					j=1;
					break;		
				}
				
			}
			
			if(j==0)
			{
				for(i=x-1;i>=x-k+1;i--)
				{
					if(q[i])
						q[i]=0;
					else
					{	cout<<i+1;
						break;
						j=1;
					}
				}
				
			}
			if(!j)
				cout<<x-k+1;
			q[x]=0;	
		}
	}
	return 0;	
}		
			
		
			
	
