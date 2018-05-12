#include <bits/stdc++.h>
using namespace std;

//Your code here
int main()
{
	multiset< pair<int,pair <int,int> >,greater<int> > mul;
	int q;
	while(q)
	{
		q--;
		int ch;
		cin>>ch;
	if(ch==1)
		{
			int x,y,z;
			cin>>x>>y>>z;
		mul.insert(make_pair(x,make_pair(y,z)));
		}
	
		if(ch==2)
		{
		cout<<"("<<((*mul).begin).first<<",("<<((*mul).begin).second.first<<","<<((*mul).begin).second.second<<"))"<<endl;		
		}
		
		if(ch==3)
		{
		mul.erase(*mul.begin());
	}
		
		if(ch==4)
		{		
		multiset< pair<int,pair <int,int> >,greater<int> >::iterator it=ms.begin();
		for(;it!=ms.end();it++)
			cout<<"("<<(*it).first<<",("<<(*it).second.first<<","<<(*it).second.second<<"))"<<endl;
		}
		
		if(ch==5)
		{
			cout<<mul.size()<<endl;
		}
	}
	return 0;
}
