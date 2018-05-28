#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],result[100][100];
	int i,n,m,j;

	printf("Enter value of n,m\n");
	scanf("%d%d",&n,&m);

	printf("Enter all the elements of first array\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		scanf("%d",&a[i][j]);

	printf("Enter all the elements of second array\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		scanf("%d",&b[i][j]);

	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		result[i][j]=a[i][j]+b[i][j];

	return 0;
}

