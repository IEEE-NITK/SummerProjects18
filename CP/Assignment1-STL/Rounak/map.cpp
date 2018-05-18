#include <bits/stdc++.h>
using namespace std;
int main(string s,int num)
{
  string t,x;
  int c,y,n;
  map<string, int> mm;
  map<string,int>::iterator it;
  cin >> n;
  for(int i=0;i<n;i++)
  {
    cin>>c;
    switch(c)
    { 
     case 1:
       cin >> x;
       cin >> y;
       mm.insert(pair<string, int>(x, y));
       break;
     case 2:
        cin >> x;
        it=mm.find(x);
        cout << mm.find(x)->second;
        break;
     case 3:
        cin>>t;
        it = mm.find(t);
        if(it!=mm.end())
      {
          cout << "yes";
      }
        break;
    case 4:
       for(it=mm.begin();it!=mm.end();it++)
       {
        cout << "(" << it->first << " , " << it->second << ")\n";
       }
       break;
    }
  }
}


