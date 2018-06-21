#include<bits/stdc++.h>
#define MAX 20

using namespace std;
typedef long long int ll ;

long long dp[(1<<MAX)][MAX];
int benefit[MAX][MAX];
int s[MAX];
long long get_max(int mask, int prev, int m, int n)
{
    if(__builtin_popcount(mask)==m)
        return 0;

    if(dp[mask][prev]!=-1)
        return dp[mask][prev];

    long long ans=-1;
    for(int i=0;i<n;i++)
        if((mask & (1<<i))==0)
        ans=max(ans,get_max(mask|(1<<i), i, m, n)+ s[i]+ benefit[prev][i]);

    dp[mask][prev]=ans;
    return ans;



}

int main()
{
    memset(dp,-1,sizeof(dp));
    int n,m,k,x,y,c;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<k;i++)
    {
        cin>>x>>y;
        cin>>c;
        benefit[x-1][y-1]=c;
    }
    cout<<get_max(0,19,m,n);
}
