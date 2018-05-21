#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2,l,b,p;
    cin>>x1>>y1;
    cin>>x2>>y2;
    if(x1<x2)
    {
        l=x2-x1+1;
    }
    else if(x1>x2)
    {
        l=x1-x2+1;
    }
    else
    {
        l=2;
    }
    if(y1<y2)
    {
        b=y2-y1+1;
    }
    else if(y1>y2)
    {
        b=y1-y2+1;
    }
    else
    {
        b=2;
    }
    p=2*(l+b);
    cout<<p;
}