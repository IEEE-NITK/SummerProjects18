#include<iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n,l,r,x,i,H,L,s,k=0;
	cin>>n>>l>>r>>x;
	int c[n];
	for(i=0;i<n;i++)
	{	cin>>c[i];	}
sort(c,c+n);
	
	
for(int mask=0; mask<(1<<n); mask++)

{
s=0;
	//Print subset corresponding to mask

	for(int j=0; j<n; j++)

	{	if(mask & (1<<j))

		{
			if(s==0)
			{	L=c[j];		}
			s+=c[j];
			H=c[j];
		}

	}
	if((s>=l && s<=r) && ((H-L)>=x))
	{		k++;	}
}			
cout<<k<<endl;
}
