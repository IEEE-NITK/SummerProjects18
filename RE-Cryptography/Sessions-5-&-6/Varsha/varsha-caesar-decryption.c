#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *fp1,*fp2;
	char m,ch;
	fp1=fopen("/home/varsha/SummerProjects18/RE-Cryptography/Sessions-5-&-6/Shreyaa/Shreyaa-caesar_ciphertext.txt","r");
	if(fp1==NULL)
	{
		printf("no input");
	}
	fp2=fopen("varsha-decrypt-caesar.txt","w");                                       
	while((ch=fgetc(fp1))!=EOF){
		if(islower(ch))
		{
			m=ch-2;
			if(m<97){
			m=m+26;}}
		else {
			m=ch;}
		
		fputc(m,fp2);}
	fclose(fp1);
	fclose(fp2);}


