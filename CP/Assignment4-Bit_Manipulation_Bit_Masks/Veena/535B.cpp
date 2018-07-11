#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int m=0;
    queue<int>q ;
    for(int i=0;i<s.size();i++)
       {
        if(s[i] == '4')
            q.push(1);
        else
            q.push(0);
       }
    for( int i= s.size(); i>0 ; i--)
    {
        m+=(1 << i) ;
    }
    int n=0;
    for(int i=(s.size()-1) ; i>=0 ; i--)
    {  
        n+= (q.front()*(1<<i));
        q.pop();
    }
    cout<<m-n;
}
