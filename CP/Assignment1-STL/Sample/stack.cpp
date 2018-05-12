#include <bits/stdc++.h>
using namespace std;

//Your code here
int main()
{
	int i,j,k;
	cin>>i;
	stack<int> l;
	while(i)
	{
		cin>>j;
		if(j==1)
		printf("%d\n",l.top());
	
		if(j==2)
		{cin>>k;
		l.push(k);
		}
	
		if(j==3)
		l.pop();
    
        if(j==4)
		cout<<l.size()<<endl;	
	
	    i--;
	}
return 0;
}
