#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	FILE *f1,*f2;
	f1=fopen("akash-caesar_ciphertext.txt","r");
	f2=fopen("krishna-caesar_decode.txt","w");
	
	char m,d;
	while((m=fgetc(f1))!=EOF)
	{ if(islower(m))
       {
       	d=m-3;
        if(d<'a')
        	d+=26;
        }
       else
       	d=m;
       fputc(d,f2);
 	}
 	fclose(f2);
 	fclose(f1);
 }
