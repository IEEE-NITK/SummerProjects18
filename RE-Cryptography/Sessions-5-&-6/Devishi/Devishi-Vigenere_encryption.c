#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{

FILE *msg2=fopen("Devishi-message-vigenere.txt","r");
FILE *ciph2=fopen("Devishi-vigenere-ciphertext.txt","w");
FILE *key=fopen("Devishi-vigenere-keyfile.txt","r");

if(!msg2)
{
printf("ERROR IN OPENING\n");
exit(1);
}

else if(!ciph2)
{
printf("ERROR IN OPENING\n");
exit(2);
}

else if(!key)
{
printf("ERROR IN OPENING\n");
exit(3);
}

char e,c,d,a,keytxt[50];
int i=0,j=0;

while((e = fgetc(key))!=EOF)
{
e=(e-'a'+1);
keytxt[j]=e;
j++;
}
keytxt[j-1]='\0';

while((c=fgetc(msg2))!=EOF)
{
if((isalpha(c))&&(keytxt[i]!='\0'))
{
if((c+keytxt[i])<='z')
{
d=c+keytxt[i];
fputc(d,ciph2);
}
else if((c+keytxt[i])>'z')
{
d=(((c+keytxt[i])-'z')+'a'-1);
fputc(d,ciph2);
}
}

else if((isalpha(c))&&(keytxt[i]=='\0'))
{
i=0;
if((c+keytxt[i])<='z')
{
d=c+keytxt[i];
fputc(d,ciph2);
}
else if((c+keytxt[i])>'z')
{
d=(((c+keytxt[i])-'z')+'a'-1);
fputc(d,ciph2);
}
}

else
{
fputc(c,ciph2);
}
i++;
}

fclose(msg2);
fclose(ciph2);
fclose(key);

return 0;
}
