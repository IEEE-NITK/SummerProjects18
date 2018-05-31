#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,t,max[100000];
    cin >> t;
    for(i=0;i<t;i++)
    {
        long long l,r,j;
        cin >> l >> r;
        max[i]=l;
        for(j=0;j<=62;j++)
        {
            if((max[i] |((long long)1<<j)) <=r)
                max[i]|=((long long)1<<j);
        }
    }
    for(i=0;i<t;i++)
        cout << max[i] << endl;
    return 0;
}
