#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long n,l,r,num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
     num=l;
     while((num|(num+1))<=r)
     {
     num|=num+1;
     }
       cout<<num<<endl;
    }

    return 0;
}