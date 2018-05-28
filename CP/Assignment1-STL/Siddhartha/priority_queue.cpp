#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue <pair <int, pair<int,int> > > PQ;
    int Q, c, x, y, z;

    cin>>Q;
   while(Q--)
    {
        cin>>c;
        switch(c)
        {
            case 1:
            {
                cin>>x;
                cin>>y;
                cin>>z;
                PQ.push(make_pair(x,make_pair(y,z)));
                break;
            }

            case 2:
            {
                pair <int, pair<int,int> > p = PQ.top();
                int p1 = p.first;
                pair <int , int> p2 = p.second;
                int p2_1 = p2.first;
                int p2_2 = p2.second;

                cout<<"("<<p1<<","<<"("<<p2_1<<","<<p2_2<<")"<<")"<<endl;
                break;
            }

            case 3:
            {
                PQ.pop();
                cout<<endl;
                break;
            }

            case 4:
            {
                cout<<PQ.size()<<endl;
                break;
            }
        }
    }

    return 0;
}
