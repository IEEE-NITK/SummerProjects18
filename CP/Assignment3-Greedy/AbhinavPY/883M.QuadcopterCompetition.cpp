#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1 , y1, x2, y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    int absx, absy;

    if(x1 > x2)
    absx = x1 - x2;
    else
    absx = x2 - x1;
    if(absx < 0)
    absx = absx * -1;
    if(absx == 0)
    ++absx;

    if(y1 > y2)
    absy = y1 - y2;
    else
    absy = y2 - y1;
    if(absy < 0)
    absy = absy * -1;
    if(absy == 0)
    ++absy;

    int ans = (absx + 1)*2 + (absy + 1)*2;

    cout << ans;

    return 0; 
}