#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[4],mins=1000000000000LL;
	for(int i=0;i<4;i++)
	{
		cin>>a[i];
	}
	char s[3];
	for(int i=0;i<3;i++)
	{
		cin>>s[i];
	}
	sort(a,a+4);
	do
	{
		long long c=a[0];
		for(int i=0;i<3;i++)
		{
			if(s[i]=='+')c+=a[i+1];
			if(s[i]=='*')c*=a[i+1];
		}
		mins=min(c,mins);
		long long A,B,C;
		if(s[0]=='+')A=a[0]+a[1];else A=a[0]*a[1];
		if(s[1]=='+')B=a[2]+a[3];else B=a[2]*a[3];
		mins=min(mins,s[2]=='*' ? A*B : A+B);
	}while(next_permutation(a, a+4));
	cout<<mins;
	return 0;
}
