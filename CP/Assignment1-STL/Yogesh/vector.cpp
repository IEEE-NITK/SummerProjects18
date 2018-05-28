#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Q,x,y;
    cin>>Q;
    vector <int> v;
    while(Q--)
    {
        int c;
        cin>>c;
        if(c==1){
            cin>>x;
            v.push_back(x);
        }
        else if(c==2){
            cin>>x>>y;
            v[x-1]=y;
        }
        else if(c==3){
            cin>>x;
            if(find(v.begin(),v.end(),x)!=v.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else if(c==4){
            cin>>x;
            v.erase(find(v.begin(),v.end(),x));
        }
        else if(c==5)
            cout<<v.size()<<endl;
        else if(c==6){
            sort(v.begin(),v.end());
        }
        else if(c==7){
            for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
