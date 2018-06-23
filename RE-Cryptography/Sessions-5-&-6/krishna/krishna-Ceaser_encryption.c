#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *f1,*f2;
	char k,l;
	 int key;
	f1 = fopen("krishna-message.txt","r");
	f2 =fopen("krishna_ceaser_cipher.txt","w");
	printf("\nenter the key\n");
	scanf("%d",&key);

	while((k=fgetc(f1))!=EOF)
	{ 
		if((k+key)>=65&&(k+key)<=90)
			k+=key;
		else
			k+=(k-25);
		putc(k,f2);

	}

	fclose(f1);
	fclose(f2);
	return 0;

}