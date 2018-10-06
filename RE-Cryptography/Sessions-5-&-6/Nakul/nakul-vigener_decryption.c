#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
char ct[1000],pt[1000],key[1000],k[1000];
FILE *f1,*fp,*f2;

f1=fopen("akash-vigener_ciphertext.txt","r");
if(f1==NULL)
 {printf("can't access file\n");
  exit(0);
 }
fgets(pt,1000,f1);
fseek(f1,0,2);
long int len=ftell(f1);


fp=fopen("akash-vigener_keyfile.txt","r");
if(fp==NULL)
 {printf("can't access file\n");
  exit(0);
 }
fgets(k,1000,fp);
int i,j;
int key_length=strlen(k);
for(i=0,j=0;i<len;i++,j++)
   {if(j == key_length-1)
       j = 0;
    key[i] = k[j];
   }
key[i] = '\0';


for(j=0;pt[j]!='\0';j++)
 {
  if(pt[j]>=97&&pt[j]<=122)
   { pt[j]-=97;
     key[j]-=97;
     ct[j]=(pt[j]-key[j]+26)%26 +97;
   }
  else
    ct[j]=pt[j];
 }


f2=fopen("nakul-vigener_decrypted.txt","w");
if(f2==NULL)
 {printf("can't access file\n");
  exit(0);
 }
fputs(ct,f2);
fclose(fp);
fclose(f2);
fclose(f1);
}
