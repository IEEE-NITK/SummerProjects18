#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[4],m=1000000000000LL;
    char s[3];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>s[i];
    }
    sort(arr,arr+4);
    for(;;)
    {
        long long t=arr[0];
        for(int i=0;i<3;i++)
        {
            if(s[i]=='*')t*=arr[i+1];
            if(s[i]=='+')t+=arr[i+1];
        }
        m=min(t,m);
        long long A,B,C;
        if(s[1]=='+')B=arr[2]+arr[3];else B=arr[2]*arr[3];
        if(s[0]=='+')A=arr[0]+arr[1];else A=arr[0]*arr[1];
        m=min(m,s[2]=='*' ? A*B : A+B);
        if(!next_permutation(arr, arr+4))
            break;
    }
    cout<<m;
    return 0;
}