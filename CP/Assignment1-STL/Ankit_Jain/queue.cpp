#include<iostream>
#include<queue>
using namespace std;
main()
{
    queue<int>q;
	int Q, ch;
	cin>>Q;
	while(Q--)
	{
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<q.front();
	          		break;
			case 2: cout<<q.back();
	        		break;
			case 3: int x;
					cin>>x;
					q.push(x);
					break;
			case 4: q.pop();
					break;
			case 5: cout<<q.size();
		}
	
	}
}
