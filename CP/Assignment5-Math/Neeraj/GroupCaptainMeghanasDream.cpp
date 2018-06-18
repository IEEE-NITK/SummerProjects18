#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <b; i++)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define llp 1000000007

bool isp[1000001];

int pre[1000001];
bool issrp[1000001];
vi primes;

int countdiv(int a)
{   int count=1;
    if(a==0)
    {
        return 0;
    }
    if(a==1)
    {
        return 1;
    }
    int ct=0;
    for(int i=0;;i++)
    {
        if(primes[i]*primes[i]*primes[i]>a)
            break;

        ct=0;

            while(a%primes[i]==0)
            {
                a/=primes[i];
                ct++;
            }
            count=count*(ct+1);

    }

    if(isp[a])
    {
        count=count*2;
    }
    else if(issrp[a])
    {
        count=count*3;
    }
    else if(a!=1)
    {
        count=count*4;
    }
    return count;
}
void isprime()
{
   // cout<<"Called isprime function\n";
    isp[0]=false;
    isp[1]=false;
    pre[0]=0;
    pre[1]=0;
    for(int i=2; i*i<=1000000;i++)
    {   //cout<<"In sieve outer loop i="<<i<<"\n";
        if(isp[i])
        {
            primes.PB(i);
            issrp[i*i]=true;

        for(int j=i*i;j<=1000000;j=j+i)
        {  // cout<<"In sieve inner loop setting isp["<<j<<"]="<<false<<"\n";
            isp[j]=false;
        }
        }
    }

    //cout<<"Sieve done\n";
    for(int i=2;i<=1000000;i++)
    {
        pre[i]=pre[i-1];
        if(isp[i])
        {
            pre[i]++;
        }
    }
   // cout<<"Back to main function\n";
    return;
}

int main()
{   ios::sync_with_stdio(false);
memset(isp,true,sizeof(isp));
memset(issrp,false,sizeof(issrp));
//REP(i,0,1000001)
//cout<<isp[i];

    int q;
    scanf("%d",&q);
    int l,r,x;
    int y;
    isprime();
    //printf("Pre-processing done\n");
   while(q--)
    {
        scanf("%d%d%d",&l,&r,&x);
        int X=l;
       // int countloop=0;
        //int flag=0;
        for(int i=(r-l+1); ;)
        {   i=i/2;
        if(i==0)
            break;
            int flag=0;
         //int countloop=0;
            while(X+i<=r && pre[X+i]-pre[l-1]<=x && flag==0)
            {    if(pre[X+i]-pre[l-1]==x)
                    flag=1;
                X=X+i;
              //  if(X>r)
                /*{printf("X>r so break\n");
                    break;
                }*/
              /*  printf("Changed X=%d\n",X);
                countloop++;*/
               /* if(countloop>100)
                {
                    printf("Error persists\n");
                    break;
                }*/
              // printf("%d ",i);
                //break;
            }

        }
       // printf("BS complete X=%d\n",X);




        if((pre[r]-pre[l-1])<x)
        {
            printf("-1 ");
        }
        else {
                while(pre[X]-pre[l-1]==x)
                {
                    X--;
                }
                X++;
            printf("%d ",X);
        }
        y=pre[r]-pre[l-1];
       
        printf("%d\n",countdiv(y));


    } return 0;
}
