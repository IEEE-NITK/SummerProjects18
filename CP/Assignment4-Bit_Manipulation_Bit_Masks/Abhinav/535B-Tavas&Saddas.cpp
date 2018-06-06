#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,temp,rem;
    cin >> n;
    vector <int> v;
    temp = n;

    while(temp!=0)
    {
        rem = temp%10;
        temp/=10;
        if(rem != 0)
        {
            v.push_back(rem);
        }
    }
    reverse(v.begin(),v.end());

    for(i=0;i<v.size();++i)
    {
        if(v[i] == 4)
            v[i] = 0;

        else if(v[i] == 7)
            v[i] = 1;
    }
    //bitmasking is complete and is stored in vector v

    long int ans = 0;

    for(i=1;i<v.size();++i)
    {
        ans += pow(2,i);
    }
    
    reverse(v.begin(),v.end());

    int b=1;

    for(i=0;i<v.size();++i)
    {
        ans += v[i]*b;
        b *= 2;
    }

    cout << ans+1;

    cout << endl;

    return 0;
}