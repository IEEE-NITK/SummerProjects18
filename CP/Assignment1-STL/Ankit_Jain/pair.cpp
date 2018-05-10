#include<bits/stdc++.h>
using namespace std;
bool myfunc(pair<int,int> &a, pair<int,int> &b) // I didn't actually get this concept.
{
return a.second<b.second;
}
main()
{
	pair <int,int> p[1000];
	int n=sizeof(p)/sizeof(p[0]);
	int Q,x,y,ch,z;
	cin>>Q;
	while(Q--)
	{
		cin>>ch;
		if (ch==1)
		{
			cin>>x>>y>>z;
			p[x-1]=make_pair(y,z);
		}
		else if (ch==2)
		{
			sort(p,p+n);
		}
		else if (ch==3)
		{
			sort(p,p+n,myfunc);
		}
		else if (ch==4)
		{
			for(int i=0;i<n;i++)
				cout<<"("<<p[i].first<<","<<p[i].second<<") ";
		}
	}
}
