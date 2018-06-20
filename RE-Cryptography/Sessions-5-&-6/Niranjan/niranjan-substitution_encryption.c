#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
	char str[10],key[10];
	char ch,b;
	int i=0;

	int x;

	FILE *fptr;
	fptr=fopen("message.txt","r");
	while(!(feof(fptr)))
	{
		fscanf(fptr,"%c",&b);
		str[i]=b;
		i++;
		
	}
	str[i-2]='\0';//str contains message
	i=0;
	fclose(fptr);
	fptr=fopen("key.txt","r");
	while(!(feof(fptr)))
	{
		fscanf(fptr,"%c",&b);
		key[i]=b;
		i++;
		
	}
	fclose(fptr);
	key[i-2]='\0';
	i=0;
	b=str[i];
	
	while(b!='\0'){
		if(b>=97 && b<=122)
		{
			x=b;
			x-=97;
			str[i]=key[x];
		}		
		
		i++;
		b=str[i];
	}
	
	fptr=fopen("niranjan-substitution_ciphertext.txt","w");
	for(i=0;str[i]!='\0';i++)
	{
		b=str[i];
		fprintf(fptr,"%c",b);	
	}
}
