#include<stdio.h>
void factorial(int n)
{
	int i;
	long fact=1;
	for(i=1;i<=n;i++)
	fact*=i;
	printf("Factorial of n=%ld\n",fact);
}

int main()
{
	int n;
	printf("Enter value of n\n");
	scanf("%d",&n);
	factorial(n);
	return 0;
}
