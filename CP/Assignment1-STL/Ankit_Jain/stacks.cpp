#include<iostream>
#include<stack>
using namespace std;
main()
{
    stack<int>s;
	int Q, ch;
	cin>>Q;
	while(Q--)
	{
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<s.top()<<endl;
	          		break;
			case 2: int x;
					cin>>x;
					s.push(x);
					break;
			case 3: s.pop();
					break;
			case 4: cout<<s.size()<<endl;
		}
	
	}
}
