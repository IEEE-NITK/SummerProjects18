#include<iostream>
#include<queue>
#include<vector>
int main()
{int number,loop,firstvar,secvar,thirdvar,choice;

     std::priority_queue<std::pair<int,std::pair<int,int>>> pq;
     std::cin>>number;
     for(loop=0;loop<number;loop++)
        {std::cin>>choice;
           switch(choice)
                  {
                      case 1:{
                                  std::cin>>firstvar>>secvar>>thirdvar;
                                  pq.push(std::make_pair(firstvar,std::make_pair(secvar,thirdvar)));


                                  break;
                             }
                      case 2:{
                                std::cout<<"("<<pq.top().first<<",("<<pq.top().second.first<<","<<pq.top().second.second<<"))";
                                break;
                             }
                      case 3:{
                                 for(;!pq.empty();pq.pop())
                                {
                                 pq.pop();
                                break;
                                }
                            }
                      case 4:{
                                std::cout<<pq.size();
                                 break;
                             }
                    }
        }
}
