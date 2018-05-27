#include<bits/stdc++.h>
#include<utility>

using namespace std;

bool sortbysec(const pair <int,int> &a, const pair <int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    pair <int,int> P1[1000];
    memset(P1, 0, sizeof(P1));
    /*array<pair<int,int>, 1000> A1;*/
    /*pair <int,int> :: iterator i;*/
    int qnum, qtype, x, y, z,subqtype;

    cin>>qnum;
    for(int j = 0; j<qnum; ++j)
    {
        cin>>qtype;
        switch(qtype)
        {
            case 1:
               {
                    cin>>x;
                    cin>>y;
                    cin>>z;
                    P1[x].first = y;
                    P1[x].second = z;
                    break;
               }


            case 2:
                {
                    cin>>subqtype;
                    if(subqtype == 1)
                    {
                        sort(&P1[0], &P1[1000]);
                        break;
                    }
                    else
                    {
                        sort(&P1[0], &P1[1000], sortbysec);
                        break;
                    }
                    break;
                }


            case 3:
                {
                        for(int i=0; i<=1000; ++i)
                        {
                            cout<<"("<<P1[i].first<<","<<P1[i].second<<") ";
                        }
                        cout<<endl;
                        break;
                }

            default:
                {
                    cout<<"Invalid Query type!"<<endl;
                    break;
                }

        }
    }
    
    return 0;
}