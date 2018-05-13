#include <bits/stdc++.h>
using namespace std;
bool sortbysecosec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second< b.second);
}
bool sortbyfrstosec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.first< b.second);
}
int main()
{
    int c,Q,x;
    cin >> Q;
    pair<int,int> ar[1000];
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
            ar[x-1]=(make_pair(y,z));
            break;
        }
        case  2 :
        {
            cin>>x;
            switch(x)
            {
             case 1:     sort(ar, ar+1000,sortbyfrstosec);
                        break;
             case 2:     sort(ar, ar+1000, sortbysecosec);
                        break;
            }
        }

          case  3 :
        {
            for(int i=0; i<1000; i++)
               cout<<"("<<ar[i].first<<","<<ar[i].second<<")";
            cout<<endl;
            break;
        }

        }
    }
    return 0;
}
