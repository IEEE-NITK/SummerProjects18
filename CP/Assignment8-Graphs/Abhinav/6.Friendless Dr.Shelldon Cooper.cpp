/*  https://www.hackerearth.com/practice/algorithms/graphs/minimum-spanning-tree/practice-problems/algorithm/friendless-dr-sheldon-cooper-14/description/  */
/*  SOLVED  */
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll prim(vector<pair<int,int> > a[],int v)
{
    bool visited[v+1]={0};
    int minimumcost=0;

    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;
    q.push(make_pair(0,1));
    while(!q.empty())
	{
        pair<int,int> p = q.top();
        q.pop();
        int x = p.second;
		int c = p.first;
        if(visited[x])
		{
            continue;
        }

        minimumcost += c;
        visited[x] = true;

        for (int i = 0; i <a[x].size() ; ++i)
		{
            int y = a[x][i].second;
            if(!visited[y])
			{
                q.push(a[x][i]);
            }
        }
    }
    return minimumcost;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
	{
        int v,e;
        cin >> v >> e;
        vector<pair<int,int> > a[v+1];
        for (int i = 0; i <e ; ++i) {
            int x,y;
            cin >> x >> y;
            a[x].push_back(make_pair(1,y));
            a[y].push_back(make_pair(1,x));
        }
        cout << prim(a,v) << endl;
    }
    return 0;
}
