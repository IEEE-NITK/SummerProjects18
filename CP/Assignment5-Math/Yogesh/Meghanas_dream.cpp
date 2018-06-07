#include<bits/stdc++.h>
using namespace std;
int cnt_div(vector<int> &min_fact, int n)
{
    if(n==0)
       return 0;
    if(n==1)
        return 1;
    if(min_fact[n]==n)
        return 2;
    else
    {
        int div=1,s=0,temp=min_fact[n];
        while(n!=1)
        {
            if(min_fact[n]==temp)
                s++;
            else
            {
                div=div*(s+1);
                s=1;
                temp=min_fact[n];
            }
            n/=min_fact[n];
        }
        div*=(s+1);
        return div;

    }
}

int main()
{
    int n=1000000;
    vector<bool> prime(n+1,true);
    prime[1]=false;
    vector<int> min_fact(n+1);
    for(int i=1;i<=n;i++)
        min_fact[i]=i;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(prime[i])
        {
            for(int j=2;i*j<=n;j++){
                prime[i*j]=false;
                if(i<min_fact[i*j])
                    min_fact[i*j]=i;
            }
        }
    }

    vector<int> cnt_prime(n+1,0);
    for(int i=2;i<=n;i++)
        cnt_prime[i]+=cnt_prime[i-1]+prime[i];
    vector<int> min_prime(100000,0);
    int i=1;
    while(i<=n)
    {
        if(cnt_prime[i]==cnt_prime[i+1])
        {
            min_prime[cnt_prime[i]]=i;
            while(cnt_prime[i]==cnt_prime[i+1])
                i++;
        }
        else if(i<=n){
            min_prime[cnt_prime[i]]=i;
        }
        i++;
    }
    int T;
    scanf("%d",&T);
    while(T--){
        int l,r,x;
        scanf("%d %d %d",&l,&r,&x);
        if(cnt_prime[l]-prime[l]+x>cnt_prime[r])
            printf("-1 ");
        else
            printf("%d ",min_prime[cnt_prime[l]-prime[l]+x]);

        printf("%d\n",cnt_div(min_fact,cnt_prime[r]-cnt_prime[l]+prime[l]));
    }
}
