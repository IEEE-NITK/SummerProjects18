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
                ref = 0;
                for(i = V1.begin(), k = 0; i!=V1.end(); ++i, ++k)
                {
                    if(V1[k] == x)
                    {
                        ref = 1;
                        break;
                    }
                }
                if(ref == 1)
                cout<<"Yes"<<endl;
                else
                cout<<"No"<<endl;

                break;



            case 4:
                cin>>x;
                for(i = V1.begin(), k = 0; i!=V1.end(); ++i, ++k)
                {
                    if(V1[k] == x)
                    {
                        V1.erase(i);
                        break;
                    }
                }
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