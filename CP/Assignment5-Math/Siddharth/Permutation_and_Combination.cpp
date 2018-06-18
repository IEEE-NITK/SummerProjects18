#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
typedef long long ll;
ll fac[1000001]={0};
ll fastfac(ll f)
{
  if(fac[f] != 0)
  {
      return fac[f];
  }
  else
  {
      for(int i=1;i<=f;i++)
        {
            fac[i]=(fac[i-1]*i)%M;
           // cout<<fac[i]<<" ";
        }
        //cout<<endl;
        return fac[f];
  }
}
ll fastexpo(ll base, ll p)
{
    if(p==0)
        return 1;
    if(p==1)
        return base;
    ll ret=1;
    while(p!=0)
    {
        if(p%2==1)
        {
            ret=((ret%M)*(base%M))%M;
        }
        base=((base%M)*(base%M))%M;
        p=p/2;
    }
    return ret;
}
int main()
{
    ll T,N,R;
    cin>>T;
    ll NPR,NCR,n,nr,NR,r;
    fac[0]=1;
    fac[1]=1;
    while(T--)
    {
        cin>>N>>R;
        NR=N-R;
        n=fastfac(N);
        //cout<<"n="<<n<<" ";
        nr=fastfac(NR);
        //cout<<"nr="<<nr<<" ";
        r=fastfac(R);
        //cout<<"r="<<r<<endl;
        NPR=((n%M)*(fastexpo(nr,M-2)%M))%M;
        //cout<<fastexpo(nr,M-2)<<endl;
        NCR=(((n % M)*(fastexpo(nr,M-2) % M) % M)*(fastexpo(r,M-2)%M))%M;
        cout<<NPR<<" "<<NCR<<endl;
    }
    return 0;
}
