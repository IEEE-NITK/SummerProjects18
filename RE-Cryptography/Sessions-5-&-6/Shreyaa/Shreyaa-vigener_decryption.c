#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
FILE *msg,*ct,*key;
msg = fopen("Shreyaa-vigener_decrypted.txt","w");
ct = fopen("varsha-ciphertext-vigenere.txt","r");
key = fopen("varsha-key-vigenere.txt","r");

int i=0;
int n;
fseek(key,0,2);
n=ftell(key);
fseek(key,0,0);
char a,b,c;
i=0;
int d;
while((c=fgetc(ct))!=EOF)
{
 if(isalpha(c))
 {
  b=fgetc(key);
  i++;
  if(i==n-1)
  {
   fseek(key,0,0);
   i=0;
  }
  d=c-b;
  if(d<0)
  {
   d+=26;
  }
  a=97+d;
 }


 else
 {
  a=c;
 }
 putc(a,msg);
}
}









