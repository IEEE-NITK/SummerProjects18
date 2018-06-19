#include<bits/stdc++.h>
using namespace std;
long long m=pow(10,9)+7;
long long fastexp(long long a,long long b)
{
    long long temp;
    if(b==0)
    return 1;
    else if(b==1)
    return a%m;
    else
    {
        temp=fastexp(a%m,b/2);
        if(b%2==0)
        return (temp%m * temp%m)%m;
        else
        return (((temp%m * temp%m)%m)*a%m)%m;
    }
}
long long cal(string a, long long m)
{
    long long x=0,i;
    for(i=0;i<a.size();i++)
    {
        x=((x%m)*10 + (a[i]-'0')%m);
    }
    return x;
}
int main()
{
    string a,b;
    long long t,ans,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        x=cal(a,m);
        y=cal(b,(m-1));
        ans=fastexp(x,y);
        cout<<ans<<endl;
    }
}