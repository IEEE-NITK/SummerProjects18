#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<int> s(n+2,0), v(n+2);
        for(int i=0;i<n;i++)
            cin>>v[i];
        if(v[0]==-1)
            s[0]=1;
        for(int i=1;i<n;i++)
        {
            s[i]+=s[i-1];
            if(v[i]==-1)
                s[i]++;
        }
        int min_toggle=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            if(i+1-s[i]+s[n-1]-s[i]<min_toggle)
                min_toggle=i+1-s[i]+s[n-1]-s[i];

        }
        cout<<min_toggle<<endl;
    }
}
