#include<bits/stdc++.h>
using namespace std;
int main()
{  vector<int>cp;
  vector<int>::iterator i;
    int q,x,y,ch,pos;
cin>>q;
while(q!=0)
   { cin>>ch;
      switch(ch)
          {case 1: cin>>x;
                   cp.push_back(x);
                   break;
           case 2: cin>>x>>y;
                   cp[x]=y;
                   break;
           case 3:cin>>x;
                  if(find(cp.begin(),cp.end(),x)!=cp.end())
                     {cout<<"yes"<<endl;}
                  else
                     {cout<<"no"<<endl;}
                  
                  break;
           case 4:cin>>x;
                  cp.erase(find(cp.begin(),cp.end(),x));
                     break;
           case 5:cout<<cp.size()<<endl;
                  break;
           case 6:sort(cp.begin(),cp.end());
                  break;
           case 7:for(i=cp.begin();i!=cp.end();++i)
                  cout<<*i<<"\t";
                  cout<<endl;
                  break;
           default: break;
         }
  q--;
   }
 return 0;
 }
