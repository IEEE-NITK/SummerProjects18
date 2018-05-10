#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()


{
    vector<int> v;
    vector<int>:: iterator it;
    int  x, y, t,q;
    cin>>t;
    while(t--)
    {
        cin>>q;
        switch(q)
        {
            case 1: cin>>x;
                    v.push_back(x);
                    break;
            case 2: cin>>x>>y;
                    v[x]=y;
                    break;
            case 3: cin>>x;
                    if((it=find(v.begin(),v.end(),x))!=v.end())
                    cout<<"Yes"<<endl;
                    else cout<<"No"<<endl;
                    break;
            case 4: cin>>x;
                    v.erase(find(v.begin(), v.end(),x));
                    break;
            case 5: cout<<v.size()<<endl;
                    break;
            case 6: sort(v.begin(),v.end());
                    break;
            case 7: for( it=v.begin();it!=v.end();it++)
                    cout<<*it<<" ";
                    cout<<endl;
                    break;
        }

    }

    return 0;

}
