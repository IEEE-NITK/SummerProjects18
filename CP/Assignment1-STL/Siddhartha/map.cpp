#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c,Q;
    string x;
    cin >> Q;
    map<string,int> map1;
    while(Q--)
    {
        cin >>c;
        switch(c)
        {
        case 1 :
        {
            cin >>x;
            int y; cin>>y;
            map1[x]=y;
            break;
        }
        case 2 :
        {
            cin>>x;
            cout<<map1[x]<<endl;
            break;
        }
        case 3 :
        {
            cin>>x;
            if(map1.find(x)!=map1.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
            break;
        }
        case 4 :
        {
            map<string,int>::iterator it;
            for(it=map1.begin();it!=map1.end();it++)
                cout<<"("<<it->first<<","<<it->second<<")";
            break;
        }

        }
    }
    return 0;
}

