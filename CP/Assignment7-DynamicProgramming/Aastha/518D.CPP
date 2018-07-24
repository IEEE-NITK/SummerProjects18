#include<bits/stdc++.h>
using namespace std;
double dp[2009][2009];
int main()
{
    long long n,t,i,j;
    double p;
    cin>>n>>p>>t;
    memset(dp,0,sizeof(dp));
    for( j=1; j<2009; j++)
    {	for( i=1; i<2009; i++)
	     {
	         dp[i][j] = (1-p)*dp[i][j-1]  +  p*dp[i-1][j-1] + p;
	     }
    }
cout<<setprecision(9)<<fixed<<dp[n][t];
}