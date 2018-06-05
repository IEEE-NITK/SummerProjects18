#include<bits/stdc++.h>
using namespace std;
int main()
{  
    long long a=0,c=0,max,i,n,k;
    cin>>n>>k;
    max=0;
 if(k<=n)
    {
        if(k==1)
        {
            max=n;
        }
        else
        { for(i=0;i<64;i++)
        {
            if(n&(1ll<<i))
            {
                a++;
            }
            else
            continue;
        }
           for(i=0;i<64;i++)
           {
               if(a>0)
               {
                   if(n&(1ll<<i))
                   {a--;
                   c++;
                   }
                   else 
                   {
                       c++;
                   }
               }
           }
           for(i=0;i<c;i++)
           {
               max+=(1ll<<i);
           }
        }
    }
    cout<<max<<endl;
    return 0;
}