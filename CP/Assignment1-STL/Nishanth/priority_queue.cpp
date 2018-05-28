#include <iostream>
#include<queue>
#include<algorithm>
#include<string.h>
#include <utility>

using namespace std;

int main()
{
    int q,n,i,x,y,z;
    priority_queue <pair < int , pair<int,int> > > pr;
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> n;
        switch(n)
        {
        case 1:
            cin >> x;
            cin >> y;
            cin >> z;
            pr.push(make_pair(x,make_pair(y,z)));
            break;
        case 2:
            cout << "(" << pr.top().first << ",(" << pr.top().second.first << "," <<pr.top().second.second <<"))\n";
            break;
        case 3:
            pr.pop();
            break;
        case 4:
            cout << pr.size() << "\n";
            break;
            
            
        }
    }
    return 0;
}