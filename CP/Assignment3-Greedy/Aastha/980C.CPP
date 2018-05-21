#include<bits/stdc++.h>
using namespace std;
int p[100000];
int main()
{
    int n,k,i,c,key;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(i=0;i<n;i++)
    {
        c=p[i]/k;
        key=k*c;
        cout<<key<<" ";
    }
    cout<<endl;
    return 0;
}