#include<bits/stdc++.h>
using namespace std;

int sum[51],ind[51];

int main()
{
    for(int i=1;i<=50;++i)
        sum[i] = i*(i+1)/2;
    for(int i=1;i<=50;++i)
        ind[i] = i;

    int n,temp,reqind;
    cin >> n;
    for(int i=1;i<=50;++i)
        if(n<=sum[i])
        {
            temp = sum[i];
            reqind = i;
            break;
        }
    int diff = temp - n;
    
    if(diff==0)
    {
        cout<<reqind<<endl;
        for(int k=1;k<=reqind;++k) cout<<ind[k]<<" ";
        cout<<endl;
        return 0;
    }
    cout<<reqind-1<<endl;
    for(int i=1;i<=reqind;++i)
    {
        if(i!=diff)
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}