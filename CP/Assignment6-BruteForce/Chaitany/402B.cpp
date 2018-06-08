#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;
    int arr[n];pair <int,int> p[1001]={make_pair(10000,1000)};
    int time[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=1;j<=1000;j++)
    {int ti=0;

        for(int t=0;t<n;t++)
        {
            if(arr[t]!=j+k*t)
                ti+=1;
        }
        p[j].first=ti;
        p[j].second=j;

    }
    sort(p,p+1001);
    int x=p[0].second;
    cout<<p[0].first<<endl;
    if(arr[0]<x)
            cout<<"+ "<<1<<" "<<(x)-arr[0]<<endl;
        if(arr[0]>x)
            cout<<"- "<<1<<" "<<-((x)-arr[0])<<endl;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<x+k*i)
        {
            cout<<"+ "<<i+1<<" "<<(x+k*i)-arr[i]<<endl;
        }
        if(arr[i]>x+k*i)
            cout<<"- "<<i+1<<" "<<-((x+k*i)-arr[i])<<endl;
    }
}
