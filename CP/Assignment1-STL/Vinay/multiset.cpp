#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<pair<int, pair<int, int>>> mp;
    multiset<pair<int, pair<int, int>>>::iterator itr;
    pair<int, pair<int, int>> p;
    int n, c, i, x, y, z;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 1)
        {
            cin >> x >> y >> z;
            mp.insert(make_pair(x, make_pair(y, z)));
        }
        else if (c == 2)
        {
            itr = mp.end();
            --itr;
            cout << "(" << itr->first << ",(" << itr->second.first << "," << itr->second.second << "))";
            cout << endl;
        }
        else if (c == 3)
        {
            itr = mp.end();
            --itr;

            mp.erase(itr);
            cout << itr->first << endl;
        }
        else if (c == 4)
        {
            for (itr = mp.begin(); itr != mp.end(); ++itr)
            {
                cout << "(" << itr->first << ",(" << itr->second.first << "," << itr->second.second << "))";
            }
            cout << endl;
        }
        else if (c == 5)
        {
            cout << mp.size() << endl;
        }
    }
    return 0;
}