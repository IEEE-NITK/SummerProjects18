#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,t,n,x;
    cin>>t;
    for(int k=0;k<t;++k)
    {
        cin >> n;
        int matrix[n+1][n+1];
        
        cin >> x;
        matrix[1][1] = x;
        
        for(i=2;i<=n;++i)
            for(j=1;j<=i;++j)
            {
                cin >> x;
                if (j==1) matrix[i][1] = x + matrix[i-1][1];
                else if(j==i) matrix[i][j] = x + matrix[i-1][j-1];
                else matrix[i][j] = x + max(matrix[i-1][j], matrix[i-1][j-1]);
            }

        int maxele = matrix[n][1];
        for(j=1;j<=n;++j)
            if(matrix[n][j] >= maxele) maxele = matrix[n][j];

        cout<<maxele<<endl;
    }
    return 0;
}