#include <iostream>
#include<queue>

using namespace std;

int main()
{
    int q,n,i,x;
    queue <int> qu;
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> n;
        switch(n)
        {
        case 1:
            cout << qu.front() << "\n";
            break;
        case 2:
            cout << qu.back() <<"\n";
            break;
        case 3:
            cin >> x;
            qu.push(x);
            break;
        case 4:
            qu.pop();
            break;
        case 5:
            cout << qu.size() <<"\n";
            break;
        }
    }
    return 0;
}
