#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator i;
    int n, c, x;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        cin >> c;
        if (c == 1)
        {
            i = v.end();
            i--;
            cout << *i << endl;
        }
        else if (c == 2)
        {
            cin >> x;
            v.push_back(x);
        }
        else if (c == 3)
        {
            v.pop_back();
        }
        else if (c == 4)
        {
            cout << v.size() << endl;
        }
    }
    return 0;
}