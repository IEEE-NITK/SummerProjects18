#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll mod = 1000000007;

int main() {
    ll acc = 0;
    ll tot = 0;

    string s;
    cin >> s;

    for(int i = s.size()-1; i >= 0; i--) {
        if(s[i] == 'a')
        {
            tot += acc;
            tot %= mod;
            acc *= 2;
            acc %= mod;
        }
        else
        {
            acc++;
            acc %= mod;
        }
    }

    cout << tot << endl;
}
