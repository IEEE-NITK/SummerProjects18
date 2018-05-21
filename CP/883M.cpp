//http://codeforces.com/contest/883/submission/38473921
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int pthl,x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	if(x1==x2)
	{
	    pthl=2*abs(y1-y2)+2+4;
	}
	else if(y1==y2)
	{
	    pthl=2*abs(x1-x2)+2+4;
	}
	else
	{
	    pthl=2*(abs(x1-x2)+1)+2*(abs(y1-y2)+1);
	}
	cout<<pthl;
	return 0;
}
