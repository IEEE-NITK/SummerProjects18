#include<bits/stdc++.h>
using namespace std;

double dp[2005][2005];
int main()
{
    int n,t;
    double p;
    cin>>n>>p>>t;
    for(int j=1;j<2005;j++)
        for(int i=1;i<2005;i++)
        dp[i][j]=p*(dp[i-1][j-1]+1.0)+(1.0-p)*dp[i][j-1];

    cout<<setprecision(10)<<fixed<<dp[n][t];
}
