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

ll contrct(string s,ll n)
{
	ll num=0;
	for (ll i = 0; i < s.size();i++)
		num=(((num%n)*10)+(s[i]-'0'))%n;

	return(num);
}

int main()
{
	int t;
	cin>>t;
	string A,B;
	ll ans,a,b;
	while(t--)
	{
		cin>>A>>B;
		a=contrct(A,M);
		b=contrct(B,M-1);/*didn't understand the concept behind "M-1" instead of "M" */
		ans=fastPow(a,b);
		cout<<ans<<endl;
	}
}