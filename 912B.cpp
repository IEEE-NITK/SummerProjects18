//http://codeforces.com/contest/912/submission/38600529
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    if(k==1)
    cout<<n;
    else
    {
        long long ans=1;
        while(ans<=n)
        {
            ans=ans<<1;
        }
        ans-=1;
        cout<<ans;
    }
    return 0;
}
