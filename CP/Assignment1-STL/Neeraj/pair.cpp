#include<bits/stdc++.h>
using namespace std;
bool ssecond(const pair<int, int>& a,const pair<int,int>& b)
{   if(a.second<b.second)
    {
        return 1;
    }
    else if( a.second==b.second)
    {

        return (a.first<b.first);
    }
    else return 0;

}
int main()
{   pair<int,int> p[1000]=make_pair(0,0);
    int t, q,x,y,z;
    cin>>t;
    while (t--)
    {
        cin>>q;
        switch(q)
        {
            case 1: cin>>x>>y>>z;
                    p[x].first=y;
                    p[x].second=z;
                    break;
            case 2: cin>>x;
                    if(x==1)
                    sort(p,p+1000);
                    if(x==2)
                    sort(p,p+1000,ssecond);
                    break;
            case 3:for(int i=0; i<1000; i++)
                    cout<<"("<<p[i].first<<","<<p[i].second<<") ";
                    cout<<endl;
        }
    }
return 0;
}
