#include<bits/stdc++.h>
using namespace std;
main()
{
	int a[1000];
	memset(a,0,sizeof(a));
	int Q,ch,x,y;
	int n=sizeof(a)/sizeof(a[0]);
	cin>>Q;
	while (Q--)
	{
		cin>>ch;
		if (ch==1)
		{
			cin>>x>>y;
			a[x-1]=y;
		}
		else if (ch==2)
			sort(a,a+n);
		else if (ch==3)
		{
			cin>>x;
			cout<<lower_bound(a,a+n,x);
		}
		else if (ch==4)
		{	
			cin>>x;
			cout<<upper_bound(a,a+n,x);
		}
		else if (ch==5)
		{
			next_permutation(a,a+n);
			for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
		}
		else if (ch==6)
		{
			prev_permutation(a,a+n);
			for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
		}
	}
}
