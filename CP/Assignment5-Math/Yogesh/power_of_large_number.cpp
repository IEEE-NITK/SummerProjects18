
#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
int fast_expo(int a,int b)
{
    long long ans=1,k=a;
    while(b>0)
    {
        if(b%2)
            ans=(ans*k)%m;
        b/=2;
        k=(k*k)%m;
    }
    return ans;
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        char A[100001],B[100001];
        scanf("%s %s",A,B);
        long long base=0;
        int i=0;
        while(A[i])
        {
            base=(base*10)%m;
            base+=A[i]-'0';
            i++;
        }
        i=0;
        long long ans=1;
        while(B[i])
        {
            ans=fast_expo(ans,10);
            ans=(ans*fast_expo(base,B[i]-'0'))%m;
            i++;
        }
        cout<<ans<<endl;
    }
}
