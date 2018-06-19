#include<bits/stdc++.h>

using namespace std;

int main()

{
 priority_queue<pair<int,pair<int,int>>>pq;

int x,y,z,q,c;

cin>>q;

	while(q--)

	  {
		cin>>c;
	
   switch(c)
	
   {
		case 1:cin>>x>>y>>z;
		
           pq.push(make_pair(x,make_pair(y,z)));

	           break;
		
case 2:cout<<"("<<pq.top().first<<",("<<pq.top().second.first<<","<<pq.top().second.second<<"))"<<endl;

	           break;
    
		case 3:pq.pop();

	           break;
    
		case 4:cout<<pq.size()<<endl;
	
           break;
	     }
   
	  }

  return 0;

}
