#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c,x;
    deque<int> d;
    deque<int>::iterator it;
    cin >> n;
    for(i=0;i<n;i++)
    {  
    cin >> c;
    if(c==1)
    {
      it=d.begin();
      cout << *it;
    }
    else if(c==2)
    {
      it=d.end();
      cout<<*it;
    }
    else if(c==3)
    { 
      cin >> x;
      d.push_front(x);
    }
    else if(c==4)
    {
      cin >> x;
      d.push_back(x);
    }
    else if(c==5)
    {
      d.pop_front();
    }
    else if(c==6)
    {
      d.pop_back();
    }
    else 
    {
      cout << "size" << d.size();
    }
  }   
}

