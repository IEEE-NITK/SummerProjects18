#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a=0,b=1023,x;
    char ch;
    for(int i=0;i<n;++i)
    {
        cin >> ch;
        cin >> x;
        if(ch=='|')
        {
            a|=x;
            b|=x;
        }
        if(ch=='^')
        {
            a^=x;
            b^=x;
        }
        if(ch=='&')
        {
            a&=x;
            b&=x;
        }
    }

    int first=0,second=0;
    for(int i=0;i<10;++i)
    {
        x = 1<<i;
        if((~a & x) && (~b & x))
        {
            first|=x;
            second|=x;
        }
        if((a & x) && (b & x))
        {
            first|=x;
        }
        if((a & x) && (~b & x))
        {
            second|=x;
        }
    }

    cout<<"2"<<endl;
    cout<<"| "<<first<<endl;
    cout<<"^ "<<second<<endl;
    return 0;
}