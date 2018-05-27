#include<bits/stdc++.h>
using namespace std;
sortbysecosec(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second < b.second;
}
int main()
{
    int n;
    cin>>n;
    int w;
    pair<int,int> a[n];
    for(int i=0;i<n;i++)
    {
        cin>>w;
        a[i].first=i+1;
        a[i].second=w;
    }
    string s;
    cin>>s;
    sort(a,a+n,sortbysecosec);
    stack<int> index;
    for(int i=n-1;i>=0;i--)
    {
        index.push(a[i].first);
    }
    vector<int> temp;
    for(int i=0;i<2*n;i++)
    {
        if(s[i]=='0')
        {
            cout<<index.top()<<" ";
            temp.push_back(index.top());
            index.pop();
        }
        else if(s[i]=='1')
        {
            cout<<temp.back()<<" ";
            temp.pop_back();
        }
    }
}

