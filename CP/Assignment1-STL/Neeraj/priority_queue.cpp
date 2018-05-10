#include<bits/stdc++.h>
using namespace std;
typedef pair<int, pair <int, int> > mytype;
int main()
{   priority_queue<mytype > p;
    int t, q,x,y,z;
    cin>>t;
    while (t--)
    {
        cin>>q;
        switch(q)
        {
            case 1: cin>>x>>y>>z;
                    p.push(make_pair(x,make_pair(y,z)));
                    break;
            case 2: cout<<"("<<p.top().first<<","<<"("<<p.top().second.first<<","<<p.top().second.second<<")) ";
                    cout<<endl;
                    break;
            case 3:p.pop();
                    break;
            case 4: cout<<p.size()<<endl;
                    break;

        }
    }
    return 0;
}
