#include<bits/stdc++.h>
using namespace std;
int main()
{multiset<pair<int,pair<int,int>>>p;
multiset<pair<int,pair<int,int>>>::iterator i;
int x,y,z,q,ch;
cin>>q;
while(q!=0)
{cin>>ch;
   switch(ch)
   {case 1:cin>>x>>y>>z;
           p.insert(make_pair(x,make_pair(y,z)));
           break;
    case 2:i=p.begin();
          cout<<"("<<i->first<<",("<<i->second.first<<","<<i->second.second<<"))"<<endl;
          break;
    case 3:p.erase(p.begin());
          break;
    case 4:for(i=p.begin();i!=p.end();++i)
          cout<<"("<<i->first<<",("<<i->second.first<<","<<i->second.second<<"))";
          cout<<endl;
          break;
    case 5:cout<<p.size()<<endl;
          break;
    default:break;
   }
   q--;
}
return 0;
}
