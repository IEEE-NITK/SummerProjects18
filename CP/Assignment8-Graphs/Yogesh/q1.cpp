#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,deg;
    cin>>n;
    bool f=true;
    for(int i=0;i<n;i++)
    {
        cin>>deg;
        sum+=deg;
        if(deg==0)
            f=false;
    }
    if(sum==2*n-2&&f)
        cout<<"Yes";
    else
        cout<<"No";
}
