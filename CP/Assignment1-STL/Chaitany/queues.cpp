#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int t;
    cin >> t;
    queue <int> a;
    for(int i=0;i<t;i++)
    {
        int x;
        cin >> x;

        switch(x)
        {
        case 1:
            cout << a.front() <<'\n';
            break;
        case 2:
            cout <<a.back() <<'\n';
            break;
        case 3:
            int y;
            cin>>y;
            a.push(y);
            break;
        case 4:
            a.pop();
            break;
        case 5:
            cout << a.size() <<'\n';
            break;
        }
    }
}

