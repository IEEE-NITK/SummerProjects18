#include<bits/stdc++.h>
using namespace std;
main()
{
	multiset<pair<int,pair<int,int> > >ms;
	multiset<pair<int,pair<int,int> > >::iterator it;
	int Q,ch,x,y,z;
	cin>>Q;
	while(Q--)
	{
		cin>>ch;
		if (ch==1)
		{
			cin>>x>>y>>z;
			ms.insert(make_pair(x,make_pair(y,z)));
		}
		else if (ch==2)
		{
			cout<<"("<<(*ms.begin()).first<<",("<<(*ms.begin()).second.first<<","<<(*ms.begin()).second.second<<"))"<<endl;
		}
		else if (ch==3)
		{
			ms.erase(ms.begin());
		}
		else if (ch==4)
		{
			for(it=ms.begin(); it!=ms.end(); it++)
			cout<<"("<<(*it).first<<",("<<(*it).second.first<<","<<(*it).second.second<<"))"<<endl;
		}
		else if (ch==5)
		{
			cout<<ms.size()<<endl;
		}
	}
		
		
}
