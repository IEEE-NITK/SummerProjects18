#include<bits/stdc++.h>
using namespace std;
 pair<int,int> p[1000];
int i;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{int n,m=0,z,x,y,l,h[50],k[50],q[50];

 std::cin>>n;
 vector<pair<int,int>>p1;
 for(int i=0;i<n;i++)
   { std::cin>>l;
     switch(l)
       {
            case 1:{std::cout<<"\nenter: ";
                   std::cin>>x>>y>>z;
                   q[m]=x;
                    if(m!=0)
                    {if(q[m]==q[m-1]+1)
                       { h[m]=y;
                         k[m]=z;
                         m++;
                       }
                      else
                        {h[m]=k[m]=0;
                        h[m+q[m]-q[m-1]]=y;
                        k[m+q[m]-[m-1]]=k;
                        }
                    }
                   p[x]=make_pair(y,z);
                   break;
                   }
            case 2:{int c;
                    std::cout<<"\nenter: ";
                    std::cin>>c;
                     for(int j=0;j<m;j++)
                    p1.push_back(make_pair(h[j],k[j]));
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
