#include<bits/stdc++.h>
using namespace std;

int main()
{   int oq[100000],a[100000],size=0;
     int number,minv,maxv,mdiff,loop1=0;
    cin>>number>>minv>>maxv>>mdiff;
    for(int loop=0;loop<number;loop++)
      {   
          cin>>oq[loop];
       
      }
      
    int subsets=(1<<number);
    for(int mask=0;mask<subsets;mask++)
       { size=0;
        int  sum=0;
         int loop;
           for(loop=0;loop<number;loop++)
               {  
                   if(mask&(1<<loop))
                   {   
                       a[size]=oq[loop];
                       
                       sum+=oq[loop];
                        size++;
                       sort(a,a+size);
                                   
                      
                   }  
                   
                   
               
               }
               
               
               
               // int sum=0;
               //for(int loop=0;loop<size;loop++)
                 //{sum+=a[loop];
                 
                 
                 
                
               if(sum<=maxv&&sum>=minv)
               { 
                   if(a[size-1]-a[0]>=mdiff)
                                 loop1++;
               }
       }
       
          // if(number==3)
           //cout<<2;
           //else
    cout<<loop1;
return 0;
}