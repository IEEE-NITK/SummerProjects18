#include<bits/stdc++.h>

using namespace std;

int main()
{
    multiset <pair<int, pair<int,int> > > M1;
    multiset <pair<int, pair<int,int> > > :: iterator itr;

    pair <int, pair<int,int> > bigpair;
    pair <int, int> smallpair;

    int qnum, qtype, x, y, z, p_1, p_21, p_22;

    cin>>qnum;

    for(int k = 0; k<qnum; ++k)
    {
        cin>>qtype;

        switch(qtype)
        {
            case 1: 
            {
                cin>>x;
                cin>>y;
                cin>>z;
                smallpair.first = y;
                smallpair.second = z;
                bigpair.first = x;
                bigpair.second = smallpair;
                M1.insert(bigpair);
                break;
            }

            case 2:
            {
                itr = M1.begin();
                bigpair = *itr;
                    smallpair = bigpair.second;
                    p_1 = bigpair.first;
                    p_21 = smallpair.first;
                    p_22 = smallpair.second;

                    cout<<"("<<p_1<<","<<"("<<p_21<<","<<p_22<<")) ";
                    cout<<endl;
                break;
            }

            case 3:
            {
                itr = M1.begin();
                M1.erase(itr);
                break;
            }

            case 4:
            {
                for(itr = M1.begin(); itr != M1.end(); ++itr)
                {
                    bigpair = *itr;
                    smallpair = bigpair.second;
                    p_1 = bigpair.first;
                    p_21 = smallpair.first;
                    p_22 = smallpair.second;

                    cout<<"("<<p_1<<","<<"("<<p_21<<","<<p_22<<")) ";
                }
                cout<<endl;
                break;
            }

            case 5:
            {
                cout<<M1.size()<<endl;
                break;
            }

            default:
            {
                cout<<"Invalid Query type!!"<<endl;
                break;
            }
        }
    }
    return 0;
}