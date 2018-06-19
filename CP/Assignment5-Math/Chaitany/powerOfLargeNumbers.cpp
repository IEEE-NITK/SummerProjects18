#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
long long fast_expo(long long a,long long b)
{

    if (b==0)
    {

        return 1;
    }
    else if (b==1)
    {

        return a%m;
    }
    else{
        if(b%2)
        {
            return (a*fast_expo((a%m*a%m)%m,(b-1)/2)%m)%m;
        }
        else
            return fast_expo((a%m*a%m)%m,b/2)%m;
    }
}
long long cal(string a,int n)
{
    long long ans=0;
    ans=a[0]-'0';
    for(int i=1;i<a.size();i++)
    {
        ans=(((ans%n)*10)%n+(a[i]-'0'))%n;
    }
        return ans;
}
int main()
{
    int t;
    long long x,y;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        x=cal(a,m);
        y=cal(b,m-1);
        long long ans=fast_expo(x,y);
        cout<<ans<<endl;
    }
}
