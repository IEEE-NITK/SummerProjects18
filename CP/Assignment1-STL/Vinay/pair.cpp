#include <bits/stdc++.h>

using namespace std;

int main()

{

  int c, x, y, z, j, n, i;

  array<pair<int, int>, 1000> a;

  for (int i = 0; i < 1000; i++)

  {

    a.at(i) = make_pair(0, 0);
  }

  cin >> n;

  for (i = 0; i < n; i++)

  {

    cin >> c;

    if (c == 1)

    {

      cin >> x >> y >> z;

      a.at(x) = make_pair(y, z);
    }

    else

        if (c == 2)

    {

      cin >> x;

      if (x == 1)

      {

        sort(a.begin(), a.end());
      }

      else

          if (x == 2)

        sort(a.begin(), a.end(), [](const pair<int, int> &lhs, const pair<int, int> &rhs) {
          return lhs.second < rhs.second;
        });
    }

    else

        if (c == 3)

    {

      for (j = 0; j < n; j++)

      {

        cout << "(" << a.at(i).first << "," << a.at(i).second << ")";
      }
    }
  }

  return 0;
}