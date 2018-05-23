#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,m=0;
  cin>>n;
  string a;
  pair <int,int> w[220000];
  for(i=0;i<n;i++)
  {
    cin >> w[i].first;
    w[i].second=i+1;
  }
  sort(w,w+n);
  stack <int> s;
  cin >> a;
  for(i=0;i<2*n;i++)
  {
	if(a.at(i)=='0')
	{
	  s.push(w[m].second);
	  cout<<s.top()<<" ";
	  m++; 
        }
        else if(a.at(i)=='1')
	{
	  cout<<s.top()<<" ";
          s.pop();
	}
   }
}
       
    
  
	  
   
		
