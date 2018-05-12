#include <bits/stdc++.h>
using namespace std;

//Your code here
int main()
{
queue<int> q;
int qa,ch;
scanf("%d",&qa);
while(qa)
{
	scanf("%d",&ch);
	if(ch==1)
	printf("%d\n",q.front());
	
	if(ch==2)
    printf("%d\n",q.back());
	
	if(ch==3)
	{int x;
	scanf("%d",&x);
    q.push(x);}
    
    if(ch==4)
    q.pop();
    
    if(ch==5)
   {int k=q.size();
       printf("%d\n",k);
	}	
	qa--;
}
return 0;
}
