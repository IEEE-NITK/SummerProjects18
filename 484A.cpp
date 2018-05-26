//http://codeforces.com/contest/484/submission/38625519
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    long long l,r,max,o,q;
    cin>>q;
    while(q--)
    {   
        cin>>l>>r;
        max=l;
        int x=0;

        while(max<=r && x<=62)
        { 
            if((l&(1LL<<x))==0)
            { 	o=max|1ll<<x;
                if(o<= r)
                {
                    max=max|(1LL<<x);
                }
            }
            x++;
        }
        cout<<max<<endl;

    }
    return 0;}
