#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c,Q,x;
    cin >> Q;
    multiset<pair<int,pair<int,int> > > ms;
    while(Q--)
    {
        cin >>c;
        switch(c)
        {
        case 1 :
        {
            cin>>x;
            int y,z;
            cin>>y>>z;
            ms.insert(make_pair(x,make_pair(y,z)));
            break;
        }
        case 2 :
        {
            pair <int, pair<int,int> > p = *ms.begin();
            int p1 = p.first;
            pair <int, int> p2 = p.second;
            int p2_1 = p2.first;
            int p2_2 = p2.second;

            cout<<"("<<p1<<","<<"("<<p2_1<<","<<p2_2<<")"<<")"<<endl;
            break;
        }
        case 3 :
        {
            multiset<pair<int,pair<int,int> > > :: iterator it;
            for(it=ms.begin(); it!=ms.end(); it++)
            {
                pair <int, pair<int,int> > p =*it;
                int p1 = p.first;
                pair <int, int> p2 = p.second;
                int p2_1 = p2.first;
                int p2_2 = p2.second;
                cout<<"("<<p1<<","<<"("<<p2_1<<","<<p2_2<<")"<<")"<<endl;
            }
            break;
        }
        case 4 :
        {
            cout<<ms.size()<<endl;
            break;
        }
        }
    }
    return 0;
}

