#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int a[256];
	for(int i=0;i<256;i++) 
	    a[i]=i;
	bool v[256];
	memset(v,0,sizeof(v));
	while(n--)
	{
		int b,t;
		cin>>b;
		t=b;
		if(!v[b])
		{
    		while(t>=0&&a[t]>=b-k+1) 
    		    t--;
    		for(int i=t+1;i<=b;i++) 
    		{
    		    a[i]=a[t+1];
    		    v[i]=true;
    		}
		}
		cout<<a[b]<<' ';
	}
	return 0;
}