#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#include<stdio.h>
int main()
{
int k,j;
    char a[30],b[10],c[10];
      std::cin>>a;

    std::cin>>b;

    k=strlen(a);

    std::cout<<a[0];

    for( j=1;j<k;j++)
        {if(!(a[j]>b[0]))
           std::cout<<a[j];
        else
        {
            std::cout<<b[0];
            exit(0);
        }
        }
        if(j==k)
        std::cout<<b[0];
}
