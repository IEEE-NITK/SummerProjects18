#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<pair< int, pair<int, int> > > a;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        switch(x)
        {
        case 1:
            int b,c,d;
            cin>>b>>c>>d;
            a.push(make_pair(b,make_pair(c,d)));
            break;
        case 2:
            cout<<"("<<a.top().first<<","<<"("<<a.top().second.first<<","<<a.top().second.second<<"))"<<'\n';
            break;
        case 3:
            a.pop();
            break;
        case 4:
            cout<<a.size()<<'\n';
            break;
        }
    }
}
