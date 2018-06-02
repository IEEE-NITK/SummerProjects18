/* 
* @link : http://codeforces.com/problemset/problem/804/A
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
    int n;
    inp(n);
    /* cost b/w i,j = (i+j)%(n+1)
    * Try pairing elements to minimize this and work out 
    * for even and odd n separately
    */
    cout << (int)((n-1)/2) << endl;
    return 0;
}
