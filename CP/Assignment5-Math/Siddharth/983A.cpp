#include<bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
    int n;
    cin>>n;
    long long p,q,b, temp;
    while(n--)
    {
        cin>>p>>q>>b;
        while(( temp=__gcd(p,q))!= 1)
        {
            p/=temp;
            q/=temp;
        }
        while((b=__gcd(q,b))!= 1)
            q/=b;
        if (q==1)
            cout<<"Finite\n";
        else
            cout<<"Infinite\n";
    }
    return 0;
}

