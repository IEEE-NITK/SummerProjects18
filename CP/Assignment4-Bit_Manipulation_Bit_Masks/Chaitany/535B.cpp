#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int x=0;
    vector <int> v;
    for(int i=0;i<n.size();i++)
       {
            if(n[i] == '4')
            v.push_back(0);
            if(n[i] == '7')
            v.push_back(1);
       }
    for(int i=1;i<n.size();i++)
    {
        x+=1<<i;
    }
    int extra=0;
    for(int i=0;i<n.size();i++)
    {
        extra+= (v[n.size()-i-1]*(1<<i));
    }
    cout<<x+extra+1;
}
