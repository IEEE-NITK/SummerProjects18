#include<bits/stdc++.h>
using namespace std;
int main()
{set<int>s;
set<int>::iterator i;
int x,q,ch;
cin>>q;
while(q!=0)
{cin>>ch;
   switch(ch)
   {case 1:cin>>x;
          s.insert(x);
          break;
    case 2:cout<<s.size()<<endl;
          break;
    case 3:s.erase(s.begin());
           break;
    case 4:cout<<*s.begin()<<endl;
          break;
    case 5:for(i=s.begin();i!=s.end();i++)
          cout<<*i<<"\t";
          cout<<endl;
          break;
    case 6:i=s.end();
          i--;
          cout<<*i<<endl;
          break;
    case 7:cin>>x;
          if((i=s.find(x))!=s.end())
          cout<<"yes"<<endl;
          else
          cout<<"no"<<endl;
          break;
    case 8:cin>>x;
          s.erase(x);
          break;
    default:break;
   }
   q--;
}
return 0;
}
