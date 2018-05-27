#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,num,l,r;
    cin>>n;
    while(n--)
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