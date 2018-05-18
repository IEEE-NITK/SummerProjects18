#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<pair<int,pair<int,int> > > a;
    multiset<pair<int,pair<int,int> > >:: iterator it;
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
            a.insert(make_pair(b,make_pair(c,d)));
            break;
        case 2:
            it=a.end();
            it--;
            cout<<"("<<it->first<<", "<<"("<<it->second.first<<", "<<it->second.second<<"))"<<'\n';
            break;
        case 3:
            it=a.end();
            it--;
            a.erase(it);
            break;
        case 4:
            for(it=a.begin();it!=a.end();it++)
                cout<<"("<<it->first<<", "<<"("<<it->second.first<<", "<<it->second.second<<"))";
            cout<<'\n';
            break;
        case 5:
            cout<<a.size();
            cout<<'\n';
            break;

       }
    }
}
