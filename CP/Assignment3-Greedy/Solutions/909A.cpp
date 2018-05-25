/* 
* @link : http://codeforces.com/problemset/problem/909/A
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
    string a,b;
    cin >> a >> b;
    //first char of a and b always printed
    putchar(a[0]);
    for(int i = 1; i< a.length(); ++i){
        // for output to be lexicographically smallest
        // print chars of a till they are lesser than b[0] as worst scenario output is a[0],b[0]
        if(a[i] < b[0])
            putchar(a[i]);
        else
            break;
    }

    putchar(b[0]);
    cout << endl;


    return 0;
}
