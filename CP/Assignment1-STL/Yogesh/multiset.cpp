#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset< pair<int, pair<int,int> > > s;
    int Q;
    cin>>Q;
    while(Q--)
    {
        int choice,x,y,z;
        cin>>choice;
        if(choice==1)
        {
            cin>>x>>y>>z;
            s.insert(make_pair(x,make_pair(y,z)));
        }
        else if(choice==2){
            multiset< pair<int, pair<int,int> > >::iterator it=s.begin();
            cout<<'('<<it->first<<','<<'('<<it->second.first<<','<<it->second.second<<')'<<')'<<endl;
        }
        else if(choice==3)
            s.erase(s.begin());
        else if(choice==4){
            multiset< pair<int, pair<int,int> > >::iterator it;
            for(it=s.begin();it!=s.end();it++)
                cout<<'('<<it->first<<','<<'('<<it->second.first<<','<<it->second.second<<')'<<')';
            cout<<endl;
        }
        else if(choice==5)
        {
            cout<<s.size()<<endl;
        }

    }
    return 0;

}
