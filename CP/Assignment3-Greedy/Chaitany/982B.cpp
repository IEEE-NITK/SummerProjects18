#include<bits/stdc++.h>
using namespace std;

int main() {


    long int n;
    cin >> n;

    map<long int,long int> m;

    set<long int> s;
    long int t;
    for(long int i = 0; i < n; i++) {

        cin >> t;
        s.insert(t);
        m[t] = i+1;
    }

    string str;
    cin >> str;

    set<long int> w;

    for(long int i = 0; i < str.size(); i++) {
        if(str[i] == '0')
        {
            long int c = *(s.begin());
            s.erase(c);
            w.insert(c);
            cout << m[c] << " ";
        }
        else
        {
            long int c = *(prev(w.end()));
            w.erase(c);
            cout << m[c] << " ";
        }
    }
    cout << endl;

    return 0;
}
