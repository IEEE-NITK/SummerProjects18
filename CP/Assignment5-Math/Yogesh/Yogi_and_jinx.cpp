#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
void matrix_mul(int a[][2],int b[][2])
{
    int mul[2][2];
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
    {
        mul[i][j]=0;
        for(int k=0;k<2;k++)
        {
            mul[i][j]=(mul[i][j]+((long long)a[i][k]*b[k][j])%m)%m;
        }
    }
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            a[i][j]=mul[i][j];
}
int matrix_exp(int n)
{
    int f[2][2]={{1,2},{1,0}},ans[2][2]={{1,0},{0,1}};
    while(n>0)
    {
        if(n%2)
            matrix_mul(ans,f);
        n/=2;
        matrix_mul(f,f);
    }
    return ((long long)ans[0][0]*6+ans[0][1])%m;
}
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        if(n==1)
            cout<<1<<endl;
        else
            cout<<matrix_exp(n-2)<<endl;
    }
}
