#include<bits/stdc++.h>
#define m 1000000007
typedef long long ll;
using namespace std;
vector< vector<ll> >dp(5005,vector<ll>(5005,0));
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a,b,k,p;
    ll sum;
    cin>>n>>a>>b>>k;
    dp[a][0]=1;
    for(int i=1;i<=n;i++)
        dp[i][0]=dp[i][0]+dp[i-1][0];
    for(int j=1;j<=k;j++){
        for(int i=1;i<=n;i++)
        {
            if(i>b)
            {
                p=(b+i)/2+1;
                sum=(dp[n][j-1]-dp[p-1][j-1]);
                if(i>=p)
                    sum=sum-(dp[i][j-1]-dp[i-1][j-1]);
                dp[i][j]=sum%m;
            }
            else if(i<b)
            {
                p=(int)ceil((b+i)/2.0)-1;
                sum=dp[p][j-1];
                if(i<=p)
                    sum=sum-(dp[i][j-1]-dp[i-1][j-1]);
                dp[i][j]=sum%m;
            }
            dp[i][j]=dp[i][j]+dp[i-1][j];
        }
    }

    cout<<dp[n][k]%m;

}
