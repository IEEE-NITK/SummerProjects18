#include<stdio.h>
void main()
{
FILE *msg,*ct;
msg = fopen("Shreyaa-caesar_message.txt","r");
ct = fopen("Shreyaa-caesar_ciphertext.txt","w");
char c,b;
c=fgetc(msg);
while(c!=EOF)
{


if(!(c>='a' && c<='z'))
{
b=c;
}
else
{
b=c+2;
}
fputc(b,ct);
c=fgetc(msg);
}
}




