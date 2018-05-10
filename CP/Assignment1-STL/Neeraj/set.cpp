#include<bits/stdc++.h>
using namespace std;
int main()
{   set<int> s;
    set<int>:: iterator it;
    int t, q,x,y,z;

    cin>>t;
    while (t--)
    {
        cin>>q;
        switch(q)
        {
            case 1: cin>>x;
                    s.insert(x);
                    break;
            case 2: cout<<s.size()<<endl;
                    break;
            case 3: it=s.begin();
                    s.erase(it);
                    break;
            case 4: it=s.begin();
                    cout<<*it<<endl;
                    break;
            case 5: for(it=s.begin();it!=s.end();it++)
                    cout<<*it<<" ";
                    cout<<endl;
                    break;
            case 6: it=s.end();
                    it--;
                    cout<<*it<<endl;
                    break;
            case 7: cin>>x;
                    if((it=s.find(x))!=s.end())
                    cout<<"Yes"<<endl;
                    else cout<<"No"<<endl;
                    break;
            case 8: cin>>x;
                    it=s.find(x);
                    s.erase(it);
                    break;

        }
    }
    return 0;
}
