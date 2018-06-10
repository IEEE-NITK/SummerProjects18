#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll m=1000000007;
ll fast_expo(ll x,ll n)
{
    ll result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=(result * x)%m;
        x=(x*x)%m;
        n=n/2;
    }
    return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll t;
    cin>>t;
    vector<int> fact(1000001);
    fact[0]=1;
    for(int i=1;i<=1000000;i++)
    {
        fact[i]=((long long)i*fact[i-1])%m;
    }
    while(t--)
    {
        ll n,r;
        cin>>n>>r;
        ll N=fact[n];
        //cout<<N<<endl;
        ll R=fact[r];
        //cout<<R<<endl;
        ll nr=fact[n-r];
        //cout<<nr<<endl;
        //cout<<(fast_expo(R%m,m-2))%m<<endl;
        ll ncr=(((N%m)*((fast_expo(R,m-2))%m))%m*((fast_expo(nr,m-2))%m) )%m;
        ll npr=((ncr%m)*(R%m))%m;
        cout<<npr<<" "<<ncr<<endl;
    }
    return 0;
}
