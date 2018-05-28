#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n;
    cin >> k;

    if(k==1)
    {
        cout << n << endl;
        return 0;
    }

    long long res = 1;
    while(res<=n)
    res <<= 1;

    cout<<res-1<<endl;

    return 0;
}