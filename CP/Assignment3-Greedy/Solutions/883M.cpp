/* 
* @link : http://codeforces.com/problemset/problem/883/M
*/

#include <bits/stdc++.h>

#define inp(x) scanf("%d",&x)
#define loop(i,n) for(int i=0;i<n;++i)
#define rloop(i,n) for(int i=n-1;i>=0;--i)
#define pb push_back
#define mp make_pair
#define ll long long

using namespace std;
//-------------------------------------------------//


int main(){
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    // Try to reach point after the flag (either horizontally away or vertically away)
    x = abs(x-a) + 1;
    y = abs(y-b) + 1;

    // ans will be 2x + 2y unless the points lie in the same line
    // in this we need to move away from that line of points and come back i.e 2*2
    // simplyifying this
    cout << 2 * (max(x, 2) + max(y, 2)) << endl;
    return 0;
}
