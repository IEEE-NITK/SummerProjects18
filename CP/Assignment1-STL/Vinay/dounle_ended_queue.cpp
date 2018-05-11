#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> g;
    int n, c, i, x;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 1)
            cout << g.front();
        else if (c == 2)
            cout << g.back();
        else if (c == 3)
        {
            cin >> x;
            g.push_front(x);
        }
        else if (c == 4)
        {
            cin >> x;
            g.push_back(x);
        }
        else if (c == 5)
            g.pop_front();
        else if (c == 6)
            g.pop_back();
        else if (c == 7)
            cout << g.size();
    }
    return 0;
}
