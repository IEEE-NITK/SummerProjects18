#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r,x,data,anscount = 0;
    vector <int> A;
    vector <int> temp;

    cin >> n;
    cin >> l;
    cin >> r;
    cin >> x;

    for(int i=0;i<n;++i)
    {
        cin>>data;
        A.push_back(data);
    }

    int min, max, diff, totdiff;

    for(int mask=1; mask < (1<<n)-1; mask++)
    {
        
        for(int j=0; j<n; j++)
            if(mask & (1<<j))
                temp.push_back(A[j]);

        if(temp.size() == 1)
        {
            temp.clear();
            continue;
        }            

        min=*min_element(temp.begin(),temp.end());                  
        max=*max_element(temp.begin(),temp.end());                  
        diff=(max-min);
        totdiff = accumulate(temp.begin(),temp.end(),0);
        
        temp.clear();                     
        if(totdiff>=l && totdiff<=r && diff>=x)
        ++anscount;                         
    }

        min=*min_element(A.begin(),A.end());                 
        max=*max_element(A.begin(),A.end());                 
        diff=(max-min);
        totdiff = accumulate(A.begin(),A.end(),0);
        
        if(totdiff>=l && totdiff<=r && diff>=x)
        ++anscount;                     
    

    cout << anscount;

    return 0;
}