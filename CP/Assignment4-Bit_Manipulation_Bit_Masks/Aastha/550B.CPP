#include<bits/stdc++.h>
using namespace std;
long long c[15];
int main()
{
    long long n,l,r,x,N,e1,e2,s,k,i,j,mask;
    cin>>n>>l>>r>>x;
    for(i=0;i<n;i++)
    {
        cin>>c[i];
    }
    sort(c,c+n);
    k=0;
    for( mask=0;mask<(1ll<<n);mask++)
    {s=0;
        for(j=0;j<n;j++)
        {
            if(mask&(1ll<<j))
            {
                if(s==0)
                {
                    e1=c[j];
                }
                s+=c[j];
                e2=c[j];
            }
        }
            if((s>=l && s<=r)&&((e2-e1)>=x))
            {
                k++;
            }
    }
    cout<<k<<endl;
    return 0;
}