#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Q,x;
    queue <int> myqueue;
    cin>>Q;
    while(Q--)
    {
        int c;
        cin>>c;
        if(c==1)
            cout<<myqueue.front()<<endl;
        else if(c==2)
            cout<<myqueue.back()<<endl;
        else if(c==3)
        {
            cin>>x;
            myqueue.push(x);
        }
        else if(c==4)
            myqueue.pop();
        else if(c==5)
            cout<<myqueue.size()<<endl;
    }
    return 0;
}
