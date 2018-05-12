#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  vector< int >v;
  int n,x; 
  cin>>n;
  vector<int>::iterator it;
  for(int i=1;i<=n;i++)
  {
    int c;
    cin>>c;
    switch(c)
    {
      case 1:
            cin>>x;
            v.push_back(x);
            break;
      case 2:
            int y;
            cin>>x>>y;
            v[x]=y;
            break;
      case 3:
	    cin>>x;
            if(find(v.begin(),v.end(),x)!=v.end())
             cout<<"yes";
            else
              cout<<"no";
            break;
      case 4:
            cin>>x;
            v.erase(find(v.begin(),v.end(),x));
            break;
      case 5:
            cout<<v.size();
            break;
      case 6:
            sort(v.begin(),v.end());
            break;
      case 7:
            for(it=v.begin();it!=v.end();it++)
               cout<<*it<<" ";
            break;
     }
   }
}

