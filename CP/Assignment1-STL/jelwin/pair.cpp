#include <bits/stdc++.h>
using namespace std;
int main()
{
	pair<int,int>p[1000]=make_pair(0,0);
	 pair<int,int>q[1000];
	int a,b,c,d,i;
	cin>>a;
	while(a--)
	{
		cin>>b;
		switch(b)
		{
			case 1:	cin>>c>>d>>i;
				p[c-1].first=d;
				p[c-1].second=i;
				break;
			case 2:	cin>>c;
				if(c==1)
				sort(p,p+1000);
				else if (c==2)
				{
					for(d=0;d<1000;d++)
					{
						q[d].second=p[d].first;
						q[d].first=p[d].second;
					}
					sort(q,q+1000);
				}
			case 3:	cout<<"\"";
			 	for(d=0;d<1000;d++)
					cout<<"("<<p[d].first<<","<<p[d].second<<")";
				cout<<"\"";
		}
	}
}

