#include <stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
    char str[500];
    FILE* d = fopen("akash-decrypt-caesar.txt","w");
    FILE* c = fopen("/home/akash/Downloads/krishna_ceaser_cipher.txt","r");
    char ch;
    fseek(c,0,2);
    int size = ftell(c);
    rewind(c);
    while(ftell(c)<size-1)
    {
        fscanf(c,"%c",&ch);
        if(ch!=' '){
            if(ch >= 102)
                fprintf(d,"%c",ch-5);
            else
                fprintf(d,"%c",ch+26-5);
        }
        else  {
            fprintf(d,"%c",' ');
        }
    }
    fprintf(c,"%c",'\0');
    fclose(c);
    fclose(d);
}