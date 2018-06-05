

#include<bits/stdc++.h>

int main()
{ int number,size,count=0,count1,count2=0;
 std::string c;
 int g[1000000];
    std::cin>>number;
    if(number==0)
     exit(0);
    count1=number-1;
    
    std::vector<std::pair <int,int>>f;
   
    for(int loop=0;loop<number;loop++)
     {
          std::cin>>size;
          f.push_back(std::make_pair(size,loop+1));

     }
       std::cin>>c;
      std::sort(f.begin(),f.end());
         for(int loop=0;loop<2*number;loop++)
      {
          

          if(c[loop-1]=='0'&&c[loop]=='1'&&(loop-1)>=0)
                   {std::cout<<f[count-1].second<<" ";

                    }
        else
             {  if(c[loop]=='0')
                {std::cout<<f[count].second<<" ";
                  count++;
                     if(c[loop-1]=='0'&&(loop-1)>=0)
                     {

                      g[count2]=f[count-2].second;
                    
                       
                      count2++;

                     }
                }

                     else
                        {   if(count2==0)
                             {std::cout<<f[count1].second<<" ";
                               count1--;
                               }
                            else
                              {std::cout<<g[count2-1]<<" ";
                              count2--;

                               }
                      }
             }
        }

      }
