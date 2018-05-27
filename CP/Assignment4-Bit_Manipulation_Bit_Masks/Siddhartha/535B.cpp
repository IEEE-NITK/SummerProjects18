#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int m=0;
    vector<int>v;
    for(int i=0;i<n.size();i++)
       {
            if(n[i] == '4')
            v.push_back(1);
        else
            v.push_back(0);
       }
    for( int s = n.size();s>0;s--)
    {
        m+=(1 << s) ;
    }
    int num=0;
    for(int i=0;i<n.size();i++)
    {
        num+= (v[n.size()-i-1]*(1<<i));
    }
    cout<<m-num;
}
