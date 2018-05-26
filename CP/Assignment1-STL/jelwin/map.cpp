#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int>m;
	map<string,int> :: iterator it;
	int a,b,c;
	string s;
	cin>>a;
	while(a--)
	{
		cin>>b;
		switch(b)
		{
			case 1:	cin>>s>>c;
				m.insert(make_pair(s,c));
				break;
			case 2: cin>>s;
				cout<<m[s]<<endl;
				break;
			case 3: cin>>s;
				if((it=m.find(s))!=m.end())
					cout<<"yes"<<endl;
				else
					cout<<"no"<<endl;
				break;
			case 4:
				for(it=m.begin();it!=m.end();it++)
					cout<<"("<<it->first<<","<<it->second<<")";
				cout<<endl;
				break;
		}
	}
}
