#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    map<string, int>::iterator itr;
    int c, i, n, y;
    char x[50];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 1)
        {
            cin >> x >> y;
            m[x] = y;
        }
        else if (c == 2)
        {
            cin >> x;
            itr = m.find(x);
            cout << itr->second << endl;
        }
        else if (c == 3)
        {
            cin >> x;
            itr = m.find(x);
            if(itr!=m.end())
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else if (c == 4)
        {
            for (itr = m.begin(); itr != m.end(); itr++)
                cout << "(" << itr->first << "," << itr->second << ")";
            cout << endl;
        }
    }
    return 0;
}