#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(long long int n)
{
  if (n == 0)
    return 0;
  while (n != 1)
  {
      if (n%2 != 0)
         return 0;
      n = n/2;
  }
  return 1;
  
}
unsigned countBits(unsigned long long int number)
{      

      return (int)log2(number)+1;
}

int main()
{  long long int n,k,l,m;
    cin>>n>>k;
   m=countBits(n);
   l=m-1;
   
   if((1ll<<l)>n)
    {cout<<n;
    exit(0);
    }
    if(k==1)
     cout<<n;
     else 
     cout<<" "<<((1ll<<(l+1))-1);
}
             