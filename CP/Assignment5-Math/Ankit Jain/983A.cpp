#include<bits/stdc++.h>
using namespace std;
main()
{
long long n,p,q,b,gcd;
cin>>n;
while(n--)
{
cin>>p>>q>>b;
gcd=__gcd(p,q);
p/=gcd;
q/=gcd;
while((gcd=__gcd(b,q))!=1)
	q/=gcd;
if (q!=1)
	printf("infinite\n");
else
	printf("finite\n");
}
}