#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r,x,Max,Min,np,cnt=0;
    cin>>n>>l>>r>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int sum;
    for(int i=0;i<(1<<n);i++)
    {
        sum=0,Max=-1,Min=10000000,np=0;
        for(int j=0;j<n;j++){
            if((1<<j)&i){
                sum+=v[j];
                if(v[j]>Max)
                    Max=v[j];
                if(v[j]<Min)
                    Min=v[j];
                np++;
            }
        }
        if(Max-Min>=x&&sum>=l&&sum<=r&&np>=2)
            cnt++;
    }

    cout<<cnt<<endl;

}
