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

void mult(long long a[2][2],long long b[2][2] )
{   long long mul[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < 2; k++)
                mul[i][j] =((mul[i][j]%llp)+ ((a[i][k]%llp)*(b[k][j]%llp))%llp)%llp;
        }
    }
    REP(i,0,2)
    {
        REP(j,0,2)
        a[i][j]=mul[i][j];
    }
}

long long fun(long long n)
{   long long a[2][2]={{1LL,6LL},{0LL,0LL}};
    long long B[2][2]={{2LL,2LL},{1LL,3LL}};
    long long b[2][2]={{1LL,0LL},{0LL,1LL}};
    if(n==1)
    return 1;
    if(n==2)
    return 6;
    long long N;
    if(n%2)
    {

        N=n/2;
    }
    else N=(n/2)-1;
    //cout<<"N="<<N<<"\n";
    while(N>0)
    {   //cout<<"In while N="<<N<<"\n";
        if(N%2)
        {
            mult(b,B);
        }
        mult(B,B);

        N=N/2;
    }
    long long ans=((a[0][0]*(b[0][0]%llp))%llp+a[0][1]*(b[1][0]%llp)%llp)%llp;
    long long ans1=((a[0][0]*(b[0][1]%llp))%llp+a[0][1]*(b[1][1]%llp)%llp)%llp;
    if(n%2)
    {
        return ans;
    }
    else return ans1;

}
int main()
{
    long long t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<fun(n)<<"\n";
    }
    return 0;
}
