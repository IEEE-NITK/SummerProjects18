#include <bits/stdc++.h>
using namespace std;
int main()
{
   queue< int > Q;
   int n,x;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
     int c;
     cin>>c;
     switch(c)
     {
       case 1:
             cout<<Q.front();
             break;
       case 2:
             cout<<Q.back();
             break;
       case 3:
             cin>>x;
             Q.push(x);
             break;
       case 4:
             Q.pop();
             break;
       case 5:
             cout<<Q.size();
             break;
      }
    }
}

