#include <bits/stdc++.h>
using namespace std;
int main()
{
   set<int> ms;
   set<int>::iterator it;
   int n;
   cin>>n;
   for (int i=1; i<=n;i++)
   {
      int c;
      cin>>c;
      switch(c)
      {
         case 1:
                int x;
                cin>>x;
                ms.insert(x);
                break;
         case 2:
               cout<<"size"<<ms.size();
               break;
         case 3:
               it=ms.begin();
               ms.erase(it);
               break;
       case 4:
             it=ms.begin();
             cout<<"first element"<< *it;
             break;
       case 5:
             for(it=ms.begin();it!=ms.end();it++)
             {
               cout<<*it;
             }
       case 6:
              it=ms.end();
              cout<<"last element"<<*it;
              break;
       case 7:
              int p;
              cin>>p;
              for(it=ms.begin();it!=ms.end();it++)
              {
                if(ms.count(p)==1)
                
                     cout<<"yes";
                else 
                   
                   cout<<"no";

             }    
             break;
       case 8:
              int v;
              cin>>v;
              for(it=ms.begin();it!=ms.end();it++)
              {
                if(ms.count(v)==1)
                {
                  ms.erase(x);
                }
             }  
              break;
         }
      }
}

