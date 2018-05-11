#include<bits/stdc++.h>
using namespace std;
 pair<int,int> p[1000];
int i;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{      if(a.second==b.second)
    return (a.first<b.first);
    else
    return (a.second < b.second);
}
int main()
{int n,m=0,z,x,y,l,h[50],k[50];

   std::cin>>n;
   vector<pair<int,int>>p1;
   for(int i=0;i<n;i++)
     { std::cin>>l;
       switch(l)
        {
            case 1:{ std::cout<<"\nenter";
                   std::cin>>x>>y>>z;
                     h[m]=y;
                     k[m]=z;
                     
                    
                    p1.push_back(make_pair(h[m],k[m]));
                   m++;
                   break;
                   }
            case 2:{int c;
                    
                    std::cin>>c;
                   
                     if(c==1)
                    std::sort(p1.begin(),p1.end());
                    else
                    std::sort(p1.begin(),p1.end(),sortbysec);
                    break;
                   }
            case 3:{for(int j=0;j<m;j++)
                    std::cout<<p1[j].first<<" "<<p1[j].second<<"\n";
                    break;
                   }
       }
   }
}   
