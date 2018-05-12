
#include <bits/stdc++.h>
using namespace std;
int main()
{
	deque<int>d;
	deque<int>:: iterator it;
	int a,b,c;

	cin>>a;
	while(a--)
	{
		cin>>b;
		switch(b)
		{
			case 1:	cout<<d.front()<<endl;
				break;
			case 2:
				cout<<d.back()<<endl;
				break;
			case 3:
				cin>>c;d.push_front(c);
				break;
			case 4:
				cin>>c;
				d.push_back(c);
				break;
			case 5:	d.pop_front();
				break;
			case 6:	d.pop_back();
				break;
			case 7:	cout<<d.size()<<endl;
				break;	
		}		
	}	
}
