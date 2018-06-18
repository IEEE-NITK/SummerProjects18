#include<bits/stdc++.h>

using namespace std;

int main()

{
 map<string,int>m;

map<string,int>::iterator it;

int x,y,q,c;

cin>>q;

	while(q--)

	{
		cin>>c;
	
  switch(c)

	    {
		case 1:cin>>x>>y;

	            m.insert(make_pair(x,y));

            	break;

	        case 2:cin>>x;

		   it=m.find(x);
	           cout<<m.find(x)->second;

	           cout<<endl;

    	        break;
		case 3:cin>>x;

     		     if((it=m.find(x))!=m.end())

	          cout<<"yes"<<endl;

		          else

		          cout<<"no"<<endl;

 	         break;

		case 4:for(it=m.begin();it!=m.end();++it)

	           cout<<"("<<it->first<<","<<it->second<<")";

        	   cout<<endl;

           	break;

    		}

   

	}

return 0;

}
