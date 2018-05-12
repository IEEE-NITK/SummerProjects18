#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c,Q,x;
    cin >> Q;
    vector<int> v1;
    while(Q--)
    {
        cin >>c;
        switch(c)
        {
        case 1 :
           {
            cin>>x;
            v1.push_back(x);
            break;
           }
        case 2 :
            {
                cin>>x;
                int y;
                cin>>y;
                v1[x]=y;
                break;
            }
        case 3 :
            {
               cin>>x;
               if(binary_search(v1.begin(),v1.end(),x))
                    cout<<"Yes";
               else
                cout<< "No";
            break;
            }
        case 4 :
            {
                cin>>x;
                if(count(v1.begin(),v1.end(),x))
                    v1.erase(find(v1.begin(),v1.end(),x));
                break;
            }
        case 5 :
            cout<<v1.size()<<endl;
            break;
        case 6 :
            {
                sort(v1.begin(),v1.end());
                break;
            }
        case 7 :
            {
                vector<int>:: iterator it1;
               for(it1=v1.begin();it1!=v1.end();it1++)
                    cout<<*it1<<" ";
               cout<<endl;
               break;
            }
        }
    }
    return 0;
}
