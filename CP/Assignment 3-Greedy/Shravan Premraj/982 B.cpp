#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#include<vector>
int main()
{ int number,size,count=0,count1,count2=0;
 int c[20]; int e[20];
    std::cin>>number;
    count1=number-1;
    std::vector<int> d;
    std::vector<std::pair <int,int>>f;
    std::vector<std::pair<int,int>>::iterator it;
    for(int loop=0;loop<number;loop++)
     {
          std::cin>>size;
          f.push_back(std::make_pair(size,loop+1));

     }
      std::sort(f.begin(),f.end());
      for(int loop=0;loop<number;loop++)
      std::cout<<"\n"<<f[loop].first<<" "<<f[loop].second;
      std::cout<<"\n\n";
      for(int loop=0;loop<2*number;loop++)
      {
          std::cin>>c[loop];

          if(c[loop-1]==0&&c[loop]==1&&(loop-1)>0)
                   {std::cout<<f[count-1].second;

                    }
        else
             {  if(c[loop]==0)
                {std::cout<<f[count].second;
                  count++;
                     if(c[loop-1]==0&&(loop-1)>=0)
                     {

                      d.push_back(f[count-2].second);
                       e[count2]=count-2;
                      count2++;

                     }
                }

                     else
                        {   if(count2==0)
                             {std::cout<<f[count1].second;
                               count1--;
                               }
                            else
                              {std::cout<<d[e[count2-1]];
                              count2--;

                               }
                      }
             }
        }

      }
