#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x1, x2, y1, y2,a,b;
    cin>>x1>>y1>>x2>>y2;
    int ans;
    if(x1==x2 || y1==y2)
    {
        a=abs(x1-x2)+1;
        b=abs(y1-y2)+2;
        ans=2*(a+b);
    }
    else
    {
        a=abs(x1-x2)+1;
        b=abs(y1-y2)+1;
        ans=2*(a+b);
    }
    cout<<ans;

    return 0;
}
