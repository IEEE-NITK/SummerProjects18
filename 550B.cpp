//http://codeforces.com/contest/550/submission/38615540
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,l,r,x,ans=0,maxi=0,mini=1000000001,sum=0;
    cin>>n>>l>>r>>x;
    long long a[n];
    int i,j;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<(1<<n);i++)
    {
        for(j=0;j<n;j++)
        {
            if(i&(1<<j))
            {   if(maxi<a[j])
                maxi=a[j];
                if(mini>a[j])
                mini=a[j];
                sum+=a[j];
            }
        }  
        if(sum>=l&&sum<=r&&(maxi-mini)>=x)
        ans++;
        
        sum=0;
        maxi=0;
        mini=1000000001;
    }cout<<ans;
}
