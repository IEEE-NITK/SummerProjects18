#include<bits/stdc++.h>
using namespace std;
double dp[2001][2001],p;
main()
{
memset(dp,0,sizeof(dp));
int n,i,j,t;
cin>>n>>p>>t;
for(int i=1;i<=n;i++)
	for(int j=1;j<=t;j++)
		dp[i][j]=p*dp[i-1][j-1]+dp[i][j-1]*(1-p)+p;
printf("%0.6f",dp[n][t]);
}