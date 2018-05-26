#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long l,r,m;
        cin>>l>>r;
        m=l;
        for(long long i=0;i<=62;i++)
        {
            if((m |((long long)1<<i)) <=r)
                m|=((long long)1<<i);
        }
        cout<<m<<endl;
    }
}
