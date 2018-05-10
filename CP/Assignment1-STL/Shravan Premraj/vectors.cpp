#include<iostream>
#include<bits/stdc++.h>
#include<vector>
int main()
{ int number,choice;
    std::vector<int> vec;
  std::vector<int>::iterator it;
  std::cin>>number;
  for(int loop=0;loop<number;loop++)
   {
       std::cin>>choice;
       switch(choice)
              {
                  case 1:{
                           int ele;
                           std::cin>>ele;
                           vec.push_back(ele);
                           break;
                         }
                  case 2:{
                           int ele1,ele2;
                           std::cin>>ele1>>ele2;
                          std::vector<int>::iterator it=vec.begin()+ele1;
                           *it=ele2;

                          //std::cout<<*it;
                          //vec.assign(it,vec.begin()+ele2);
                          break;
                         }

                  case 3:{    int search,count1=0;
                             std::cin>>search;
                           for (std::vector<int>::iterator it=vec.begin(); it<vec.end(); it++)
                            { if(search==*it)
                             {std::cout<<"yes";
                               count1++;
                             }
                             else
                             continue;
                             }
                             if(count1==0)
                             std::cout<<"No found";
                             break;
                         }
                  case 4:{    int rem;
                             std::cout<<"enter:";
                             std::cin>>rem;
                           for (std::vector<int>::iterator it=vec.begin(); it<vec.end(); it++)
                             { if(rem==*it)
                               {vec.erase(it);
                                }
                               else
                             continue;
                             }
                             break;
                         }
                     case 5: {
                              std::cout<<vec.size();
                              break;
                             }
                     case 6: {

                                    std::sort (vec.begin(), vec.end());
                                    break;
                             }
                    case 7:  {
                               for (std::vector<int>::iterator it=vec.begin(); it<vec.end(); it++)
                               std::cout << ' ' << *it;
                               std::cout << '\n';
                             }
                  }
              }
   }          
