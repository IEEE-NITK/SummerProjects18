#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> V1;
    int qnum, qtype, x, y, ref, k;
    vector <int> :: iterator i;
    cin>>qnum;
    for(int j=0; j<qnum; ++j)
    {
        cin>>qtype;
        switch(qtype)
        {
            case 1:
                cin>>x;
                V1.push_back(x);
                break;



            case 2:
                cin>>x;
                cin>>y;
                V1[x] = y;
                break;



            case 3:
                cin>>x;
                V1.find(V1.begin(),V1.end(),x)!=V1.end() ? cout<<"Yes" : cout<<"No";
                break;



            case 4:
                cin>>x;
                V1.find(V1.begin(),V1.end(),x) != V1.end() ? V1.erase(x) : ;
                break;

            case 5:
                cout<<V1.size()<<endl;
                break;



            case 6:
                sort(V1.begin(),V1.end());
                break;


                
            case 7:
                for(i = V1.begin(); i!=V1.end(); ++i)
                {
                    cout<<*i<<' ';
                }
                cout<<endl;
                break;


            default:
                cout<<"Invalid Queury type!"<<endl;


        }
    }
}
