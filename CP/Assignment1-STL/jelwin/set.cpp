#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<int>s;
	set<int>:: iterator it;
	int a,b,c,d,e;
	cin>>a;
	while(a--)
	{
		cin>>b;
		switch(b)
		{
			case 1:	cin>>c;
				s.insert(c);
				break;
			case 2:	cout<<s.size();
				break;
			case 3:	it=s.begin();
				s.erase(it);
				break;
			case 4:	
				it=s.begin();
				cout<<*it<<endl;
				break;;
			case 5:
				for(it=s.begin();it!=s.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				break;
			case 6:	it=s.end();it--;
				cout<<*it<<endl;
				break;
				case 7:cin>>c;
				if((it=find(s.begin(),s.end(),c))!=s.end())
				{
					cout<<"yes"<<endl;break;
				}
				else
				{
					cout<<"no"<<endl;break;
				}
			case 8:
				cin>>c;
				for(it=s.begin();it!=s.end();it++)
				{
					if(*it==c)
						s.erase(*it);
				}
				break;
		}
	}
}
