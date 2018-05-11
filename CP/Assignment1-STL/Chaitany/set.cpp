#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> a;
    int t;
    cin>>t;
    set<int> :: iterator it;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        switch(x)
        {
        case 1:
            int item;
            a.insert(item);
            break;
        case 2:
            cout<<a.size()<<'\n';
            break;
        case 3:
            a.erase(a.begin());
            break;
        case 4:
            it=a.begin();
            cout<<*it<<'\n';
            break;
        case 5:
            for(it=a.begin();it!=a.end();it++)
                cout<<*it<<'\n';
            cout<<'\n';
            break;
        case 6:
            it=a.end();
            it--;
            cout<<*it<<'\n';
            break;
        case 7:
            int b;
            cin>>b;
            if((it=a.find(b))!=a.end())
                cout<<"Yes"<<'\n';
            else
                cout<<"No"<<'\n';
            break;
        case 8:
            int c;
            cin>>c;
            it=a.find(c);
            a.erase(it);
            break;
        }
    }
}
