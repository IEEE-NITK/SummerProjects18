#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <b; i++)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define llp 1000000007
long long f[1000001]={0};
long long A=2;
long long facto(long long a)
{  // cout<<"In facto function\n";
    if(f[a]!=0)
    {//cout<<"In if block Returning f["<<a<<"]="<<f[a]<<"\n";
        return f[a];
    }
    else {  //cout<<"In facto else\n";
            while(A<=a)
            {   //cout<<"In facto while A="<<A<<"\n";
                f[A]=((A%llp)*(f[A-1]%llp))%llp;
                A++;
            }
            //f[a]=((a%llp)*(facto(a-1)%llp))%llp;
           // cout<<"In else block Returning f["<<a<<"]="<<f[(int)a]<<"\n";
            return f[a];
    }
}
long long power(long long a, long long b)
{   //cout<<"a="<<a<<" powr b="<<b<<"==";
    if(b==0)
    return 1;
    if(b==1)
    {
        return a;
    }
    long long ret=1;
    while(b!=0)
    {
        if(b%2)
        {
            ret=((ret%llp)*(a%llp))%llp;
        }
        a=((a%llp)*(a%llp))%llp;
        b/=2;
    }
    //cout<<ret<<"\n";
    return ret;
}
int main()
{   ios::sync_with_stdio(false);
    int t;
    f[0]=1;
f[1]=1;
    cin>>t;
    long long n,r,nfact, rfact,nrfact,N,R,NR,NCR,NPR;
    while(t--)
    {   nfact=1;
        rfact=1; nrfact=1;
        cin>>n>>r;
        N=n,R=r;
        NR=(n-r);
        nfact=facto(N);
       // cout<<"Nfact="<<nfact<<"\n";
       rfact=facto(R);
       // cout<<"Rfact="<<rfact<<"\n";
       nrfact=facto(NR);
       // cout<<"Nrfact="<<nrfact<<"\n";
        NCR=(((nfact%llp)*((power(rfact,llp-2))%llp))%llp*((power(nrfact,llp-2))%llp) )%llp;
        NPR=((NCR%llp)*(rfact%llp))%llp;
        cout<<NPR<<" "<<NCR<<"\n";
    }
    return 0;
}
