#include<bits/stdc++.h>
#include<cmath>
using namespace std;
main()
{
	int x1,x2,y1,y2;
	cin>>x1>>y1;
	cin>>x2>>y2;
	if (x1!=x2 && y1!=y2)
		cout<<(2*(abs(x1-x2)+abs(y1-y2)+2));
	else if (x1==x2 && y1!=y2)
		cout<<(2*(abs(y1-y2)+3));
	else
		cout<<(2*(abs(x1-x2)+3));
}