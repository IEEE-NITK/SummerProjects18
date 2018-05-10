#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int y[20];
int main()
{int e,h[20];
int j=0;
  stack< int, vector<int> > x;
    std::cout<<"enter value of e: ";
   std::cin>>e;
    for(int i=0;i<e;i++)
        {
     std::cin>>y[i];
     int k=y[i];
          switch(k)
        {
            case 1:{ if(x.size()==0)
                      std::cout<<"0";
                     else
                       std::cout << x.top();;
                    break;
                   }
            case 2:{
                    int newvar;
                    std::cin>>newvar;
                    x.push(newvar);
                    break;

                   }
            case 3:{x.pop();
                    break;
                   }
             case 4:{std::cout<<x.size()<<"\n";
                     break;
                     }
              default:std::cout<<"hllo";
        }


      }
}
