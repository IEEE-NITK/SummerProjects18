#include <bits/stdc++.h>
using namespace std;

//Your code here
int main()
{
	deque<int> dq;
	int q;
	scanf("%d",&q);
	while(q)
	{
		int ch;
		scanf("%d",&ch);
		
		if(ch==1)
		{
			cout<<dq.front()<<endl;
		}
		
		if(ch==2)
		{
			cout<<dq.back()<<endl;
		}
		
		if(ch==3)
		{
			int ele;
			scanf("%d",&ele);
			dq.push_front(ele);
		}
		
		if(ch==4)
		{
			int ele;
			scanf("%d",&ele);
			dq.push_back(ele);
		}
		
		if(ch==5)
		dq.pop_front();

		if(ch==6)
		dq.pop_back();
		
		if(ch==7)
		cout<<dq.size()<<endl;
	}
	return 0;
}
