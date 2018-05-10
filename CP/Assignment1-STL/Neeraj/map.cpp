#include<bits/stdc++.h>
using namespace std;
int main()
{   map<string,int> m;
    map<string, int> :: iterator it;
    int t, q,x,y,z;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>q;
        switch(q)
        {
            case 1: cin>>s>>y;
                    m.insert(make_pair(s,y));
                    break;
            case 2: cin>>s;
                    cout<<m[s];
                    cout<<endl;
                    break;
            case 3: cin>>s;
                    if((it=m.find(s))!=m.end())
                    cout<<"Yes"<<endl;
                    else cout<<"No"<<endl;
                    break;
            case 4:for(it=m.begin();it!=m.end();it++)
                    cout<<"("<<it->first<<", "<<it->second<<") ";
                    cout<<endl;

        }
    }
    return 0;
}
