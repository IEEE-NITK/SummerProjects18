#include<stdio.h>
void main()
{
FILE *ct,*key,*msg;
ct = fopen("varsha-ciphertext-substitution.txt","r");
msg = fopen("Shreyaa-substitution_decrypted.txt","w");
key = fopen("varsha-key-substitution.txt","r");
char k[26];
char a;
int i=0;
while((a=fgetc(key))!=EOF)
{
 k[i]=a;
 i++;
}
char c;
while((a=fgetc(ct))!=EOF)
{
 for(i=0;i<26;i++)
 {
  if(a==k[i])
  {
   break;
  }
 }
 c=97+i;
 fputc(c,msg);
}
}





