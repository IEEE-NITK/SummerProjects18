//http://codeforces.com/contest/982/submission/38513868
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	vector<pair<int,int> > m;
	for(i=0;i<n;i++)
	m.push_back(make_pair(a[i],i+1));
	sort(m.begin(),m.end());
	stack<int> kk;
	int l,j,k=0;
	for(i=0,j=-1;i<2*n;i++)
	{
		scanf("%1d",&l);
		if(l==0)
		{   
		    j++;
		    cout<<m[j].second<<" ";
		    kk.push(m[j].second);
		}
		else
		{
		    cout<<kk.top()<<" ";
		    kk.pop();
		}
	}
	return 0;
}
