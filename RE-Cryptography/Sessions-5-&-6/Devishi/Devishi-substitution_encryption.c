#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
 FILE *msg3=fopen("Devishi-message-substitution.txt","r");
 FILE *ciph3=fopen("Devishi-substitution-ciphertext.txt","w");
 FILE *key3=fopen("Devishi-substitution-keytext.txt","r");
 if(!msg3)
 {
 printf("ERROR IN OPENING\n");
 exit(1);
 }

 else if(!ciph3)
 {
 printf("ERROR IN OPENING\n");
 exit(2);
 }

 char c,w,keyf[11];
 int y=0;
 while((w=fgetc(key3))!=EOF)
 {
 keyf[y]=w;
 y++;
 }
 
 while((c=fgetc(msg3))!=EOF)
 { 
 char k=c-'a';
 int v= (int)k;
 int g=v%10;
 
 char n=c+keyf[g];
 
 fprintf(ciph3,"%c",n);
 }
 
 fclose(msg3);
 fclose(ciph3);
 fclose(key3);

 return 0;
}
