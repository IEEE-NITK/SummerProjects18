#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
FILE *msg,*ct,*key;
msg=fopen("Shreyaa-vigener_message.txt","r");
key=fopen("Shreyaa-vigener_key.txt","r");
ct=fopen("Shreyaa-vigener_ciphertext.txt","w");
char m[1000],k[10],c;
int i=0;




int n;
fseek(key,0,2);
n=ftell(key);
fseek(key,0,0);
char a,b;
i=0;
while((c=fgetc(msg))!=EOF)
{
if(!(isalpha(c)))
{a=c;}
else
{
b=fgetc(key);
i++;
if(i==n)
{fseek(key,0,0);i=0;}
a=96+((b+c-192)%26);
}
putc(a,ct);
}
fclose(msg);
fclose(ct);
fclose(key);
}




























