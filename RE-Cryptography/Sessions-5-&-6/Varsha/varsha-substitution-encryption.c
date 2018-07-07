#include<stdio.h>
#include<string.h>
void main(){
int i=0,j=0,k;
char mes[10],key[26],ch,ch1;
FILE *fp1,*fp2,*fp3;
fp1=fopen("varsha-msg-substitution.txt","r");
fp2=fopen("varsha-key-substitution.txt", "r");
fp3=fopen("varsha-ciphertext-substitution.txt", "w");
if(fp1==NULL || fp2==NULL)
{printf("no output");}
while((ch=fgetc(fp1))!=EOF)
{mes[i]=ch;i++;}
while((ch1=fgetc(fp2))!=EOF)
{key[j]=ch1;j++;}
fclose(fp1);
fclose(fp2);
for(i=0;i<strlen(mes)-1;i++)
{j=mes[i]-'a';
k=key[j];
fputc(k,fp3);
}}


