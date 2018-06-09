#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k,ans;
    while(cin>>n>>k)
    {
        ans=1;
        if(k==1)
        {
            cout<<n<<endl;
            return 0;
        }
        while(n)
        {
            n>>=1;
            ans<<=1;
        }
        cout<<ans-1<<endl;
    }
    return 0;
}
