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


 char c,w,keyf[4],msg[9],ciph[9],pciph[9];

 int y=0;

//Storing the key in an array

 while((w=fgetc(key3))!=EOF)
 {

  keyf[y]=w;
  y++;

 }

 keyf[3]='\0';

 y=0;

 //Storing the message in an array


 while((c=fgetc(msg3))!=EOF)
 { 
   msg[y]=c;
   y++;
 }

 msg[8]='\0';
 
 y=0;


 for(int i=0;i<7;i++,y++)
 {
  
   if(y==3)
    {
      y=0;
    }
 
 //The code for encrypting 

   pciph[i]=(msg[i]-msg[i+1]+keyf[y]);
 
   if(pciph[i]>'Z')
   {
     ciph[i]=((pciph[i]-'Z')+'A'-1);
   }

   else
   {
     ciph[i]=pciph[i];
   }
  
}
 ciph[7]=msg[7];
 ciph[8]='\0';
 fprintf(ciph3,"%s",ciph);

 fclose(msg3);
 fclose(ciph3);
 fclose(key3);

 return 0;
}
