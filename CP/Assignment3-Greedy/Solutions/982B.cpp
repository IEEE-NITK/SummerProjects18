/* 
* @link : http://codeforces.com/problemset/problem/982/B
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
    cin >> n;
    pair<int, int> w[n];
    loop(i,n){
        inp(w[i].first);
        w[i].second = 1+i;
    }
    sort(w,w + n);

    string ord;
    cin >> ord;
    
    int in = 0;
    stack<int> st;
    loop(i, ord.length()){
        if(ord[i]=='0'){
            cout << w[in].second << " ";
            st.push(w[in].second);
            in++;
        }
        else{
            cout << st.top() << " ";
            st.pop();
        }
    }
    cout << endl;
    return 0;
}
