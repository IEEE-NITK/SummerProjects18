#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,temp,l,r;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
     temp=l;
     while((temp|(temp+1))<=r)
     {
     temp|=temp+1;
     }
       cout<<temp<<endl;
    }

    return 0;
}
