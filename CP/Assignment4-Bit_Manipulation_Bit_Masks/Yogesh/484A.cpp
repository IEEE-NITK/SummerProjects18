#include<bits/stdc++.h>

using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        unsigned long long a,b,temp1,temp2;
        int bits_a=0,bits_b=0;
        cin>>b>>a;
        temp1=a,temp2=b;
        while(temp1>1)
        {
            bits_a++;
            temp1/=2;

        }
        while(temp2>1)
        {
            bits_b++;
            temp2/=2;
        }
        if((1ll<<(bits_a+1))-1==a)
            cout<<a<<endl;
        else if((1ll<<bits_a)-1>=b)
            cout<<(1ll<<bits_a)-1<<endl;
        else
        {
            unsigned long long start=b;
            int i=0;
            while(start<=a)
            {
                if(!((1ll<<i)&start))
                    start=start|(1ll<<i);
                i++;
            }
            start=start^(1ll<<(i-1));
            cout<<start<<endl;
        }
    }


}
