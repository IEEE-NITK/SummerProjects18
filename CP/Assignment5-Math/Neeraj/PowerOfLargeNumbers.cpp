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

long long calmod(string a, int n)
{   long long ret=0;
    ret=(a[0]-'0');
    REP(i,1,a.size())
    {   //cout<<"a["<<i<<"]="<<a[i]<<"\n";
        ret=((ret%n)*10)%n+ ((a[i]-'0'))%n;
        //cout<<"ret="<<ret<<"\n";
    }
    return ret;
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
    cin>>t;
    string a, b;
    long long A,B;
    long long ans;
    while(t--)
    {
        cin>>a>>b;
        A=calmod(a,llp);
        //cout<<"A="<<A<<"\n";
        B=calmod(b,llp-1);
        //cout<<"B="<<B<<"\n";
        ans=power(A,B);
        cout<<ans<<"\n";


    }

    return 0;
}
