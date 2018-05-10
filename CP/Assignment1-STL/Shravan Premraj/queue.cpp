#include <vector>
#include <queue>
#include <iostream>
#include <iomanip>

template < typename T > struct my_vec : std::vector<T> // brute force implementation
{
    using base = std::vector<T> ;
    using base::base ;
    using typename base::value_type ;
    using base::empty ;
    using base::size ;
    using base::front ;
    using base::back ;
    using base::push_back ;
    void pop_front() { base::erase( base::begin() ) ; }
};
int main()
{
    std::queue< int, my_vec<int> > my_queue ;
int y[20],e;

    std::cout<<"enter value of e: ";
   std::cin>>e;
    for(int i=0;i<e;i++)
        {
            std::cin>>y[i];

     int k=y[i];
          switch(k)
        {
            case 1:{
                   std::cout<<my_queue.front();
                   break;
                   }
            case 2:{
                   std::cout<<my_queue.back();
                   break;
                   }
            case 3:{
                     int i;
                     std::cin>>i;
                     my_queue.push(i);
                     break;
                   }
            case 4:{ if( !my_queue.empty() )
                        my_queue.pop();
                     break;
}
}
}
