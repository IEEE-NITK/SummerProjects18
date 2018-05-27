#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c,Q,x;
    cin >> Q;
    set<int> s;
    while(Q--)
    {
        cin >>c;
        switch(c)
        {
        case 1 :
        {
            cin>>x;
            s.insert(x);
            break;
        }
        case 2 :
        {
            cout<<s.size()<<endl;
            break;
        }
        case 3 :
        {
            s.erase(s.begin());
            break;
        }
        case 4 :
        {
            cout<<*s.begin()<<endl;
            break;
        }
        case 5 :
        {
            set<int>::iterator it;
            for(it=s.begin(); it!=s.end(); it++)
                cout<<*it<<" ";
            cout<<endl;
        }
        case 6 :
        {
            cout<<*s.end()<<endl;
            break;
        }
        case 7 :
        {
            cin>>x;
            if(s.find(x) != s.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        case 8 :
        {
            cin>>x;
            s.erase(x);
            break;
        }

        }
    }
    return 0;
}

