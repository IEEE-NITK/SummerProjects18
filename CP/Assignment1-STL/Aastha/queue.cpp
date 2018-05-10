#include<bits/stdc++.h>
using namespace std;
int main()
{ queue<int>cp;
int q,ch,x;
cin>>q;
   while(q!=0)
     { cin>>ch;
      switch(ch)
          { case 1:cout<<cp.front();printf("\n");
                   break;
            case 2:cout<<cp.back();printf("\n");
                   break;
            case 3:cin>>x;
                   cp.push(x);
                   break;
            case 4:cp.pop();
                   break;
            case 5:cout<<cp.size();printf("\n");
                   break;
            default: break;
          }
        q--;
     }
}
