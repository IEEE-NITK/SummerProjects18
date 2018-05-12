#include <bits/stdc++.h>
using namespace std;

//Your code here
int main()
{
int arr[1000];
memset(arr,0,sizeof(int)*1000);
int q;
scanf("%d",&q);
while(q)
{
	int ch;
	scanf("%d",&ch);
	if(ch==1)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		arr[x]=y;
			}
			
	if(ch==2)
	sort(arr,arr+1000);
	
	if(ch==3)
	{
	int x,i;
	scanf("%d",&x);
	for(i=0;i<1000;i++)
	{if(x>=arr[i]&&x<arr[i+1])
	{printf("%d\n",arr[i]);
	break;
	}
	}}
	
	if(ch==4)
	{
		int x,i;
	scanf("%d",&x);
	for(i=0;i<1000;i++)
	{if(x>=arr[i]&&x<arr[i+1])
	{printf("%d\n",arr[i+1]);
	break;
	}}}

	if(ch==5)
	{int i;
		next_permutation(arr,arr+1000);
		for(i=0;i<1000;i++)
		cout<<arr[i]<<endl;
	}
	
	if(ch==6)
	{int i;
		prev_permutation(arr,arr+1000);
		for(i=0;i<1000;i++)
		cout<<arr[i]<<endl;
	}
	q--;
	}	
	return 0;
}
