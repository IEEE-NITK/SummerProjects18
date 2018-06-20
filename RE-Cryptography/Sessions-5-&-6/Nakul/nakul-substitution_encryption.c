#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
char ct[1000],pt[1000];
FILE *f1;
f1=fopen("nakul-substitution_message.txt","r");
if(f1==NULL)
 {printf("can't access file\n");
  exit(0);
 }
fgets(pt,1000,f1);
fclose(f1);

int i;
for(i=0;pt[i]!='\0';i++)
{
  if(pt[i]<='n')
     ct[i]=pt[i]+13;
  else
     ct[i]=pt[i]-13;
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
