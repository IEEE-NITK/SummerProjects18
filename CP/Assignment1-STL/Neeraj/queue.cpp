#include<bits/stdc++.h>
using namespace std;
int main()


{   
    queue<int> Q;
    int t, q, x;
    cin>>t;
    while(t--)
    {   
        cin>>q;
        switch(q)
        {
            case 1: cout<<Q.front()<<endl;
                    break;
            case 2: cout<<Q.back()<a<endl;
                    break;
            case 3: cin>>x;
                    Q.push(x);
                    break;
            case 4:Q.pop();
                    break;
            case 5: cout<<Q.size();
                    break;
        }

    }
    
    return 0;

}
