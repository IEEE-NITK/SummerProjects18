#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long v,c,b,hcf;
        cin>>v>>c>>b;
        hcf=__gcd(p,q);
        v=v%c;
        c=c/hcf;
        while(b!=1)
        {
            b=__gcd(c,b);
            c=c/b;
        }
        if(c==1)
            cout << "Finite" << endl;
        else
            cout << "Infinite" << endl;
    }
}