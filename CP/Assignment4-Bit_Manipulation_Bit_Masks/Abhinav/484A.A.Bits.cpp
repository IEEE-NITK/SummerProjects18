#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,l,r,max,setbits;
    cin >> n;
    for(long long i=0;i<n;++i)
    {
        cin >> l;
        cin >> r;

        while((l|(l+1))<=r)
        l|=l+1;

        cout << l <<endl;
    }
    return 0;
}