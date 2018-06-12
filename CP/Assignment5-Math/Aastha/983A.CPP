#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long n,p,q,b,t;
    cin>>n;
    while(n--)
    {
        cin>>p>>q>>b;
        t=__gcd(p,q);
        q/=t;
        p/=t;
        while((b=__gcd(q,b))!=1)
        { 
            q/=b;
        }
        if(q==1)
        cout<<"Finite"<<endl;
        else
        cout<<"Infinite"<<endl;
    }
    return 0;
}