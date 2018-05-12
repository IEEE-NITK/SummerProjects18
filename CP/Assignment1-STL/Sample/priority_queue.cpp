#include <bits/stdc++.h>
using namespace std;

//Your code here
	int main()
	{
priority_queue< pair <int,pair<int,int> > > pq;
	int q;
	cin>>q;
	while(q)
	{
		q--;
		
		int ch;
		cin>>ch;
		
		if(ch==1)
		{
			int x,y,z;
			cin>>x>>y>>z;
		pq.push(make_pair(x,make_pair(y,z)));
		}
		
		if(ch==2)
		{
		pair <int,pair<int,int> > pp=pq.top();
		cout<<"("<<pp.first<<",("<<pp.second.first<<","<<pp.second.second<<"))"<<endl;
		}

		if(ch==3)
		{
			pq.pop();
		}
	
		if(ch==4)
		{
			cout<<pq.size()<<endl;
		}
	}
}
