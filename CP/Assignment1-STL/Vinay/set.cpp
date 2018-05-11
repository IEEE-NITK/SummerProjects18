#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, c, x;
    set<int> m;
    set<int>::iterator itr;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 1)
        {
            cin >> x;
            m.insert(x);
        }
        else if (c == 2)
        {
            cout << m.size() << endl;
        }
        else if (c == 4)
        {
            itr = m.begin();
            cout << *itr << endl;
        }
        else if (c == 3)
        {
            itr = m.begin();
            m.erase(itr);
        }
        else if (c == 5)
        {
            for (itr = m.begin(); itr != m.end(); ++itr)
                cout << *itr << " ";
            cout << endl;
        }
        else if (c == 6)
        {
            cout << *m.end() << endl;
        }
        else if (c == 7)
        {
            cin >> x;
            itr = m.find(x);
            if(itr!=m.end())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (c == 8)
        {
            cin >> x;
            m.erase(x);
        }
    }
    return 0;
}