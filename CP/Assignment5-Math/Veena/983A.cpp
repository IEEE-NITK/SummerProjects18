#include<bits/stdc++.h>
using namespace std;
main()
{
	ios::sync_with_stdio(false);
	int qr;
	long long p,q,b,temp;
	cin>>qr;
	while(qr--)
	{
		cin>>p>>q>>b;
			temp=__gcd(p,q);
			p/=temp;
			q/=temp;
		while((temp=__gcd(q,b))!=1)
		{
			q/=temp;
		}
		if (q==1)
			cout<<"Finite\n";
		else
			cout<<"Infinite\n";
	}
}