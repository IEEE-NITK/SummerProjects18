#include<iostream>
#include<set>
#include<vector>
int main()
{int number,loop,firstvar,secvar,thirdvar,choice;

     std::multiset<std::pair<int,std::pair<int,int>>> ms;
     std::multiset<std::pair<int,std::pair<int,int>>>::iterator it;
     std::cin>>number;
     for(loop=0;loop<number;loop++)
        {std::cin>>choice;
           switch(choice)
                  {
                      case 1:{
                                  std::cin>>firstvar>>secvar>>thirdvar;
                                  ms.insert(std::make_pair(firstvar,std::make_pair(secvar,thirdvar)));


                                  break;
                             }
                      case 2:{ it=ms.begin();
                                std::cout<<"("<<ms.begin()->first<<",("<<ms.begin()->second.first<<","<<ms.begin()->second.second<<"))";
                                break;
                             }
                      case 3:{
                                 it=ms.begin();
                                 ms.erase(it);
                                break;

                            }

                      case 4:{
                              for(it=ms.begin();it!=ms.end();it++)
                                std::cout<<" "<<it->first<<" "<<it->second.first<<" "<<it->second.second;
                                break;
                             }

                      case 5:{
                                std::cout<<ms.size();
                                 break;
                             }

               }
        }
}
