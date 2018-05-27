#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int Q;
    cin>>Q;
    while(Q--)
    {
        int choice,x;
        cin>>choice;
        if(choice==1)
        {
            cin>>x;
            s.insert(x);
        }
        else if(choice==2)
            cout<<s.size()<<endl;
        else if(choice==3)
            s.erase(s.begin());
        else if(choice==4)
            cout<<*s.begin()<<endl;
        else if(choice==5)
        {
            set<int>::iterator it;
            for(it=s.begin();it!=s.end();it++)
                cout<<*it<<" ";
            cout<<endl;
        }
        else if(choice==6)
        {
            set<int>::iterator it=s.end();
            it--;
            cout<<*it<<endl;
        }
        else if(choice==7)
        {
            cin>>x;
            if(find(s.begin(),s.end(),x)!=s.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
        {
            cin>>x;
            s.erase(find(s.begin(),s.end(),x));
        }
    }
    return 0;

}
