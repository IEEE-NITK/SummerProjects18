#include<bits/stdc++.h>
using namespace std;
main()
{
int i, s[100001]={0},x,n,t,res;
cin>>t;
while(t--)
{
cin>>n;
for(i=1;i<=n;i++)
{
cin>>x;
if (x==-1)
s[i]=s[i-1]+1;
else
s[i]=s[i-1];
}
res=1-s[1]+s[n]-s[1];
for(i=2;i<=n;i++)
res=min(res,i-s[i]+s[n]-s[i]);
cout<<res<<endl;
}
}