#include<stdio.h>
#include<ctype.h>
void main()
{
FILE *ct,*msg;
ct = fopen("varsha-ciphertext-caesar.txt","r");
msg = fopen("Shreyaa-caesar_decrypted.txt","w");
char a,c;
int d;
while((a=fgetc(ct))!=EOF)
{if(isalpha(a))
{d=a-96-3;
if(d<1)
{c=122+d;}

else
{c=96+d;}
fputc(c,msg);
}
else
{c=a;fputc(c,msg);}}
fclose(msg);
fclose(ct);
}


