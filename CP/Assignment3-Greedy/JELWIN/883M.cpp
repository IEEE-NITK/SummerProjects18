#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,x2,y1,y2;
	cin>>x1>>y1;
	cin>>x2>>y2;
	if((!(x1-x2))&&(!(y1-y2)))
	{
		cout<<0;
	}
	else if(!(y1-y2))
	{
		if(x1>x2)
		{
			cout<<8+2*(x1-x2-1);
		}
		else
		{
			cout<<8+2*(x2-x1-1);
		}
	}
	else if(!(x1-x2))
	{
		if(y1>y2)
		{
			cout<<8+2*(y1-y2-1);
		}
		else
		{
			cout<<8+2*(y2-y1-1);
		}
	}
	else
	{
		x1=x1-x2;
		if(x1<0)
			x1=-x1;
		y1=y1-y2;
		if(y1<0)
			y1=-y1;
		cout<<8+2*(x1+y1-2);
	}
	return 0;
}
