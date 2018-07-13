//Caesar Encryption

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
 FILE *msg=fopen("Devishi-message-caesar.txt","r");
 FILE *ciph=fopen("Devishi-caesar-ciphertext.txt","w");

 if(!msg)
 {
 printf("ERROR IN OPENING\n");
 exit(1);
 }

 else if(!ciph)
 {
 printf("ERROR IN OPENING\n");
 exit(2);
 }

 char c;
 int key=3;

 while((c=fgetc(msg))!=EOF)
 {
 if(isalpha(c))
 {
 if((c+key)<='z')
 {
 char d=c+key;
 fputc(d,ciph);
 }
 else if((c+key)>'z')
 {
 char a=(((c+key)-'z')+'a'-1);
 fputc(a,ciph);
 }
 }
 else
 {
 fputc(c,ciph);
 }
 }
 fclose(msg);
 fclose(ciph);

 return 0;
}
