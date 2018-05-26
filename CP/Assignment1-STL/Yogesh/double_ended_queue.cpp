#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque <int> dq;
    int Q;
    cin>>Q;
    while(Q--)
    {
        int choice,x;
        cin>>choice;
        if(choice==1)
        {
            cout<<dq.front()<<endl;
        }
        else if(choice==2)
        {
            cout<<dq.back()<<endl;
        }
        else if(choice==3)
        {
            cin>>x;
            dq.push_front(x);
        }
        else if(choice==4)
        {
            cin>>x;
            dq.push_back(x);
        }
        else if(choice==5)
        {
            dq.pop_front();
        }
        else if(choice==6)
        {
            dq.pop_back();
        }
        else
        {
            cout<<dq.size()<<endl;
        }

    }
    return 0;

}
