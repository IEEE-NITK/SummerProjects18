#include<bits/stdc++.h>
typedef long long ll;
ll m=pow(10,9)+7;
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
int main()
{
	ll t,n,r,x,y,z,ncr,npr;
    ll fact[1000000];
    fact[0]=1;
	for(ll i=1;i<=1000000;i++)
        fact[i]=(fact[i-1]*i)%m;
    cin>>t;
	while(t--)
	{
	cin>>n>>r;
	x=fact[n];
	y=fact[n-r];
	z=fact[r];
	npr=(x*(expo(y,m-2)%m))%m;
	ncr=(npr*(expo(z,m-2)%m))%m;
	cout<<npr<<" "<<ncr<<endl;	
	}
}