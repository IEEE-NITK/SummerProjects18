#include<iostream>
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

                  case 3:{    int search;
                             std::cin>>search;
                              if((it=find(vec.begin(),vec.end(),search))!=vec.end())
                                 std::cout<<"yes\n";
                                  else
                                 std::cout<<"no\n";
                                break;		
                  case 4:{    int rem;
                             std::cin>>rem;
                             vec.erase(find(vec.begin(),vec.end(),rem));
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
   }          
   