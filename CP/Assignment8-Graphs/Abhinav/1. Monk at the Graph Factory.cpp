/*SOLVED*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cin >> n;
    for(int i=0;i<n;++i)
    {
        int x;
        cin >> x;
        sum += x;
    }
    int expected = n*2 - 2;

    if(sum == expected)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
