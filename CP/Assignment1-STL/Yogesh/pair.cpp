#include<bits/stdc++.h>
using namespace std;
bool comp1(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.first<p2.first)
        return 1;
    else if(p1.first==p2.first)
    {
        if(p1.second<p2.second)
            return 1;
        return 0;
    }
    return 0;
}
bool comp2(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.second<p2.second)
        return 1;
    else if(p1.second==p2.second)
    {
        if(p1.first<p2.first)
            return 1;
        return 0;
    }
    return 0;
}
int main()
{
    vector< pair<int,int> >v(5, make_pair(0,0));
    int Q;
    cin>>Q;
    while(Q--)
    {
        int choice,x,y,z;
        cin>>choice;
        if(choice==1)
        {
            cin>>x>>y>>z;
            v[x-1].first=y;
            v[x-1].second=z;
        }
        else if(choice==2)
        {
            int choice2;
            cin>>choice2;
            if(choice2==1)
                sort(v.begin(),v.end(),comp1);
            else
                sort(v.begin(),v.end(),comp2);
        }
        else
        {
            for(int i=0;i<5;i++)
                cout<<'('<<v[i].first<<" "<<v[i].second<<')';
            cout<<endl;
        }
    }
    return 0;

}
