#include <bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<pair<int,pair<int,int>>>p;
	int a,b,c,d,e;
	cin>>a;
	while(a--)
	{
		cin>>b;
		switch(b)
		{
			case 1:	cin>>c>>d>>e;
				p.push(make_pair(c,make_pair(d,e)));
				break;
			case 2:
				cout<<"("<<p.top().first<<","<<p.top().second.first<<","<<p.top().second.second<<")";
				cout<<endl;
				break;
			case 3:	p.pop();
				break;
			case 4:	cout<<p.size()<<endl;
				break;
		}
	}
}
