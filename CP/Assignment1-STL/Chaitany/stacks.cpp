
#include<iostream>

#include<stack>
using namespace std;
int main()
{
    int t;
    cin >> t;
    stack <int> a;
    for(int i=0;i<t;i++)
    {
        int x;
        cin >> x;

        switch(x)
        {
        case 1:
            cout << a.top() <<'\n';
            break;
        case 2:
            int y;
            cin >> y;
            a.push(y);
            break;
        case 3:
            a.pop();
            break;
        case 4:
            cout << a.size() <<'\n';
            break;
        }
    }
}
