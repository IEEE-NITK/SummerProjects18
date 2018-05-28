#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> a;
    int t;
    cin>>t;
    string s,a1,s1;
    map<string, int> :: iterator it;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        switch(x)
        {
        case 1:
                int b;
                cin>>a1>>b;
                a.insert(make_pair(a1,b));
                break;
        case 2:
                cin>>s;
                cout<<a[s]<<'\n';
                break;
        case 3:
                cin>>s1;
                if((a.find(s1))!=a.end())
                    cout<<"Yes"<<'\n';
                else
                    cout<<"No"<<'\n';
                break;
        case 4:
                for(it=a.begin();it!=a.end();it++)
                    cout<<"("<<it->first<<", "<<it->second<<")"<<'\t';
                    cout<<'\n';

        }
    }
}
