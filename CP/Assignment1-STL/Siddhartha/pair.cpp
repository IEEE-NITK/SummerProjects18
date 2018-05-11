#include <bits/stdc++.h>
using namespace std;
bool sortbysec(pair<int,int> a,
              pair<int,int> b)
{
    return (a.second< b.second);
}
bool sortbyfrst(pair<int,int> a,
              pair<int,int> b)
{
    return (a.first > b.first);
}
int main()
{
    int c,Q,x;
    cin >> Q;
    vector<pair<int,int> > ar[10];
    for(int i = 0; i < 10; ++i)
        ar[i].push_back(make_pair(0,0));

    while(Q--)
    {
        cin >>c;
        switch(c)
        {
        case  3 :
        {
            for(int i=0; i<10; i++)
                for(vector<pair<int,int> >::iterator it=ar[i].begin(); it!=ar[i].end(); it++)
                    cout<<"("<<it->first<<","<<it->second<<")";
            cout<<endl;
            break;
        }
        case  2 :
        {
            cin>>x;
            switch(x)
            {
            case 2:  for(int i = 0; i < 10; ++i)
                            sort(ar[i].begin(), ar[i].end(), sortbysec);
                        break;
            case 1: for(int i = 0; i < 10; ++i)
                            sort(ar[i].begin(), ar[i].end(), sortbyfrst);
                        break;

            }
        }
        case 1 :
        {
            cin>>x;
            int y,z;
            cin>>y>>z;
            ar[x-1].push_back(make_pair(y,z));
            break;
        }
        }
    }
    return 0;
}
