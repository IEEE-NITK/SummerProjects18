#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
char ct[1000],pt[1000],key[1000],k[100];
FILE *f1,*fp,*f2;

f1=fopen("nakul-vigener_message.txt","r");
if(f1==NULL)
 {printf("can't access file\n");
  exit(0);
 }
fgets(pt,1000,f1);
fclose(f1);


fp=fopen("nakul-vigener_keyfile.txt","r");
if(fp==NULL)
 {printf("can't access file\n");
  exit(0);
 }
fgets(k,1000,fp);
fclose(fp);


int i,j,n=strlen(k);
for(i=0,j=0;i<strlen(pt);i++,j++)
  {if(j==n)
     j=0;
   key[i]=k[j];
  }


for(j=0;pt[j]!='\0';j++)
 {
  if(pt[j]>=97&&pt[j]<=122) 
   { pt[j]-=97;
     key[j]-=97;
     ct[j]=(pt[j]+key[j])%26 +97;
   }
  else
    ct[j]=pt[j];
 }


f2=fopen("nakul-vigener_ciphertext.txt","w");
if(f2==NULL)
 {printf("can't access file\n");
  exit(0);
 }
fputs(ct,f2);
fclose(f2);
}
