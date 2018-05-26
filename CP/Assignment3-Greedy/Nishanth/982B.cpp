#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,t=0;
    vector< pair<int,int> >vct;
    stack<int> stk;
    string str;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> k;
        vct.push_back(make_pair(k,i+1));
    }
    sort(vct.begin(),vct.end());
    cin >> str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='0')
        {
            stk.push(vct[t].second);
			cout<<vct[t].second;
			t++;
			cout<< " ";
        }
        else 
        {
            cout<<stk.top()<<" ";
            stk.pop();
        }
    }
    return 0;
}