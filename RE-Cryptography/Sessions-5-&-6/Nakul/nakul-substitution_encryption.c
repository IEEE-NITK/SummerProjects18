#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
char ct[1000],pt[1000],k[26];
FILE *f1;
f1=fopen("nakul-substitution_message.txt","r");
if(f1==NULL)
 {printf("can't access file\n");
  exit(0);
 }
fgets(pt,1000,f1);
fclose(f1);

FILE *fk;
fk=fopen("nakul-substitution_Key.txt","r");
if(fk==NULL)
 {printf("can't access file\n");
  exit(0);
 }
fgets(k,26,fk);
fclose(fk);

int i;
for(i=0;pt[i]!='\0';i++)
{ if(pt[i]>=97&&pt[i]<=122)
   { int a =pt[i]-97;
     ct[i]=k[a];
   }
  else
   ct[i]=pt[i];
}

FILE *f2;
f2=fopen("nakul-substitution_ciphertext.txt","w");
if(f2==NULL)
 {printf("can't access file\n");
  exit(0);
 }
fputs(ct,f2);
fclose(f2);
}
