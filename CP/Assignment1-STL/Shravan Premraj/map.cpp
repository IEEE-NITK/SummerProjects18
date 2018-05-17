#include<bits/stdc++.h>
#include<map>
#include<string>
 int main()
 { int number,count,find,choice;
   char ch[50];
     std::map<char[],int> mp;
  std::map<char[],int>::iterator it=mp.begin();
  std::pair<char[],int> p;
   std::cin>>number;
   for(count=0;count<number;count++)
      {  std::cin>>choice;
         switch(choice)
                      {
                           case 1:{
                                   std::cin>>p.first;
                                   std::cin>>p.second;
                                   mp.insert(std::pair<char[],int>(p.first,p.second);

                                   break;
                                  }
                           case 2:{
                                    std::cin>>ch;
                                    for(;it!=mp.end();it++)
                                    {
                                      std::cout<<(mp.find(ch)->first);
                                    }
                                  }
                           case 3:{
                                    std::cin>>find;
                                    for(;it!=mp.end();it++)
                                    { it=std::mp.find(find);
                                      if(it==mp.end())
                                       std::cout<<" not present";
                                      else
                                      std::cout<<(it->second);
                                    }
                                    break;
                                  }
                           case 4:  {    for(it=mp.begin();it<mp.end();it++)
                                        std::cout<<"("<<it->first<<","<<it->second<<") ";
                                        break;
                                    }
                      }



                    }
 }
 
