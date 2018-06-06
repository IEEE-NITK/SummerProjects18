#include<bits/stdc++.h>
using namespace std;
#define m 1000000007

int fast_expo(int b)
{
    long long ans=1,base=b,p=1000000005;
    while(p>0)
    {
        if(p%2)
            ans=(ans*base)%m;
        p/=2;
        base=(base*base)%m;
    }
    return ans;
}
int main()
{
    int T;
    scanf("%d",&T);
    long long f=1;
    vector<int> fact(1000001);
    fact[0]=1;
    for(int i=1;i<=1000000;i++)
    {
        fact[i]=((long long)i*fact[i-1])%m;
    }
    while(T--)
    {
        int n,r;
        scanf("%d %d",&n,&r);
        long long perm,comb,f1,f2,f3;
        f1=fact[n],f2=fact[n-r],f3=fact[r];
        comb=(((f1*fast_expo(f2))%m)*fast_expo(f3))%m;
        perm=(f1*fast_expo(f2))%m;
        printf("%d %d\n",perm,comb);
    }
}
