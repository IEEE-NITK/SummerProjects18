#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	int i,len,count=0;
	printf("Enter a string\n");
	scanf("%[^\n]",str);
	len=strlen(str);
	for(i=0;i<len;i++)
		if(str[i]==str[len-i-1])
		count+=1;
	if(count==len)
	printf("String is palindrom\n");
	else
	printf("String is not palindrom\n");
	return 0;
}

