#include<bits/stdc++.h>
using namespace std;
int main()


{   stack<int> s;
    int t;
    cin>>t;
    int p;

    while(t--)
    {
        int q;
        cin>>q;
        switch(q)
        {
            case 1:cout<<s.top()<<endl;
                    break;
            case 2: cin>>p;
                    s.push(p);
                    break;
            case 3:s.pop();
                    break;
            case 4:cout<<s.size()<<endl;
                    break;
                    
        }
    }
    
    return 0;

}
