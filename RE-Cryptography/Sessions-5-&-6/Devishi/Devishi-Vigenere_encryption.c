#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{

FILE *msg2=fopen("Devishi-message-vigenere.txt","r");
FILE *ciph2=fopen("Devishi-vigenere-ciphertext.txt","w");
FILE *key=fopen("Devishi-vigenere-keyfile.txt","r");

char e,c,a,keytxt[6],message[14],cipher[14];
int i=0,j=0,y=0,n,d;

while((e = fgetc(key))!=EOF)
{
keytxt[j]=e;
j++;
}
keytxt[j-1]='\0';

while((c=fgetc(msg2))!=EOF)
{
message[i]=c;
i++;
}
message[i-1]='\0';
//Cipher
j=0;
for(int k=0,n=strlen(keytxt);message[k]!='\0';k++,j++,y++)
{
if(j==n)
{
j=0;
}
if(isalpha(message[k]))
{
d=(message[k]-192+keytxt[j]);
if(d>26)
{
d=d%26;
}
cipher[y]=d+96;

}
else
{
cipher[y]=message[k];
j--;
}
}
cipher[13]='\0';
fprintf(ciph2,"%s",cipher);

fclose(msg2);
fclose(ciph2);
fclose(key);

return 0;
}
