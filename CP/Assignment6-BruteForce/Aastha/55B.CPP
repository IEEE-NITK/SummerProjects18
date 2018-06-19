#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[4],i;
    char s[3];
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++)
    {
        cin>>s[i];
    }
    sort(a,a+4);
    if((a[0]==0 || a[1]==0 || a[2]==0 || a[3]==0)&&(s[0]=='*' || s[1]=='*' || s[2]=='*'))
    {
        cout<<"0"<<endl;
        goto lable;
    }
    if(s[0]=='*' && s[1]=='*' && s[2]=='*')
    {
        cout<<a[0]*a[1]*a[2]*a[3]<<endl;
    }
    else if(s[0]=='+' &&s[1]=='+' && s[2]=='+')
    {
        cout<<a[0]+a[1]+a[2]+a[3]<<endl;
    }
    else if((s[0]=='+' && s[1]=='+' && s[2]=='*'))
    {
        cout<<(a[1]+a[2]+a[3])*a[0]<<endl;
    }
    else if((s[0]=='+' && s[1]=='*' && s[2]=='+'))
    {
        cout<<(a[0]*a[1])+a[2]+a[3]<<endl;
    }
    else if((s[0]=='*' && s[1]=='+' && s[2]=='+'))
    {
        cout<<(a[0]*a[1])+a[2]+a[3]<<endl;
    }
    else if((s[0]=='*' && s[1]=='*' && s[2]=='+'))
    {
        cout<<((a[0]*a[3])+(a[1]*a[2]))<<endl;
    }
    else if((s[0]=='*' && s[1]=='+' && s[2]=='*'))
    {
        cout<<((a[1]*a[2])+a[3])*a[0]<<endl;
    }
    else if(s[0]=='+' && s[1]=='*' && s[2]=='*')
    {
        cout<<(a[2]+a[3])*a[0]*a[1]<<endl;
    }
    lable:
    return 0;
}