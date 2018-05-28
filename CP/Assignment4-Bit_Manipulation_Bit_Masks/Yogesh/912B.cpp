#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a,b,temp;
    int cnt=0;
    cin>>a>>b;
    temp=a;
    while(temp>0)
    {
        temp/=2;
        cnt++;
    }
    if(b==1)
        cout<<a;
    else
        cout<<(1ll<<cnt)-1;

}
