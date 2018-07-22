#include<bits/stdc++.h>
using namespace std;
int t,n,dp[100][100],a[100][100],i,j;
int fun(int i, int j)
{
if (dp[i][j]!=-1)
	return dp[i][j];
if (i==(n-1))
	return dp[i][j]=a[i][j];
return dp[i][j]= max(fun(i+1,j), fun(i+1,j+1)) + a[i][j];
}
main()
{
cin>>t;
while(t--)
{
cin>>n;
memset(dp,-1,sizeof(dp));
for(i=0;i<n;i++)
for(j=0;j<=i;j++)
cin>>a[i][j];
cout<<fun(0,0)<<endl;
}
}