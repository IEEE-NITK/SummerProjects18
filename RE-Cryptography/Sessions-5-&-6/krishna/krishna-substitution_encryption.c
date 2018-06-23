#include<stdio.h>
int main()
{
	FILE *f1,*f2,*f3;
	char message [8],temp,key[26];
	int i;
	
	
	f1=fopen("krishna-substution_cipher.txt","w");
	f2=fopen("message-substitution.txt","r");
	f3=fopen("key-substitution.txt","r");

	for(i=0;i<26;++i)
		key[i]=fgetc(f3);
	for(i=0;i<8;++i)
		message[i]=fgetc(f2);

    
    for(i=0;i<message[i]!='\0';++i)
    {  temp=message[i];
    	
    	temp-='a';
        fprintf(f1,"%c",key[temp]);
    }

    fclose(f3);
    fclose(f2);
    fclose(f1);
    return 0;

    
    
}