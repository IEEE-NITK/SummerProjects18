#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
FILE *fp1,*fp2;
int i=0,j,m;
char mes[1300],ch;
fp1=fopen("varsha-msg-caesar.txt","r");
if(fp1==NULL)
{
printf("no input");}
fp2=fopen("varsha-ciphertext-caesar.txt","w");
while((ch=fgetc(fp1))!=EOF){
mes[i]=ch;
i++;}
fclose(fp1);
for(i=0;i<strlen(mes);i++)
{m=mes[i];
if(islower(mes[i]))
{
j=((m+3-97)%26+97);}
else
{
j=m;}
fputc(j,fp2);}
fclose(fp2);
}

