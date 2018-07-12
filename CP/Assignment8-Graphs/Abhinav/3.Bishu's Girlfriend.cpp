/*   https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/description/   */
/*  SOLVED    */
#include<bits/stdc++.h>
using namespace std;
#define SIZE 1000+5
vector <int> adj[SIZE];
int vis[1005];

void dfs(int s,int len)
{
    vis[s] = len;
    for(unsigned int i=0;i<adj[s].size();++i)
    {
        if(vis[adj[s][i]] == 0)
        {
            dfs(adj[s][i],len+1);
        }
    }
}
int main()
{
    int n,x,q;
    cin >> n;
    
    for(int i=0;i<n-1;++i)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1,1);
    vector <int> qarr;
    cin >> q;
    for(int i=0;i<q;++i)
    {
        cin >> x;
        qarr.push_back(x);
    }
    int min = 10000;
    int ans;
    for(int i=0;i<q;++i)
    {
        if(vis[qarr[i]] < min)
        {
            min = vis[qarr[i]];
            ans = qarr[i];
        }
    }
    cout << ans << endl;
    
    return 0;
}