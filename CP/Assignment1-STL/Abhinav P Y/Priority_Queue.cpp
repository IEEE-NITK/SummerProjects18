#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue < pair< int, pair <int, int> > > PQ1;
    int qnum, qtype, x, y, z;

    cin>>qnum;
    for(int i = 0; i< qnum; ++i)
    {
        cin>>qtype;
        switch(qtype)
        {
            case 1:
            {
                cin>>x;
                cin>>y;
                cin>>z;
                PQ1.push(make_pair(x,make_pair(y,z)));
                break;
            }

            case 2:
            {
                pair <int, pair<int,int> > pairbig = PQ1.top();
                int p_1 = pairbig.first;
                pair <int , int> pairsmall = pairbig.second;
                int p_21 = pairsmall.first;
                int p_22 = pairsmall.second;

                cout<<"("<<p_1<<","<<"("<<p_21<<","<<p_22<<")"<<")";
                cout<<endl;
                break;
            }

            case 3:
            {
                PQ1.pop();
                break;
            }

            case 4:
            {
                cout<<PQ1.size()<<endl;
                break;
            }

            default:
            {
                cout<<"Invalid query type";
                break;
            }
        }
    }

    return 0;
}