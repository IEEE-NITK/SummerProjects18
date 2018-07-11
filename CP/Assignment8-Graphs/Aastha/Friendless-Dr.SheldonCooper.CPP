#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,i;
        cin>>a>>b;
        vector<int>adj;
        for(i=0;i<b;i++)
        {
            int x,y;
            cin>>x>>y;
            if(find(adj.begin(),adj.end(),x)!=adj.end())
            {
                goto end;
            }
            else
            {
                adj.push_back(x);
            }
            end:
            if(find(adj.begin(),adj.end(),y)!=adj.end())
            {
                goto last;
            }
            else
            {
                adj.push_back(y);
            }
            last:
            continue;
        }
        int c=adj.size();
        cout<<c-1<<endl;
    }
}