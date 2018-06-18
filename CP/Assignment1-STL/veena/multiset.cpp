#include<bits/stdc++.h>

using namespace std;

int main()

{
multiset<pair<int,pair<int,int>>>p;

multiset<pair<int,pair<int,int>>>::iterator it;

int x,y,z,q,c;

cin>>q;
	
while(q--)
	
{
		cin>>c;
	
   switch(c)
   
	  {
		case 1:cin>>x>>y>>z;

		           p.insert(make_pair(x,make_pair(y,z)));
 
          break;

		case 2:i=p.begin();

  		        cout<<"("<<it->first<<",("<<it->second.first<<","<<it->second.second<<"))"<<endl;

          break;
    
		case 3:p.erase(p.begin());

          break;
   
 		case 4:for(it=p.begin();it!=p.end();++it)
 	
		         cout<<	"("<<it->first<<",("<<it->second.first<<","<<it->second.second<<"))";
   
				       cout<<endl;
  
      	  break;
    
		case 5:cout<<p.size()<<endl;

          break;
   
	  }
	}

return 0;

}
