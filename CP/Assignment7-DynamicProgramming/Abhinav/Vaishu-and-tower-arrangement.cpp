#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long n,i;
    for(int j=0;j<t;++j)
    {
        cin >> n;
        int a[n];
        int sum[n] = {0};
        for(i=0;i<n;++i)
            cin >> a[i];
            
        for(i=0;i<n;++i)
        {
            if(a[i]==-1)
                sum[i] = sum[i-1] + 1;
            else
                sum[i] = sum[i-1];
            //cout<<"no. of -1 till"<<i+1<<": "<<sum[i]<<endl;
            //cout<<"no. of  1 till"<<i+1<<": "<<i-sum[i]<<endl;
        }
        
        long long result = 100001;
        
        for(i=0;i<n-1;++i)
        {
            result = min(result, (i+1-sum[i])+(sum[n-1]-sum[i]));
            //cout<<i<<" result "<<result<<endl;
        }
        
        cout<<result<<endl;
    }
    return 0;
}