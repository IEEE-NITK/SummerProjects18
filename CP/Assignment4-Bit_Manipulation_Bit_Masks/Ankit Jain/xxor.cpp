#include<bits/stdc++.h>
using namespace std;
main()
{
long long x=0, a[100001];
int n,q;
cin>>n>>q;
int prefix[32][n+1],l,r,p,i,j;
for(i=1;i<=n;i++)
cin>>a[i];
for(i=0;i<31;i++)
{
	prefix[i][0]=0;
	for(j=1;j<=n;j++)
		prefix[i][j]=prefix[i][j-1]+bool(a[j]&(1<<i));
}
while(q--)
{
cin>>l>>r;
x=0;
for(i=0;i<31;i++)
{
p=prefix[i][r]-prefix[i][l-1];
if (p<r-l+1-p)
x|=(1<<i);
}
cout<<x<<endl;
}
}