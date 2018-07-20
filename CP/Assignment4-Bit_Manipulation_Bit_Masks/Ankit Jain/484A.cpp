#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll monk(ll l, ll r)
{
if ((l|l+1)> r)
	return l;
else
	return monk(l|l+1,r);
}
main()
{
	long long l,r;
	int n;
	cin>>n;
	while(n--)
	{
		cin>>l>>r;
		cout<<monk(l,r)<<endl;
	}
}