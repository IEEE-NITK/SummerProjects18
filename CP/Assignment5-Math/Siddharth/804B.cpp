#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
int main()
{
string s;
cin>>s;
long long res=0,bcnt=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='b')
        {
            bcnt=(bcnt%M) + 1 ;
        }
        else
        {
            res=(res%M+bcnt%M)%M;
            bcnt=(2*bcnt)%M;
        }
    }
    cout<<res;
}
