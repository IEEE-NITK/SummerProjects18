#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector< vector<bool> > v(1001,vector<bool>(1001,false));
    vector<int> cnt(1001,-1);
    v[1][1]=true;
    cnt[0]=0,cnt[1]=1;
    int sum;
    cin>>sum;
    for(int i=2;i<=sum;i++)
    {
        int max_c=-100,prev_st;
        for(int j=1;j<=i;j++)
            if(v[i-j][j]==false)
            {
                if(cnt[i-j]>max_c){
                    max_c=cnt[i-j];
                    prev_st=i-j;
                }
            }
        cnt[i]=max_c+1;
        v[i][i-prev_st]=true;
        for(int j=1;j<=prev_st;j++)
            if(v[prev_st][j])
            v[i][j]=true;

    }
    cout<<cnt[sum]<<endl;
    for(int i=1;i<=sum;i++)
        if(v[sum][i]==true)
        cout<<i<<" ";
}
