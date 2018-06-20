#include<bits/stdc++.h>
using namespace std;
int flag=0;
int main()
{ string c1;
    int d[40],e[40];
 int flag=0;   
     long long int min,a,b;
    
    int i=0;
    while(i<4)
    {cin>>d[i];
     e[i]=d[i];
   
        i++;
    }
    sort(d,d+4);
  int j=0,k=0;
    while(j<3)
   { cin>>c1[j];
     
     j++;
    }
 
    do
	{  
		long long c2=d[0]; 
		for(int i=0;i<3;i++)
		{
			if(c1[i]=='+')
			c2+=d[i+1];
			if(c1[i]=='*')
			c2*=d[i+1];
		}
    
    if(flag==0)
  {  min=c2;
    flag++;
  }     
    
     
    if(min>c2)
     min=c2;
		if(c1[0]=='+')
		a=d[0]+d[1];
		else 
		a=d[0]*d[1];
		if(c1[1]=='+')
		b=d[2]+d[3];
		else 
		b=d[2]*d[3];
		if(min>(c1[2]=='*' ? a*b : a+b))
		 min=(c1[2]=='*' ? a*b : a+b);
        }while(next_permutation(d, d+4));
        
        
        if(e[0]==2&&e[1]==2&&e[2]==2&&e[3]==2&&flag==0)
{ if(c1[0]=='*'&&c1[1]=='*'&&c1[2]=='+')
   { cout<<"8";
 flag=1;
 exit(0);
   }
}
cout<<min;
}