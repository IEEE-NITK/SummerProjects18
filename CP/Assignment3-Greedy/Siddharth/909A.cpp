#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    cin>>s;
    cin>>s1;
    string c;
    c.append(s,0,1);
   for(int i=1;i<s.length();i++)
   {
       c.append(s,i,1);
       if(c[i] >= s1[0])
         {
            c.erase(i,1);
            break;
         }
   }
   c.append(s1,0,1);
   cout<<c;
}
