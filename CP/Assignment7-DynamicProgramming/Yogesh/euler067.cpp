#include<bits/stdc++.h>
using namespace std;

int dp[105][105];

int solve(int arr[][101],int n,int i,int j)
{
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(i==n-1)
        return arr[i][j];

    dp[i][j]=max(solve(arr,n,i+1,j),solve(arr,n,i+1,j+1))+arr[i][j];
    return dp[i][j];

}
int main() {

    int T;
    cin>>T;
    while(T--)
    {
        memset(dp,-1,sizeof(dp));
        int n;
        cin>>n;
        int arr[101][101];
        for(int i=0;i<n;i++)
            for(int j=0;j<=i;j++)
                cin>>arr[i][j];
        cout<<solve(arr,n,0,0)<<endl;
    }
    return 0;
}

