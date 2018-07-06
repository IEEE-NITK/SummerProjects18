#include<iostream>
#include<cmath>
using namespace std;
main()
{
int n,k,h[1000],i,j,time=0,min=0,flag=0,p,pos;
cin>>n>>k;
int temp=1001-n;
for(i=0;i<n;i++)
cin>>h[i];
for(i=1;i<1001;i++)
{
time=0;
for(j=0,p=i;j<n;j++,p+=k)
if (h[j]-p)
time++;
if (!(flag++))
{min=time;
pos=i;
}
else
if (time<min)
{min=time;
pos=i;
}}
cout<<min<<endl;
for(j=0;j<n;j++,pos+=k)
{
if (temp=(pos-h[j]))
if (temp>0)
cout<<"+ "<<j+1<<" "<<temp<<endl;
else
cout<<"- "<<j+1<<" "<<abs(temp)<<endl;
}
}