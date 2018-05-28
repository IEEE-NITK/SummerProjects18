#include<stdio.h>
#include<string.h>
int func(int n)
{
	int d_root=0;
	for(int i=0;n>0;i++)
	{
		d_root=d_root+n%10;
		n=n/10;
	}
	if(d_root<10)
	return d_root;
	else 
	return func(d_root);
}

int main()
{
	int n;
	printf("Enter value of n\n");
	scanf("%d",&n);
	printf("Digital root of n=%d\n",func(n));
	return 0;
}

