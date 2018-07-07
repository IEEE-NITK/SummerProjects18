#include<bits/stdc++.h>
using namespace std;
long long dp[1<<19][19],benefit[19][19],a[19],m,n,k;
long long solve(int mask, int prev)
{
	if(__builtin_popcount(mask) == m)
	{	return 0;}

	if(dp[mask][prev] != -1)
	{	return dp[mask][prev];}

	long long ans = -1;
	int i;
	for(i=0; i<n; i++)
	{	if((mask & (1<<i)) == 0)
		{
		    ans = max(ans,a[i] + solve(mask | (1<<i), i) + benefit[prev][i]);
		}
	}
	return dp[mask][prev] = ans;
}
int main()
{
    long long x,y,c;
    int i;
    memset(benefit,0,sizeof(benefit));
    memset(dp, -1, sizeof(dp));
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<k;i++)
    {
        cin>>x>>y>>c;
        x--;
        y--;
        benefit[x][y]=c;
    }
    cout<<solve(0,18);
    return 0;
}