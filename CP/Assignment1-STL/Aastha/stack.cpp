#include<bits/stdc++.h>
using namespace std;
int main()
{stack<int>cp;
int q,ch,x;
cin>>q;
while(q!=0)
   { cin>>ch;
       switch(ch)
       {
          case 1:cout<<cp.top();printf("\n");
                break;
          case 2: cin>>x;
                 cp.push(x);
                 break;
         case 3: cp.pop();
                 break;
          case 4:cout<<cp.size();printf("\n");
                 break;
          default: break;
       }
       q--;
   }
  return 0;
}
