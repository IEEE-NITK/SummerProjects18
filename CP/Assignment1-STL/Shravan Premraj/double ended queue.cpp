#include<iostream>
#include<queue>
int count;
int main()
{int number,choice;
     std::deque<int> dq;
     std::deque<int>::iterator it;
     std::cin>>number;
     for(int loop=0;loop<number;loop++)
       {
           std::cin>>choice;
           switch(choice)
                 {
                     case 1:{if(count>=1)
                             {it=dq.begin();
                             std::cout<<*it;
                             }
                             else
                               std::cout<<"0";
                             break;
                            }
                     case 2:{ if(count>=1)
                              {it=dq.end()-1;
                              std::cout<<*it;
                              }
                              else
                               std::cout<<"0";
                              break;
                            }
                     case 3:{ int front;
                              std::cin>>front;
                              dq.push_front(front);
                              count++;
                              break;
                            }
                     case 4:{ int rear;
                              std::cin>>rear;
                              dq.push_back(rear);
                              count++;
                              break;
                            }
                     case 5:{dq.pop_front();
                             break;
                            }
                     case 6:{dq.pop_back();
                             break;
                            }
                     case 7:{std::cout<<dq.size();
                             break;
                            }
             }
       }
    }
                               
