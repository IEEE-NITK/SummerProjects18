#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int l,r,k;
    cin>>n;
    while(n--)
    {
        
        cin>>l>>r;
        k=l;
        for(int i=0;i<=62;i++)
        {
            if((k |(1ll<<i)) <=r)
                k|=(1ll<<i);
        }
        cout<<k<<"\n";
    }
}