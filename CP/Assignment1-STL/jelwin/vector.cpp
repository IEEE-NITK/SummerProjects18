#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v;
	int a,b,c,d;
	vector<int>:: iterator it;
	cin>>a;
	while(a--)
	{
		cin>>b;
		switch(b)
		{
			case 1: cin>>c;
				v.push_back(c);
				break;
			case 2: cin>>c>>d;c--;
				v[c]=d;
				break;
			case 3: cin>>c;d=0;
				if((it=find(v.begin(),v.end(),c))!=v.end())
					cout<<"yes"<<endl;
				else
					cout<<"no"<<endl;
				break;			
			case 4: cin>>c;
				v.erase(find(v.begin(),v.end(),c));
				break;		
			case 5: cout<<v.size()<<endl;
				break;
			case 6:	sort(v.begin(),v.end());
				break;
			case 7:	for(it=v.begin();it!=v.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				break;
		}
	}
	return 0;
}
