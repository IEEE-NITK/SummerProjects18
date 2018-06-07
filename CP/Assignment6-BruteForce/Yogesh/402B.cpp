#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,min_change=INT_MAX,first_h;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int height=1;height<=1000;height++)
    {
        int first=height,change=0;
        for(int j=0;j<n;j++)
        {
            if(first+k*j!=arr[j])
                change++;
        }
        if(change<min_change){
            min_change=change;
            first_h=first;
        }
    }
    cout<<min_change<<endl;
    for(int i=0;i<n;i++){
        if(first_h+i*k>arr[i])
            cout<<"+ "<<i+1<<" "<<first_h+i*k-arr[i]<<endl;
        else if(first_h+i*k<arr[i])
            cout<<"- "<<i+1<<" "<<abs(first_h+i*k-arr[i])<<endl;
    }
    return 0;
}
