#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define M 1000000007
int main()
{
	string s;
	cin>>s;
	int min=0,c=0,i;
	for(i=s.size()-1 ; i>=0 ; i--)
	{
		if(s[i]=='b')
			c=(c+1)%M;
		else
		{
			min = (((min%M)+(c%M))%M);
			c=(c*2)%M;
		}
	}
	cout<<min<<endl;
}