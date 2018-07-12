#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int deg_sum=0;
   for(i=0;i<n;i++)
   {
       deg_sum+=a[i];
   }
    if((2*(n-1))==deg_sum)
    {
        cout<<"Yes"<<endl;
    }
    else 
    {
        cout<<"No"<<endl;
    }
}