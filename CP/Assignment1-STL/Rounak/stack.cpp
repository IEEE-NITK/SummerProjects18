#include <bits/stdc++.h>
using namespace std;
main()
{
  stack< int> s;
  int n,i,c;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    cin>>c;
    switch(c)
    {
      case 1:
            cout<<s.top();
            break;
      case 2:
            int x;
            cin>>x;
            s.push(x);
            break;
      case 3:
            s.pop();
            break;
     case 4:
           cout<<s.size();
           break;
    }
  }
}

