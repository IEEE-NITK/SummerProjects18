#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long m=pow(10,9)+7;
long long fastexp(long long a,long long b)
{
    long long ret=1;
    while(b)
    {
        if(b%2==1)
            ret=(ret*a)%m;
        a=(a*a)%m;
        b/=2;
    }
    return ret;
}
int main() {
    vector<long long>fun(1000001);
   int it;
    fun[0]=1;
    for(it=1;it<1000001;it++)
    {
        fun[it]=(it*fun[it-1]%m)%m;
    }
     long long n,r,t,p,c,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>n>>r;
        x=fun[n];
        y=fun[n-r];
        z=fun[r];
        c=(((x%m)*((fastexp(y,m-2))%m))%m*(fastexp(z,m-2))%m)%m;
        p=((c%m)*(z%m))%m;
        cout<<p<<" "<<c<<endl;
    }
    return 0;
}