/* 
* @link : http://codeforces.com/problemset/problem/980/C
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
    int n, k;
    cin >> n >> k;
    
    int c[256];

    memset(c, -1, sizeof(c));// -1 => not grouped
    int x, j;
    while(n--){
        cin >> x;
        // If not grouped, assign one starting from 12 in case of x=14.
        if(c[x] == -1){
            for(j = max(0, x-k+1); j <= x; j++){
				if(c[j] == -1 || c[j] == j){
					for(int i = j; i <= x; i++)
						c[i] = j;
					break;
				}
			}
        }
        cout << c[x] << " ";
    }
    cout << endl;
    return 0;
}
