#include<bits/stdc++.h>
using namespace std;
int main()
{

    map <string,int> mymap;
    int Q;
    cin>>Q;
    while(Q--)
    {
        string x;
        int y, choice;
        cin>>choice;
        if(choice==1)
        {
            cin>>x>>y;
            mymap.insert(pair<string,int>(x,y));
        }
        else if(choice==2)
        {
            cin>>x;
            cout<<mymap[x]<<endl;
        }
        else if(choice==3)
        {
            cin>>x;
            if(mymap.find(x)!=mymap.end())
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(choice==4)
            {
                map<string,int>::iterator it;
                for(it=mymap.begin();it!=mymap.end();it++)
                    cout<<'('<<it->first<<","<<it->second<<')';
                cout<<endl;
            }
        }

    return 0;

}
