#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long max,i,n,k,a=0,b=0;
	cin>>n>>k;
	max=0;
		
	if (k<=n)
	{	
		if (k==1)
		{
			max=n;
		}
		else
		{
			for (int i = 0; i <64; ++i)
			{
				if (n&(1ll<<i))
				{
					a++;
				}
			}
			for (int i = 0; i <64; ++i)
			{
				if (a>0)
				{
					if(n&(1ll<<i))
					{
						a--;
					}
					b++;
				}
			}
			for (int i = 0; i <b; ++i)
			{
				max+=(1ll<<i);
			}
		}
	}
cout<<max<<endl;
return 0;
}