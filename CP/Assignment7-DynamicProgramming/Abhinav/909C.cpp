#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007;

int main()
{
    ll n,i,j,k;
    cin>>n;
    char a[n+1];
    ll dp[5055];
    memset(dp,0,sizeof dp);
    dp[0] = 1;
    for(i=0;i<n;i++)
	{
        cin>>a[i];
    }
    for(i=n-1;i>=0;--i)
	{
        for(j=0;j<5050;++j)
		{
            if(a[i]=='f') dp[j] = dp[j+1];
            else dp[j+1] = (dp[j]%mod + dp[j+1]%mod)%mod;
        }
    }
    cout<<dp[0]<<endl;
    return 0;
}