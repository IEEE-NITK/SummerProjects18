#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c,Q,x;
    cin >> Q;
    deque<int> dq1;
    while(Q--)
    {
        cin >>c;
        switch(c)
        {
        case 1 :
        {
            cout<<dq1.front()<<endl;
            break;
        }
        case 2 :
        {
            cout<<dq1.back()<<endl;
            break;
        }
        case 3 :
        {
            cin>>x;
            dq1.push_front(x);
            break;
        }
        case 4 :
        {
            cin>>x;
            dq1.push_back(x);
            break;
        }
        case 5 :
            dq1.pop_front();
            break;
        case 6 :
        {
            dq1.pop_back();
            break;
        }
        case 7 :
        {
            cout<<dq1.size()<<endl;
            break;
        }
        }
    }
    return 0;
}
