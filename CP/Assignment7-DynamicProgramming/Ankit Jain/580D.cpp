#include<bits/stdc++.h>
using namespace std;
#define maxx 20
typedef long long ll;
ll dp[1<<maxx][20],a[20],c,n,k,x,i,y,m,benefit[20][20];
ll solve(ll mask, ll prev)
{
if (__builtin_popcount(mask)==m)
	return 0;
if (dp[mask][prev]!=-1)
	return dp[mask][prev];
ll ans=-1;
for(int i=0;i<n;i++)
	if ((mask&(1<<i))==0)
		ans = max(ans,a[i] + solve(mask | (1<<i), i) + benefit[prev][i]);
return dp[mask][prev]=ans;
}
main()
{
memset(dp,-1,sizeof(dp));
memset(benefit,0,sizeof(benefit));
cin>>n>>m>>k;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<k;i++)
{
	cin>>x>>y>>c;
	x--;
	y--;
	benefit[x][y]=c;
}
cout<<solve(0,19)<<endl;
}