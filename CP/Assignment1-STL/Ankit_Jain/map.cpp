#include<bits/stdc++.h>
using namespace std;
main()
{
	map<string,int> m;
	int Q,ch,y;
	string x;
	cin>>Q;
	while(Q--)
	{
		cin>>ch;
		if (ch==1)
		{
			cin>>x>>y;
			m[x]=y;
		}
		else if(ch==2)
		{
			cin>>x;
			cout<<m[x]<<endl;
		}
		else if (ch==3)
		{
			cin>>x;
			if (m.find(x)!=m.end())
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
		else if (ch==4)
		{
			map<string,int>::iterator it;
			for(it=m.begin();it!=m.end();it++)
				cout<<"("<<(*it).first<<","<<(*it).second<<") ";
		}
		
	}
}
