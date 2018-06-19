#include<bits/stdc++.h>

using namespace std;

int main()

{
deque<int>d;

int x,q,c;

cin>>q;

	while(q--)

	{
		cin>>c;

		switch(c)
		{
		case 1:cout<<d.begin()<<endl;

	           break;

		case 2:cout<<d.end()<<endl;
	
          break;
    
		case 3:cin>>x;
		
          d.push_front(x);
	
          break;
    
		case 4:cin>>x;

		         d.push_back(x);
	
         break;
    
		case 5:d.pop_front();
	
          break;
    
		case 6:d.pop_back();

 	         break;
    
		case 7:cout<<d.size()<<endl;

	          break;
    
		
}
   
	}

return 0;

}

