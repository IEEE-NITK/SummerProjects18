#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *fp1,*fp2,*fp3;
	int i=0,j,m,k=0,val; 
	char ct[1000],ch,ch1,key[10];
	fp1=fopen("/home/varsha/SummerProjects18/RE-Cryptography/Sessions-5-&-6/Shreyaa/Shreyaa-vigener_ciphertext.txt","r");
	fp2=fopen("shreyaa-key-vigenere.txt","r");
	if(fp1==NULL || fp2==NULL )
	{
		printf("no input");}
	fp3=fopen("varsha-decrypt-vigenere.txt","w");
	while((ch=fgetc(fp1))!=EOF){
		ct[i]=ch;
		i++;
		}  
	while((ch1=fgetc(fp2))!=EOF){
		key[k]=ch1;
		k++;    }

	for(i=0,j=0;i<strlen(ct);i++,j++)
	{
		if(j>=strlen(key)-1)
		{   j=0; 
		} 
		if(isalpha(ct[i]))
		{

			val=(96+((ct[i]-(key[j])+26)%26));
		}

		else{
			val=ct[i];
			j=j-1;
		}
		fputc(val,fp3);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}


