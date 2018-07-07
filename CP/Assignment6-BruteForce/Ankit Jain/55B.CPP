#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,flag=0;
long long t,m=0,n[4],t1,t2;
char s[3];
for(i=0;i<4;i++)
cin>>n[i];
for(i=0;i<3;i++)
cin>>s[i];
do
{
t=n[0];
for(i=0;i<3;i++)
if (s[i]=='+')
t+=n[i+1];
else
t*=n[i+1];
if ((flag++)==0)
m=t;
t1=(s[0]=='+'?n[0]+n[1]:n[0]*n[1]);
t2=(s[1]=='+'?n[2]+n[3]:n[2]*n[3]);
t=min(t,s[2]=='+'?t1+t2:t1*t2);
if (t<m)
m=t;
}while(next_permutation(n,n+4));
cout<<m<<endl;
}