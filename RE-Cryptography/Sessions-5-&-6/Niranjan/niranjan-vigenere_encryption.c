#include<stdio.h>
#include<string.h>

void main()
{
	char str[800], key[10];
	int i=0;
	char ch,b;
	int len,j=0;
	
	FILE *fptr;
	fptr=fopen("message.txt","r");
	while(!(feof(fptr)))
	{
		fscanf(fptr,"%c",&b);
		str[i]=b;
		i++;		
	}
	str[i-2]='\0';//str contains the message
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

	key[i-2]='\0';//key contains the Key
	i=0;	
	len=strlen(key);//length of key
	b=str[i];	
	ch=key[j];

	int x1,x2;
	while(b!='\0')
	{
		if(b>=97 && b<=122)
		{
			x1=b;
			x2=ch;
			x1-=97;
			x2-=97;
			x1=x1+x2+1;
			x1=x1%26;
			x1+=97;
			str[i]=x1;
			j++;
			ch=key[j%len];
		}		
		
		i++;
		b=str[i];
	}
	
	fptr=fopen("niranjan-vigenere_ciphertext.txt","w");
	for(i=0;str[i]!='\0';i++)
	{
		b=str[i];
		fprintf(fptr,"%c",b);	
	}
}
