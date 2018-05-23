#include <iostream>
#include <string>
using namespace std;
int main()
{
  string s,s2,s1;
  getline(cin,s);
  int p=s.find(" ");
  s2=s.substr(p+1,1);
  int i;
  for(i=2;i<p+1;i++)
  {
    s1=s.substr(0,i);
    if((s1.compare(s.substr(0,i-1)+s2))>0)
      break;
    else if((s1.compare(s.substr(0,i-1)+s2))==0)
      break;
  }
    if(i!=p+1)
    cout<<(s.substr(0,i-1)+s2);
    else if((i==p+1))
    {
      if(s2.compare(s1.substr(p-1,1))==0)
         cout<<(s.substr(0,i-2)+s2);
      else
         cout<<(s.substr(0,i-1)+s2);
    }

}

