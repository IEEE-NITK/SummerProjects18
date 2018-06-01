#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, i=1;
    cin >> n >> k;
    if(k==1)
    {
        cout << n << endl;
        return 0;
    }
    while(i<=n)
    i <<= 1;

    cout<<i-1<<endl;

    return 0;
}