#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector< vector<int> >arr(100001,vector<int>(31,0));
    int N,num,Q;
    cin>>N>>Q;
    for(int i=1;i<=N;i++)
    {
        cin>>num;
        int j=0;
        while(num>0)
        {
            arr[i][j]=num%2;
            num/=2;
            j++;
        }
    }

    for(int i=0;i<=30;i++)
    {
        for(int j=2;j<=N;j++)
        {
            arr[j][i]=arr[j-1][i]+arr[j][i];
        }
    }
    for(int i=0;i<Q;i++)
    {
        int a,b;
        cin>>a>>b;
        int ans=0,exp=1;
        for(int j=0;j<31;j++)
        {
            if(a!=1){
                if(2*(arr[b][j]-arr[a-1][j])<(b-a+1))
                 ans+=exp;
            }
            else if(a==1)
                if(2*arr[b][j]<b-a+1)
                 ans+=exp;
            exp*=2;
        }
        cout<<ans<<endl;

    }
}
