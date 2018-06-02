#include <iostream>
#include <cmath>
using namespace std;
main()
{
   int x1,y1,x2,y2,b,c;
   cin>>x1>>y1;
   cin>>x2>>y2;
   if(x2!=x1)
	c=abs(x2-x1)+1;
   else if(x1==x2)
	c=2;
   if(y1!=y2)
	b=abs(y2-y1)+1;
   else if(y1==y2)
	b=2;
   cout << 2*(b+c);
}

