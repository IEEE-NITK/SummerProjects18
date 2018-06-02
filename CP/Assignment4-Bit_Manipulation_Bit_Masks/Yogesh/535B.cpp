#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n,nd=0,base=1,bin=0;
    while(temp>0)
    {
        if(temp%10==7)
            bin+=base;
        nd++;
        temp=temp/10;
        base*=2;
    }
    int sum=0;
    sum+=(1<<nd)-2+bin+1;
    cout<<sum;

}
