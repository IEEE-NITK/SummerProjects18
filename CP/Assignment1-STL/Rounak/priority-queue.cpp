#include <bits/stdc++.h>
using namespace std;
int main()
{
  priority_queue<pair< int, pair<int, int> > > mp;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
     int x;
     cin>>x;
     switch(x)
     {
        case 1:
               int a,b,c;
               cin>>a>>b>>c;
               mp.push(make_pair(a,make_pair(b,c)));
               break;
        case 2:
               cout<<"("<<mp.top().first<<","<<"("<<mp.top().second.first<<","<<mp.top().second.second<<"))"<<"\n";
               break;
        case 3:
               mp.pop();
               break;
        case 4:
               cout<<mp.size();
               break;
      }
   }
}

