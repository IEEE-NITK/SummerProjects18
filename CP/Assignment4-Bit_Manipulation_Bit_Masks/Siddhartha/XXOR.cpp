#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,Q,x;
    cin>>N>>Q;
    int A[N+1]={0};
    int prefixcnt[31][N+1];
    int binary[31][N+1];
    for(int i=1; i<=N; i++)
    {
        cin>>x;
        A[i]=x;
    }
    for(int i=0; i<31; i++)
        for(int j=1; j<=N; j++)
            binary[i][j] = (bool)(A[j] & (1<<i));

    for(int i=0; i<31; i++)
        prefixcnt[i][0] = 0;

    for(int i=0; i<31; i++)
        for(int j=1; j<=N; j++)
            prefixcnt[i][j] = prefixcnt[i][j-1] + binary[i][j];

   while(Q--)
   {
       int L,R;
       cin>>L>>R;
        int X=0;
    for(int i=0; i<31; i++)
    {
        int c1 = prefixcnt[i][R] - prefixcnt[i][L-1];
        int c0 = R-L+1 - c1;

        if(c0 > c1)
            X |= (1<<i);
    }
    cout<<X<<endl;
   }
}
