#include<bits/stdc++.h>
using namespace std;
main()
{
	vector<int>v;
	vector<int>::iterator it;
	int Q, ch,x,y;
	cin>>Q;
	while(Q--)
	{
		cin>>ch;
		switch(ch)
		{
			case 1: cin>>x;
					v.push_back(x);
					break;
			case 2: cin>>x>>y;
					v[x-1]=y;
					break;
			case 3: cin>>x;
					if (find(v.begin(),v.end(),x)!=v.end())
	  					cout<<"Yes"<<endl;
					else cout<<"No"<<endl;
					break;
			case 4: cin>>x;
					it=find(v.begin(),v.end(),x);
					v.erase(it);
					break;
			case 5: cout<<v.size()<<endl;
					break;
			case 6: sort(v.begin(),v.end());
					break;
			case 7: for(it=v.begin();it!=v.end();++it)
						cout<<*it<<" ";
					cout<<endl;
		}
	
	}
}
