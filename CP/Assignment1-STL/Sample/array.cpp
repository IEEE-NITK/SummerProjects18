
#include <bits/stdc++.h>
using namespace std;
int main()
{
int a[1000];
memset(a,0,1000*sizeof(int));
int x,y;
cin>>x;
while(x--)
{
cin>>y;
switch(y)
{
case 1:cin>>x>>y;
a[x-1]=y;
break;
case 2:sort(a,a+1000);
break;
case 3:sort(a,a+1000);
cin>>x;
cout<<(lower_bound(a,a+1000,x))-a<<endl;
break;
case 4:sort(a,a+1000);
cin>>x;
cout<<(upper_bound(a,a+1000,x))-a<<endl;
break;

case 5:next_permutation(a,a+1000);
for(int i=0; i<1000;i++)
cout<<a[i]<<" ";
cout<<endl;
break;
case 6:prev_permutation(a,a+1000);
for(int i=0; i<1000;i++)
cout<<a[i]<<" ";
cout<<endl;
break;
}
}
}
