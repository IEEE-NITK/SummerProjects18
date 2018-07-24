#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
int main()
{
    string str;
    cin>>str;
    long i,res=0,c=0;
    for(i=str.size()-1;i>=0;i--)
    {
        if(str[i]=='b')
        {
            c=(c%m)+1;
        }
        else
        {
            res=((res%m)+(c%m))%m;
            c=(c*2)%m;
        }
    }
    cout<<res<<endl;
}