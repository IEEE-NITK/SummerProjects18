#include<bits/stdc++.h>

using namespace std;

int main()
{
    map <string, int> M1;
    map <string, int> :: iterator itr;
    int qnum, qtype, y;
    string x;
    cin>>qnum;
    
    for(int i=0; i<qnum; ++i)
    {
        cin>>qtype;
        switch(qtype)
        {
            case 1:
            {
                cin>>x;
                cin>>y;
                M1.insert(pair <string,int> (x,y));
                break;
            }

            case 2:
            {
                cin>>x;
                itr = M1.find(x);
                cout<< itr -> second<<endl;
                break;
            }

            case 3:
            {
                cin>>x;
                if(M1.count(x)>0)
                cout<<"Yes";
                else
                cout<<"No";
                break;
            }

            case 4:
            {
                for (itr = M1.begin(); itr != M1.end(); ++itr)
                {
                cout<<"("<<itr -> first;
                cout<<","<<itr -> second<<")";
                }
                cout<<endl;
                break;    
            }

            default:
            {
                cout<<"Invalid query type"<<endl;
                break;
            }
        }
    }


    return 0;
}