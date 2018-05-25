#include <bits/stdc++.h>
using namespace std;

int main()
{  
	multiset<pair<int,pair<int,int> > > m;
	multiset<pair<int,pair<int,int> > >:: iterator it;
	int t, q,x,y,z;
	cin>>t;
	while (t--)
	{
		cin>>q;
		switch(q)
		{ 
			case 1: cin>>x>>y>>z;
				m.insert(make_pair(x,make_pair(y,z)));
				break;
			case 2: it=m.end();
				it--;
				cout<<"("<<it->first<<", "<<"("<<it->second.first<<", "<<it->second.second<<")) "<<endl;
				break;
			case 3: it=m.end();
				it--;
				m.erase(it);
				break;
			case 4: for(it=m.begin();it!=m.end();it++)
					cout<<"("<<it->first<<", "<<"("<<it->second.first<<", "<<it->second.second<<")) ";
				cout<<endl;
				break;
			case 5: cout<<m.size();
				cout<<endl;
				break;
		}
	}
}
