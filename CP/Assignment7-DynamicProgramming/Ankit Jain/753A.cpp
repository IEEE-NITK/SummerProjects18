#include<bits/stdc++.h>
using namespace std;
main()
{
int n,sum[50]={0},i,j,d;
cin>>n;
for(i=1;i<50;i++)
sum[i]=i*(i+1)/2;
for(i=1;i<50;i++)
if (n<=sum[i])
break;
d=sum[i]-n;
if (d==0)
{
cout<<i<<endl;
for(j=1;j<=i;j++)
cout<<j<<" ";
}
else
{
cout<<i-1<<endl;
for(j=1;j<=i;j++)
if(j!=d)
cout<<j<<" ";
}
}
