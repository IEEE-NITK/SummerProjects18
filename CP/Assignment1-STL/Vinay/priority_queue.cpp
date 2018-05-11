#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z, n, c, i;
    priority_queue<pair<int, pair<int, int>>> p;
    pair<int, pair<int, int>> q;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 1)
        {
            cin >> x >> y >> z;
            p.push(make_pair(x, make_pair(y, z)));
        }
        else if (c == 2)
        {
            q = p.top();
            cout << "(" << q.first << ",(" << q.second.first << "," << q.second.second << "))";
        }
        else if (c == 3)
        {
            p.pop();
        }
        else if (c == 4)
        {
            cout << p.size() << endl;
        }
    }
    return 0;
}
