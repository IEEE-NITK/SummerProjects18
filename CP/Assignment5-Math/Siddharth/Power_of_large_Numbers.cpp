#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 1000000007
ll fastexpo(ll base, ll p)
{
    if(p == 0)
        return 1;
    else if(p == 1)
        return base%M;
    else
    {
       ll res=1;
       while(p != 0)
       {
           if(p % 2 == 1)
                res=((res%M)*(base%M))%M;
           base=((base%M)*(base%M))%M;
           p/=2;
       }
       return res;
    }
}
ll strtx(string s,int m)
{   ll x=0;
    for(int i=0;i<s.size();i++)
        x=((x%m)*10) + (s[i]-'0')%m;
    return x;
}
int main()
{
    int T;
    string A,B;
    ll a,b,ans;
    cin>>T;
    while(T--)
    {
        cin>>A>>B;
        //cout<<A<<" "<<B<<"\n";
        a=strtx(A,M);
        b=strtx(B,M-1);
        ans=fastexpo(a,b);
        cout<<ans<<endl;
    }
}
