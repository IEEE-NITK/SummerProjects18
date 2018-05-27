#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2,len,bth,pth;
    cin>>x1>>y1;
    cin>>x2>>y2;
    if(x1==x2)
        len=2;
    else
        len=abs(x1-x2)+1;
    if(y1==y2)
        bth=2;
    else
        bth=abs(y1-y2)+1;
    cout << 2*(len+bth);
    return 0;
}