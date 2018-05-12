#include <bits/stdc++.h>
using namespace std;

//Your code here
int main()
{
	map<string,int> s2i;
	int q;
	cin>>q;
	while(q)
	{
		q--;
		int ch;
		cin>>ch;
		if(ch==1)
		{
			string x;
			int y;
			cin>>x>>y;
			s2i[x]=y;
		}
		
		if(ch==2)
		{ 
		string x;
		cin>>x;
		for(map<string,int>::iterator it=s2i.begin();it!=s2i.end();it++)
		if(x==(*it).first)
		cout<<(*it).second<<endl;
	}
	
		if(ch==3)
		{
		string x;
		cin>>x;
		for(map<string,int>::iterator it=s2i.begin();it!=s2i.end();it++)
		if(x==(*it).first)
		{cout<<"Yes"<<endl;	
		break;
			}
}
		if(ch==4)
		{
			for(map<string,int>::iterator it=s2i.begin();it!=s2i.end();it++)
			cout<<"("<<(*it).first<<","<<(*it).second<<")";
			cout<<endl;
			}	
	}
	return 0;
}
