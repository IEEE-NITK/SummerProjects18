#include<bits/stdc++.h>
using namespace std;
main()
{
int n,l,r,x,i=0,flag=0,sum=0,a1,a2;
long a[15];
cin>>n>>l>>r>>x;
for(i=0;i<n;i++)
	cin>>a[i];
sort(a,a+n);
for(int mask=0; mask<(1ll<<n); mask++)
{
	sum=0;
	for(int j=0; j<n; j++)
			if(mask & (1ll<<j))
			{
				if (sum==0)
					a1=a[j];
				sum+=a[j];
				a2=a[j];
			}	
	if ((sum>=l && sum<=r) && ((a2-a1)>=x))
				flag++;
}
cout<<flag<<endl;
}