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
 char c,w,keyf[4],msg[9],p[9];
 int y=0,ciph[9],pciph[9];
 while((w=fgetc(key3))!=EOF)
 {
 keyf[y]=w;
 y++;
 }
 keyf[3]='\0';
 y=0;
 puts(keyf);
 while((c=fgetc(msg3))!=EOF)
 { 
 msg[y]=c;
 y++;
 }
 msg[8]='\0';
 puts(msg);
 y=0;
 for(int i=0;i<7;i++,y++)
 {
 if(y==3)
 {y=0;}
 pciph[i]=(msg[i]-'A');
 ciph[i]= keyf[y]+pciph[i];
}

 for(int j=0;j<7;j++)
{
 fprintf(ciph3,"%d 9",ciph[j]);
}
 fclose(msg3);
 fclose(ciph3);
 fclose(key3);

 return 0;
}
