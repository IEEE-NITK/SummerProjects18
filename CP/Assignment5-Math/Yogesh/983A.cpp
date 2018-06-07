#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        ull x,y,b,hcf;
        scanf("%llu %llu %llu",&x,&y,&b);
        hcf=__gcd(x,y);
        x=x%y;
        x=x/hcf;
        y=y/hcf;
        while(b!=1)
        {
            b=__gcd(y,b);
            y=y/b;
        }
        if(y==1)
            printf("Finite\n");
        else
            printf("Infinite\n");
    }
}
