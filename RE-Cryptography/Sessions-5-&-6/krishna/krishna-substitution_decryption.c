#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	FILE *f1,*f2,*f3;
	f1=fopen("akash-substitution_ciphertext.txt","r");
	f2=fopen("akash-key-substitution.txt","r");
	f3=fopen("krishna-substitution_decode.txt","w");
	char key[26],message[20],m,k;
	int i=0,pos,t;

	while((m=fgetc(f1))!=EOF)
		message[i++]=m;
	message[i]='\0';
	
	for(i=0;i<26;++i)
	{
		k=fgetc(f2);
		key[i]=k;
	}
	for(i=0;i<strlen(message);++i)
	{   
		m=message[i];
		for(int j=0;j<strlen(key);++j)
			if(m==key[j])
			{
				pos=j;
				break;
			}
		t=pos+97;
		fputc(t,f3);


	}

	fclose(f3);
	fclose(f2);
	fclose(f1);
	return 0;
 }	
