#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    int c[n],e[2]={0};
    for(int i=0;i<n;i++)
    {
        int z;
        cin>>z;
        c[i]=z;
    }
    sort(c,c+n);
    int ans=0;
    for(int mask=0;mask<((1<<n));mask++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(mask&(1<<j))
                {
                    if(sum==0)
                        e[0]=c[j];
                    sum+=c[j];
                    e[1]=c[j];
                }
        }
        if((sum>=l && sum<=r)&&((e[1]-e[0])>=x))
        {
            ans++;
        }
    }
    cout<<ans;
}
