#include <bits/stdc++.h>
using namespace std;

//Your code here
int main()
{
	int q;
	set<int> ss;
	scanf("%d",&q);
	while(q)
	{
		q--;
		int ch;
		cin>>ch;
		if(ch==1)
		{
			int ch1;
			cin>>ch1;
			ss.insert(ch1);
			}	
			
		if(ch==2)
			cout<<ss.size()<<endl;
		
		if(ch==3)
		ss.erase(ss.begin());
		
		if(ch==4)
		cout<<*ss.begin()<<endl;
		
		
		if(ch==5)
		{
			for(set<int>::iterator it=ss.begin();it!=ss.end();it++)
				cout<<*it<<endl;
			}	
			
		if(ch==6)
				cout<<*ss.end()<<endl;
		
		if(ch==7)
		{
			int k;
			cin>>k;
			if(ss.count(k))
			cout<<"Yes"<<endl;
			else
			cout<<"No"<<endl;
			
		}
	
		if(ch==8)
		{
		int er;
		cin>>er;
		ss.erase(er);	
		}
		
	}
	return 0;
}
