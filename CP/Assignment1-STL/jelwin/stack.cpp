#include <bits/stdc++.h>
using namespace std;
int main()
{
	stack<int>s;
	int a,b;
	cin>>a;
	cout<<endl;
	while(a--)
	{
		cin>>b;
		switch(b)
		{
			case 1: cout<<s.top()<<endl;
				break;
			case 2: cin>>b;
				s.push(b);
				break;
			case 3:	s.pop();
				break;
			case 4:	cout<<s.size()<<endl;
				break;
		}
	}
}
			
