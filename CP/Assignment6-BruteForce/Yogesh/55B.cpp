#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[4];
    long long min_val=1000000000001;
    char f1,f2,f3;
    for(int i=0;i<4;i++)
        cin>>num[i];
    cin>>f1>>f2>>f3;
    for(int i=0;i<4;i++)
        for(int j=i+1;j<4;j++)
    {
        vector<int> v;
        int val1;
        if(f1=='+')
            val1=num[i]+num[j];
        else
            val1=num[i]*num[j];
        v.push_back(val1);
        for(int k=0;k<4;k++)
            if(k!=i&&k!=j)
                v.push_back(num[k]);
        for(int p=0;p<3;p++)
            for(int q=p+1;q<3;q++)
        {
            long long val2;
            if(f2=='+')
            val2=v[p]+v[q];
                else
            val2=v[p]*v[q];
            if(f3=='+')
                val2=val2+v[3-p-q];
            else
                val2=val2*v[3-p-q];

            if(val2<min_val)
                min_val=val2;
        }
    }
    cout<<min_val;
}
