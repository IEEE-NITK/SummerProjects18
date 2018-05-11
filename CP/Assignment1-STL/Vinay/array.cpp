#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 1000> a;
    int *k;
    int n, i, c, x, y, j, ch;
    a.fill(0);
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 1)
        {
            cin >> x >> y;
            a.at(x)=y;
        }
        else if (c == 2)
            sort(a.begin(), a.end());
        else if (c == 3)
        {
            cin >> x;
            k = lower_bound(a.begin(), a.end(), x);
            cout << k << endl;
        }
        else if (c == 4)
        {
            cin >> x;
            k == upper_bound(a.begin(), a.end(), x);        
            cout << k << endl;
        }
        else if (c == 5)
        {
            if (next_permutation(a.begin(), a.end()))
            {
                for (j = 0; j < 1000; j++)
                    cout << a.at(j) << "\t";
            }
        }
        else if (c == 6)
        {
            if (prev_permutation(a.begin(), a.end()))
            {
                for (j = 0; j < 1000; j++)
                    cout << a.at(j) << "\t";
            }
        }
    }
    return 0;
}