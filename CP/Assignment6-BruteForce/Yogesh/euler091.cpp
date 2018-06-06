#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,n;
    cin>>n;
    cnt+=3*n*n;
    for(int x=1;x<=n;x++)
        for(int y=1;y<=n;y++)
    {
        int temp=__gcd(x,y);
        cnt+=2*min(x*temp/y,(n-y)*temp/x);
    }
    cout<<cnt;
}
