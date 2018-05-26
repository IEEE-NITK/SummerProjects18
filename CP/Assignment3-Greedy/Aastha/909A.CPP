#include<bits/stdc++.h>
using namespace std;
char first[10],last[10],login[12];
int main()
{
    int i,l;
  scanf("%s%s",first,last);
  l=strlen(first);
  for(i=0;i<=l;i++)
  {       if(i==0)
          {
              login[i]=first[i];
          }
          else if(first[i]<last[0])
          {
              login[i]=first[i];
          }
          else if(first[i]>last[0])
          {
              login[i]=last[0];
              break;
          }
          else if(first[i]==last[0])
          {
              login[i]=first[i];
              break;
          }
          if(i==l)
          {
              login[i]=last[0];
          }
  }
printf("%s\n",login);
return 0;
}
