#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
FILE *fp1,*fp2,*fp3;
int i=0,j,m,k=0,val; 
char mes[1200],ch,ch1,key[10];
fp1=fopen("varsha-msg-vigenere.txt","r");
fp2=fopen("varsha-key-vigenere.txt","r");
if(fp1==NULL || fp2==NULL )
{
printf("no input");}
fp3=fopen("varsha-ciphertext-vigenere.txt","w");
while((ch=fgetc(fp1))!=EOF){
mes[i]=ch;
i++;}
while((ch1=fgetc(fp2))!=EOF){
key[k]=ch1;
k++;}
for(i=0,j=0;i<strlen(mes);i++,j++)
{
if(j>strlen(key))
{j=0;}
if(isalpha(mes[i]))
{
val=(97+((mes[i]-97+key[j]-97)%26));
}

else{
val=mes[i];
j=j-1;
}
fputc(val,fp3);
}
fclose(fp1);
fclose(fp2);
fclose(fp3);
}


