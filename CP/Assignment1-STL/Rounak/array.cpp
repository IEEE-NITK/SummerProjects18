#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[1000];
  memset(a,0,1000*sizeof(int));
  int n,i,c,x,y;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    cin>>c;
    switch(c)
    {
	case 1:
	      cin>>x>>y;
	      a[x]=y;
	      break;
	case 2:
	      sort(a,a+1000);
	      break;
	case 3:
              cin>>x;
              cout<<lower_bound(a,a+1000,x);
	      break;
	case 4:
              int x;
              cin>>x;
              cout<<upper_bound(a,a+1000,x);
              break;
	case 5:
              next_permutation(a,a+1000);
              for(int j=0;j<1000;j++)
                cout<<a[j]<<" ";
		break;
	case 6:
	      prev_permutation(a,a+1000);
	      for(int j=0;j<1000;j++)
		cout<<a[j]<<" ";
              break;
         }
     }
}

	
              
