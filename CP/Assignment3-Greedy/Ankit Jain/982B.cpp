#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,j,x,s;
	pair<int,int> w[200000];
	string p;
	stack<int> out;
	cin>>n;
	for(j=0;j<n;j++)
	{	cin>>x;
		w[j].first=x;
		w[j].second=j+1;
	}
	cin>>p;
	sort(w,w+n);
	for(s=0,j=0;s<p.length();s++)
	{
		if (p[s]=='0')
		{	out.push(w[j].second);
			cout<<w[j++].second<<" ";
		}
		else if (p[s]=='1')
		{	cout<<out.top()<<" ";
			out.pop();
		}
	}
}