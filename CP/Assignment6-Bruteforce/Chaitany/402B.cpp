#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;
    int arr[n];int arr1[n];
    int time[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<1000;j++)
    {int ti=0;
        for(int t=1;t<n;t++)
        {
            if(arr[t]!=j+k*t)
                ti+=1;
        }
        time[j]=ti;

    }
    sort(time,time+1000);
    cout<<time[0]<<endl;
}
