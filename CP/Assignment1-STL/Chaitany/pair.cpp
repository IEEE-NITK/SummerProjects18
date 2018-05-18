#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.second<b.second)
    {
        return 1;
    }
    if( a.second==b.second)
    {

        return (a.first<b.first);
    }
    else 
	return 0;

}
int main()
{
    pair<int,int> a[1000]={make_pair(0,0)};
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        switch(x)
        {
        case 1:
            int b,c,d;
            cin>>b>>c>>d;
            a[b].first=c;
            a[b].second=d;
            break;
        case 2:
            int q;
            cin>>q;
            if(q==1)
            {
                sort(a,a+1000);
            }
            if(q==2)
            {
                sort(a,a+1000,sortbysec);
            }
            break;
        case 3:
            for(int j=0; j<1000; j++)
                cout<<"("<<a[j].first<<","<<a[j].second<<")"<<'\t';
            cout<<'\n';
        }
    }
}
