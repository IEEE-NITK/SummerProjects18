#include<bits/stdc++.h>
using namespace std;
int main()


{   
	queue<int> q;
	int t, a;
	cin>>t;
	while(t--)
	{   
		cin>>a;
		switch(a)
		{
		   case 1: cout<<q.front()<<endl;
		            break;
		    case 2: cout<<q.back()<<endl;
		            break;
		    case 3: cin>>a;
		            q.push(a);
		            break;
		    case 4:q.pop();
		            break;
		    case 5: cout<<q.size()<<endl;
		            break;
	       }
	}   
	return 0;
}
