#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#include<stdio.h>
int main()
{ int x,y,perimeter;
    std::pair <int,int> f[2];
 std::cin>>x>>y;
 f[1]=std::make_pair(x,y);
 std::cin>>x>>y;
 f[2]=std::make_pair(x,y);

 if(f[2].first>f[1].first&&f[2].second>f[1].second)
 perimeter=2*((f[2].first-f[1].first)+(f[2].second-f[1].second)+2);

  if(f[2].first>f[1].first&&f[2].second<f[1].second)
 perimeter=2*((f[2].first-f[1].first)+(f[1].second-f[2].second)+2);

  if(f[2].first<f[1].first&&f[2].second>f[1].second)
 perimeter=2*((f[1].first-f[2].first)+(f[2].second-f[1].second)+2);

  if(f[2].first<f[1].first&&f[2].second<f[1].second)
 perimeter=2*((f[1].first-f[2].first)+(f[1].second-f[2].second)+2);

  if(f[2].first==f[1].first&&f[2].second>f[1].second)
 perimeter=2*(2+(f[2].second-f[1].second))+2;

  if(f[2].first==f[1].first&&f[2].second<f[1].second)
 perimeter=2*((f[1].second-f[2].second)+2)+2;

  if(f[2].first>f[1].first&&f[2].second==f[1].second)
 perimeter=2*((f[2].first-f[1].first)+2)+2;

  if(f[2].first<f[1].first&&f[2].second==f[1].second)
 perimeter=2*((f[1].first-f[2].first)+2)+2;


 std::cout<<perimeter;


}
