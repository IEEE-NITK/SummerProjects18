#include <iostream>
using namespace std;
#include <cmath>
int main()
{
	int x1,x2,y1,y2,a,b;
   	cin>>x1>>y1>>x2>>y2;
   	if(x2==x1 || y2==y1)
    {	a=abs(x2-x1)+1;
	    b=abs(y2-y1)+2;     }
	else 
    {    a=abs(x2-x1)+1;
        b=abs(y2-y1)+1;     }
	cout << 2*(a+b)<<endl;
}
