#include<bits/stdc++.h>
using namespace std;
bool secondsort(const pair<int,int>&a,const pair<int,int>&b)
     { if(a.second != b.second)
       return(a.second<b.second);
       else
       return(a.first<b.first);
     }
int main()
{  pair<int,int>p[1000]=make_pair(0,0);
int x,y,z,ch,q;
cin>>q;
while(q!=0)
{cin>>ch;
   switch(ch)
   {case 1:cin>>x>>y>>z;
          p[x].first=y;
          p[x].second=z; 
          break;
    case 2:cin>>x;
           if(x==1)
           {sort(p,p+1000);}
           else if(x==2)
           {sort(p,p+1000,secondsort);}
           break;
    case 3:for(int i=0;i<1000;i++)
           {cout<<"("<<p[i].first<<","<<p[i].second<<")";}
           cout<<endl;
           break;
    default:break;
   }
   q--;
}
return 0;
}
