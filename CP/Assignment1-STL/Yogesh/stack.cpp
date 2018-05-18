#include<bits/stdc++.h>
using namespace std;
int main()
{
	int Q,x;
	stack <int> S;
	cin>>Q;
	while(Q--)
	{
	  int c;
	  cin>>c;
	  if(c==1)
	    cout<<S.top()<<endl;
	  else if(c==2)
	  {
	        cin>>x;
		S.push(x);
	  }
	  else if(c==3)
	  	S.pop();
	  else if(c==4)
		cout<<S.size()<<endl;
	}
	return 0;
}
