#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    if(((abs(x2-x1)== 1) && (abs(y2-y1)==0))||((abs(x2-x1)== 0) && (abs(y2-y1)==1))||((abs(x2-x1)== 1) && (abs(y2-y1)==1)))
    {
        cout<<8;
    }
     else
    {
        int X1,X2,Y1,Y2,ans=0;
        X1=abs(x2-1-x1);
        X2=abs(x2+1-x1);
        Y1=abs(y2-1-y1);
        Y2=abs(y2+1-y1);
        if(X1<X2)
            ans=6+2*X1;
        else
            ans=6+2*X2;
        if(x1==x2||y1==y2)
            if(Y1 < Y2)
                ans+=2*Y1;
            else
                ans+=2*Y2;
        else
            ans+=Y1+Y2;
        cout<<ans;
    }
}



