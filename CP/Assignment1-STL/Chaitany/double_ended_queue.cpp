#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> a;
    deque<int>:: iterator it;
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        switch(x)
        {
        case 1:
            cout<<a.front()<<'\n';
            break;
        case 2:
            cout<<a.back()<<'\n';
            break;
        case 3:
            int item;
            cin>>item;
            a.push_front(item);
            break;
        case 4:
            int item1;
            cin>>item1;
            a.push_back(item1);
            break;
        case 5:
            a.pop_front();
            break;
        case 6:
            a.pop_back();
            break;
        case 7:
            cout<<a.size()<<'\n';
            break;
        }
    }
}
