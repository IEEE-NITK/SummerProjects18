#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c,Q,x;
    cin >> Q;
    stack<int> stack1;
    while(Q--)
    {
        cin >>c;
        switch(c)
        {
        case 1 :
            cout <<stack1.top() <<endl;
            break;
        case 2 :
            cin >> x;
            stack1.push(x);
            break;
        case 3 :
            stack1.pop();
            break;
        case 4 :
            cout <<stack1.size() <<endl;
            break;
        }
    }
    return 0;
}
