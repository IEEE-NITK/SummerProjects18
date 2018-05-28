#include <bits/stdc++.h>
using namespace std;
int main()
{
  	int n,i,m=0;
 	cin>>n;
	string k;
 	pair <int,int> q[200000];
 	for(i=0;i<n;i++)
 	{
    		cin >> q[i].first;
    		q[i].second=i+1;
  	}
 	sort(q,q+n);
  	stack <int> s;
  	cin >> k;
  	for(i=0;i<2*n;i++)
  	{
		if(k[i]=='0')
		{
	  		s.push(q[m].second);
	  		cout<<s.top()<<" ";
	  		m++; 
       		}
        	else if(k[i]=='1')
		{
	  		cout<<s.top()<<" ";
          		s.pop();
		}
   	}
}
