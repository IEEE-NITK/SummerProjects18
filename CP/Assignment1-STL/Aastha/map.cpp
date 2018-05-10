#include<bits/stdc++.h>
using namespace std;
int main()
{ map<string,int>m;
map<string,int>::iterator i;
int x,y,q,ch;
cin>>q;
while(q!=0)
{cin>>ch;
  switch(ch)
    {case 1:cin>>x>>y;
            m.insert(make_pair(x,y));
            break;
    case 2:cin>>x;
           cout<<m[x];
           cout<<endl;
           break;
    case 3:cin>>x;
          if((i=m.find(x))!=m.end())
          cout<<"yes"<<endl;
          else
          cout<<"no"<<endl;
          break;
    case 4:for(i=m.begin();i!=m.end();++i)
           cout<<"("<<m->first<<","<<m->second<<")";
           cout<<endl;
           break;
    default:break;
    }
    q--;
}
return 0;
}
