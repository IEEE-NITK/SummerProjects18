#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *f1,*f2,*f3;
	f1=fopen("krishna-message.txt","r");
	f2=fopen("key-vigenere.txt","r");
	f3=fopen("krishna-vigenere_cipher.txt","w");
	int max,max_key;
	char msg,key;
	fseek(f1,0,2);
	max=ftell(f1);
	fseek(f1,0,0);
	fseek(f2,0,2);
	max_key=ftell(f2);

	while(ftell(f1)<max-1)
	{
	  fscanf(f1,"%c",&msg);

	  if(isalpha(msg))
	  { msg=tolower(msg);
	  fscanf(f2,"%c",&key);
	  if(ftell(f2)==max_key)
	  fseek(f2,0,0);
	  fprintf(f3,"%c",((msg+key)%26)+'a');

	  }
	  if(msg==' ')
           fprintf(f3,"%c",' ');

	  
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	return 0;
}
