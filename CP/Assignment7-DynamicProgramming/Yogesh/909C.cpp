#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector< vector<int> >dp (N,vector<int> (N,0));
    vector<char> s(N);
    for(int i=0;i<N;i++)
        cin>>s[i];
    dp[0][0]=1;
    for(int i=0;i<N-1;i++)
    {
        if(s[i]=='f')
        {
            dp[i+1][0]=0;
            for(int j=i+1;j>0;j--)
                dp[i+1][j]=dp[i][j-1];
        }
        if(s[i]=='s')
        {
            dp[i+1][N-1]=dp[i][N-1];
            for(int k=N-2;k>=0;k--)
                dp[i+1][k]=((long long)dp[i+1][k+1]+dp[i][k])%m;
        }

    }
    long long cnt=0;
    for(int j=0;j<N;j++)
        cnt=(cnt+dp[N-1][j])%m;

    cout<<cnt;
}
