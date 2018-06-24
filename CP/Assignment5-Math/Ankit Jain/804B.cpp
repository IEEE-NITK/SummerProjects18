#include<bits/stdc++.h>
typedef long long ll;
long m=pow(10,9)+7;
using namespace std;
ll expo(ll a, ll n)
{
if (n==0)
return 1;
else if (n==1)
return a;
else
{
ll temp=(a*a)%m;
if (n%2==0)
return (expo(temp,n/2)%m);
else
return (a*expo(temp,(n-1)/2))%m;
}
}
main()
{
string a;
ll count=0,ans=0;
cin>>a;
for(long i=0;i<a.size();i++)
{
	if (a[i]=='a')
	{
	count++;
	continue;
	}
	else
	{
	ans=(ans+(expo(2ll,count)-1)%m)%m;
	}
}
cout<<ans<<endl;
}