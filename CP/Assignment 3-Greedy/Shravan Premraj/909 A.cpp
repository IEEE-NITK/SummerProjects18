#include<bits/stdc++.h>
#include<stdio.h>
int main()
{
int k,j;
    std::string a,b;
      std::cin>>a;

    std::cin>>b;

    k=a.size();
     std::cout<<a[0];
    for( j=1;j<k;j++)
       
           {if(a[j]<b[0])
           std::cout<<a[j];
        else
            break;
           }
         std::cout<<b[0];
}
