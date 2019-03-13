#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
long long f[1000001];
long long A=2;
long long facto(long long a)
{  
    if(f[a]!=0)
    {        return f[a];
    }
    else {  
            while(A<=a)
            {  
                f[A]=((A%m)*(f[A-1]%m))%m;
                A++;
            }
    
    
            return f[a];
    }
}

long long int fastPow(long long int base, long long int p)
{
   if(p==0)
	return 1;
		
   else if(p==1)
	return base;

   else
   {
	long long int temp = fastPow(base, p/2);
	if(p%2 == 0)
	  return ( temp * temp ) % m;
	
	else
	  return ( ((temp * temp) % m) * base ) % m ;
    }	
}
int main()
{   
    int t;
    f[0]=1;
f[1]=1;
    cin>>t;
    long long n,r,x,y,z,N,R,NR,NCR,NPR;
    while(t--)
    {   x=1;
        y=1; z=1;
        cin>>n>>r;
        N=n,R=r;
        NR=(n-r);
        x=facto(n);
       
       y=facto(r);
       
       z=facto(n-r);
      
        NCR=(((x%m)*((fastPow(y,m-2))%m))%m*((fastPow(z,m-2))%m) )%m;
        NPR=((NCR%m)*(y%m))%m;
        cout<<NPR<<" "<<NCR<<"\n";
    }
    return 0;
}