// vector::begin/end
#include <iostream>
#include <vector>

int main ()
{int number,msize;

 std::cin>>number>>msize;
 int a;
 for(int loop=0;loop<number;loop++)
 {
    std::cin>>a;

    for(int loop1=0;loop1<256;)
        {
          if(loop1<=a&&a<(loop1+msize))
           std::cout<<loop1<<" ";
           loop1=loop1+msize;
        }
  }
}    
