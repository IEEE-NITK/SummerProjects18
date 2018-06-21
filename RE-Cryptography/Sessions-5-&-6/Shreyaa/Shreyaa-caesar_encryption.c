#include<stdio.h>
#include<ctype.h>
void main()
{
FILE *msg,*ct;
msg = fopen("Shreyaa-caesar_message.txt","r");
ct = fopen("Shreyaa-caesar_ciphertext.txt","w");
char c,b;
while((c=fgetc(msg))!=EOF)
{
if(isalpha(c))
{
b=c+2;
if(b>122)
{b=b-26;}
}
else
{
b=c;
}
fputc(b,ct);
}
}




















