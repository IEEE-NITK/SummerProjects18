#include<bits/stdc++.h>
using namespace std;
main()
{
	deque<int>dq;
	int Q,ch,x,y;
	cin>>Q;
	while(Q--)
	{
		cin>>ch;
		if (ch==1)
		{
			cout<<dq.front()<<endl;
		}
		else if (ch==2)
		{
			cout<<dq.back()<<endl;
		}
		else if (ch==3)
		{
			cin>>x;
			dq.push_front(x);
		} 
		else if (ch==4)
		{
			cin>>x;
			dq.push_back(x);
		}
		else if(ch==5)
		{
			dq.pop_front();
		}
		else if (ch==6)
		{
			dq.pop_back();
		}
		else if (ch==7)
		{
			cout<<dq.size()<<endl;
		}
	}
}
