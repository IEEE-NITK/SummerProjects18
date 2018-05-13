#include<bits/stdc++.h>
int main()
{
  int a[1000];
  memset(a,0,1000*sizeof(int));
  int x,y;
  std::cin>>x;
  while(x--)
  {
    std::cin>>y;
    switch(y)
  {
    case 1:{int n,m
            std::cin>>n>>m;
            a[n-1]=m;
            break;
          }
    case 2: { std::sort(a,a+1000);
             break;
            }
    case 3:{ int m;
             std::sort(a,a+1000);
             std::cin>>m;
             std::cout<<( std::lower_bound(a,a+1000,m))-a<<"\n";
             break;
           }
    case 4:{  int m;
             std::sort(a,a+1000);
             std::cin>>m;
             std::cout<<( std::upper_bound(a,a+1000,x))-a<<"\n";
             break;
           }
    case 5:{
               std::next_permutation(a,a+1000);
              for(int i=0;i<1000;i++)
               std::cout<<a[i]<<" ";
               std::cout<<"\n";
            }
    case 6:{
       std::prev_permutation(a,a+1000);
      for(int i=0;i<1000;i++)
       std::cout <<a[i]<<" ";
       std::cout<<"\n";
           }


            }

  }


}
