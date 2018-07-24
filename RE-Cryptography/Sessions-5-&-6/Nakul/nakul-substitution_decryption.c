#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
char ct[1000],pt[1000],k[26];

FILE *f1;
f1=fopen("akash-substitution_ciphertext.txt","r");
 if(f1==NULL)
   {
    printf("can't access file\n");
    exit(0);
   }
fgets(ct,1000,f1);
fclose(f1);


FILE *fk;
fk=fopen("akash-substitution_key.txt","r");
if(fk==NULL)
 {printf("can't access file\n");
  exit(0);
 }
fgets(k,27,fk);
fclose(fk);

printf("%s\n",k);
int i;
for(i=0;ct[i]!='\0';i++)
  {if(ct[i]>=97&&ct[i]<=122)
   { int a;
     char c=ct[i];
     for(a=0;c!=k[a];a++)
        pt[i]=97+a;
   }
  else
   pt[i]=ct[i];
}

printf("%s\n",pt);
FILE *f2;
f2=fopen("nakul-substitution_decrypted.txt","w");
if(f2==NULL)
 {printf("can't access file\n");
  exit(0);
 }
fputs(pt,f2);
fclose(f2);
}
