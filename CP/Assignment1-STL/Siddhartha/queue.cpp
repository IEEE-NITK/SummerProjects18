#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c,Q,x;
    cin >> Q;
    queue<int> q1;
    while(Q--)
    {
        cin >>c;
        switch(c)
        {
        case 1 :
            cout <<q1.front() <<endl;
            break;
        case 2 :
            cout <<q1.back() <<endl;
            break;
        case 3 :
            cin>> x;
            q1.push(x);
            break;
        case 4 :
            q1.pop();
            break;
        case 5 :
            cout<<q1.size()<<endl;
            break;
        }
    }
    return 0;
}
