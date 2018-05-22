#include<bits/stdc++.h>
using namespace std;
int j;
char s[400050];
pair<int,int>w[200025];
int main()
{
    int n,i;
    stack<int>p;
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>w[i].first;
     w[i].second=i+1;
 }
 scanf("%s",s);
sort(w,w+n);
 j=0;
 for(i=0;s[i]!='\0';i++)
 {
     if(s[i]=='0')
     { 
            
           p.push(w[j].second);
            cout<<p.top()<<" ";
        j++;
     }
     else if(s[i]=='1')
     {
         cout<<p.top()<<" ";
         p.pop();
     }
 }
 return 0;
}
