#include<bits/stdc++.h>
using namespace std;
 int n,a[105][105];
 int dp[105][105];
int calc(int i,int j)
{
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    if(i==(n-1))
    {
        return a[n-1][j];
    }
        return dp[i][j]=max(calc(i+1,j),calc(i+1,j+1))+a[i][j];
}
int main()
{   int t,i,j;
    cin>>t;
    while(t--)
    {  memset(dp,-1,sizeof(dp));
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<calc(0,0)<<endl;
    }
}