#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
typedef long long ll;

ll fastPow(ll base, ll p)
{
   if(p==0)
	return 1;
		
   else if(p==1)
	return base;

   else
   {
	ll temp = fastPow(base, p/2);
	if(p%2 == 0)
	  return ( temp * temp ) % M;
	
	else
	  return ( ((temp * temp) % M) * base ) % M ;
    }	
}

int main()
{
	ll T;
	cin>>T;
		ll fact[1000000];
    	fact[0]=1;
		for(int i=1;i<=1000000;i++)
    	    fact[i]=(fact[i-1]*i)%M;
    ll n,r,ncr,npr,A,B,C;
	while(T--)
	{
		cin>>n>>r;
		A=fact[n];
		B=fact[n-r];
		C=fact[r];
		npr=((A%M)*(fastPow(B,M-2)%M)%M);
		ncr=(npr*(fastPow(C,M-2)%M))%M;
		cout<<npr<<" "<<ncr<<endl;
	}
}
