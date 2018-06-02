#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator i;
    int n, c, x, f, y, j;
    cin >> n;
    for (int q = 0; q < n; q++)
    {
        cin >> c;
        if (c == 1)
        {
            cin >> x;
            v.push_back(x);
        }
        else if (c == 2)
        {
            cin >> x >> y;
            v.at(x) = y;
        }
        else if (c == 3)
        {
            f = 0;
            cin >> x;
            i = find(v.begin(), v.end(), x);
            if (i == v.end())
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else if (c == 4)
        {
            cin >> x;
            i = find(v.begin(), v.end(), x);
            if(i!=v.end());
            v.erase(i);
        }
        if (c == 5)
        {
            cout << v.size() << endl;
        }
        else if (c == 6)
            sort(v.begin(), v.end());
        else if (c == 7)
        {
            i = v.begin();
            for (j = 0; j < v.size(); j++)
            {
                cout << *i << " ";
                i++;
            }
        }
    }
    return 0;
}