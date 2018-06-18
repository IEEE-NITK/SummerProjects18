#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ull p,q,b,hcf;
        cin>>p>>q>>b;
        hcf=__gcd(p,q);
        p=p%q;
        q=q/hcf;
        while(b!=1)
        {
            b=__gcd(q,b);
            q=q/b;
        }
        if(q==1)
            printf("Finite\n");
        else
            printf("Infinite\n");
    }
}
