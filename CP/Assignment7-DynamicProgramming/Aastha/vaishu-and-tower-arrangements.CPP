#include<iostream>
using namespace std;
int main()
{
    long long t,n,a[100000],s[100000],i,ans;
    cin>>t;
    while(t--)
    {s[100001]={0};
        cin>>n;
        ans=n+1;
        s[0]=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]==-1)
            {
                s[i]=s[i-1]+1;
            }
            else
            {
                s[i]=s[i-1];
            }
        }
        for(i=1;i<n;i++)
        {
            ans=min(ans,(i-s[i])+(s[n]-s[i]));
        }
        cout<<ans<<endl;
    }
}