#include <iostream>
#include <set>
#include <iterator>



int main()
{ int number,choice;
    // empty set container
     std::set<int> s;
     std::set<int>::iterator it;
     std::cin>>number;
     for(int count=0;count<number;count++)
      { std::cin>>choice;
         switch(choice)
                { case 1:{int var;
                          std::cin>>var;
                          s.insert(var);
                           break;
                          }
                  case 2:{std::cout<<s.size();
                          break;
                          }
                  case 3:{it=s.begin();
                          s.erase(it);
                          break;
                         }
                  case 4:{
                          it=s.begin();
                          std::cout<<*it;
                         break;
                         }
                  case 5:{
                           for(std::set<int>::iterator it=s.begin();it!=s.end();it++)
                             std::cout<<*it<<" ";
                            break;
                         }
                  case 6:{
                           it=s.end();
                           std::cout<<*it;
                          break;
                          }
                  case 7:{int search;
                          std::cin>>search;
                          it=s.begin();
                          it=s.find(search);
                         if(it!=s.end())
                           std::cout<<"yes";
                           else
                           std::cout<<"no";
                           
                           }
                  case 8: { int search;
                            std::cin>>search;
                        
                            it=s.find(search);
                             s.erase(it);
                              
                             
                           }
                }
      }
}   