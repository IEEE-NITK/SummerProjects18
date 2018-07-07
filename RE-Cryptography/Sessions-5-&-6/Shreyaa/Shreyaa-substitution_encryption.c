#include<stdio.h>
void main()
{
FILE *msg,*key,*ct;
msg=fopen("Shreyaa-substitution_message.txt","r");
key=fopen("Shreyaa-substitution_key.txt","r");
ct=fopen("Shreyaa-substitution_ciphertext.txt","w");
char k[26],c;
int i;
for(i=0;i<26;i++)
{
k[i]=fgetc(key);
}
while((c=fgetc(msg))!=EOF)
{
fprintf(ct,"%c",k[c-97]);
}
fclose(msg);
fclose(ct);
fclose(key);
}






