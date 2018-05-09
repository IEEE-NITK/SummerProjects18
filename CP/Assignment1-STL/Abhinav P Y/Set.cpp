#include<bits/stdc++.h>

using namespace std;

int main()
{
    int qtype, qnum, x;
    set <int> S1;
    set <int> :: iterator itr;

    cin>>qnum;
    for(int i = 0; i < qnum; ++i)
    {
        cin>>qtype;
        switch(qtype)
        {
            case 1:
                cin>>x;
                S1.insert(x);
                break;

            case 2:
                cout<<S1.size()<<endl;
                break;

            case 3:
                itr = S1.begin();
                S1.erase(*itr);
                break;

            case 4:
                itr = S1.begin();
                cout<<*itr<<endl;
                break;

            case 5:
                for(itr = S1.begin(); itr!=S1.end(); ++itr)
                {
                    cout<<*itr<<endl;
                }
                break;

            case 6:
                itr = S1.end();
                cout<<*itr<<endl;
                break;

            case 7:
                {   
                    cin>>x;
                    int check = 0;
                    int ref = S1.count(x);
                    if(ref)
                        cout<<"Yes"<<endl;
                    else 
                        cout<<"No"<<endl;
                    break;

                    /*for(itr = S1.begin(); itr!= S1.end(); ++itr)
                    {
                        if(*itr == x)
                        {
                            check = 1;
                            cout<<"Yes"<<endl;
                            break;
                        }
                    }
                    if (check!=1)
                    cout<<"No"<<endl;*/
                }


            case 8:
                {
                    cin>>x;
                    S1.erase(x);
                    break;
                }


            default:
                cout<<"Invalid Query type!!"<<endl;
        }
    }
    return 0;
}