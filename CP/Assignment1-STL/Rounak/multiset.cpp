#include <bits/stdc++.h>
using namespace std;
int main()
{
  multiset<pair<int,pair<int, int> > >ms;
  multiset<pair<int,pair<int, int> > >::iterator it;
  int n,i,c;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    cin>>c;
    switch(c)
    {
	case 1:
              int x,y,z;
              cin>>x>>y>>z;
              ms.insert(make_pair(x,make_pair(y,z)));
	      break;
	case 2:
	      cout<<"("<<it->first<<",("<<it->second.first<<","<<it->second.second<<"))";
	      break;
	case 3:
 	      ms.erase(ms.begin());
	      break;
	case 4:
	      for(it=ms.begin();it!=ms.end();it++)
	        cout<<"("<<it->first<<",("<<it->second.first<<","<<it->second.second<<"))";
	      break;
	case 5:
	      cout<<ms.size();
	      break;
      }
   }
}	
