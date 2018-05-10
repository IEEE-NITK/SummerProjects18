#include<bits/stdc++.h>
using namespace std;
int main()
{ priority_queue<pair<int,pair<int,int>>>p;
int x,y,z,q,ch;
cin>>q;
while(q!=0)
  {cin>>ch;
   switch(ch)
   {case 1:cin>>x>>y>>z;
           p.push(make_pair(x,make_pair(y,z)));
           break;
    case 2:cout<<"("<<p.top().first<<",("<<p.top().second.first<<","<<p.top().second.second<<"))"<<endl;
           break;
    case 3:p.pop();
           break;
    case 4:cout<<p.size()<<endl;
           break;
    default:break;
   }
   q--;
  }
  return 0;
}
