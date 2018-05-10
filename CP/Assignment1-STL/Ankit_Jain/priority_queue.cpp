#include<bits/stdc++.h>
using namespace std;
main()
{
	priority_queue<pair<int,pair<int,int> > >pq;
	int Q,x,y,z,ch;
	cin>>Q;
	while(Q--)
	{
		cin>>ch;
		if (ch==1)
		{
			cin>>x>>y>>z;
			pq.push(make_pair(x,make_pair(y,z)));
		}
		else if (ch==2)
		{
			cout<<"("<<pq.top().first<<",("<<pq.top().second.first<<","<<pq.top().second.second<<")"<<endl;
		}
		else if (ch==3)
		{
			pq.pop();
		}
		else if (ch==4)
		{
			cout<<pq.size();
		}
	}
}
