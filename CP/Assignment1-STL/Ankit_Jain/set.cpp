#include<bits/stdc++.h>
using namespace std;
main()
{
	set<int>s;
	int Q,ch,x;
	cin>>Q;
	while(Q--)
	{
		cin>>ch;
		if (ch==1)
		{
			cin>>x;
			s.insert(x);
		}
		else if (ch==2)
		{
			cout<<s.size()<<endl;
		}
		else if (ch==3)
		{
			s.erase(s.begin());
		}
		else if (ch==4)
		{
			cout<<*(s.begin())<<endl;
		}
		else if (ch==5)
		{
			set<int>::iterator it;
			for(it=s.begin();it!=s.end();it++)
				cout<<*it<<"\t";
		}
		else if (ch==6)
		{
			cout<<*(--s.end())<<endl;
		}
		else if (ch==7)
		{
			cin>>x;
			if (s.find(x)!=s.end())
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
		else if (ch==8)
		{
			cin>>x;
			s.erase(x);
		}
	}
}
