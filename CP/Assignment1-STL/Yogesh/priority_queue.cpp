#include<bits/stdc++.h>
using namespace std;
int main()
{

    priority_queue< pair<int, pair<int,int> > >p;
    int Q;
    cin>>Q;
    while(Q--)
    {
        int choice,x,y,z;
        cin>>choice;
        if(choice==1)
        {
            cin>>x>>y>>z;
            p.push(make_pair(x,make_pair(y,z)));
        }
        else if(choice==2)
        {
            cout<<'('<<p.top().first<<","<<'('<<p.top().second.first<<","<<p.top().second.second<<')'<<')';
            cout<<endl;
        }
        else if(choice==3)
            p.pop();
        else
            cout<<p.size()<<endl;
    }



    return 0;

}
