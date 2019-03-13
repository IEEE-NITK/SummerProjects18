#include<bits/stdc++.h>
using namespace std;
int main()
{
int num,x,vmax,count=0;
vector <pair<int,int>> a;
 cin>>num>>vmax;
 int d[10];
 for(int loop=0;loop<num;loop++)
      {cin>>x;
      a.push_back(make_pair(x,loop+1));
      }    
    int min,c=0,min1;
    for(int j=1;j<=1000;j++)
    {int t1=0;
        
        for(int t=0;t<num;t++)
        {
            if(a[t].first!=j+vmax*t)
                t1+=1;
        }
        if(c==0)
        {
           min=t1;
           c++;
           min1=1;
        }
      
     if(min>t1)
      {min=t1;
       min1=j;
      }
    }
   
    cout<<min<<"\n";

    
     if(a[0].first<min1)
            cout<<"+ "<<1<<" "<<(min1)-a[0].first<<endl;
        if(a[0].first>min1)
            cout<<"- "<<1<<" "<<-((min1)-a[0].first)<<endl;
    for(int i=1;i<num;i++)
    {
        if(a[i].first<min1+vmax*i)
        {
            cout<<"+ "<<i+1<<" "<<(min1+vmax*i)-a[i].first<<endl;
        }
        if(a[i].first>min1+vmax*i)
            cout<<"- "<<i+1<<" "<<-((min1+vmax*i)-a[i].first)<<endl;
    }

}