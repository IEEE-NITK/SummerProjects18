#include<bits/stdc++.h>
using namespace std;
long long m= pow(10,9)+7;
long long expo(long long x,long long y)
{
if(y==0)
	return 1;
else if(y==1)
	return x%m;
else
{
	long long temp=(x*x)%m;
	if(y%2==0)
		return expo(temp,y/2);
	else
		return ((x*expo(temp,(y-1)/2))%m);
}
}
long long integer(string a, long long m)
{
	long long temp=0;
	for(int i=0;i<a.size();i++)
		temp= (((temp%m)*10)+(a[i]-'0'))%m;
	return temp;
}
main()
{
	int t;
	long long x,y,ans;
	string a,b;
	cin>>t;
	while(t--)
	{
	cin>>a>>b;
	x=integer(a,m);
	y=integer(b,m-1);
	ans=expo(x,y);
	cout<<ans<<endl;	
	}
}