#include <stdio.h>

void main()
{
    char str[500];
    FILE* m = fopen("/home/akash/akash-message-caesar.txt","r");
    FILE* c = fopen("akash-caesar_ciphertext.txt","w");
    char ch;
    fseek(m,0,2);
    int size = ftell(m);
    rewind(m);
    while(ftell(m)<size-1)
    {
        fscanf(m,"%c",&ch);
        if(ch <= 119)
            fprintf(c,"%c",ch+3);
        else
            fprintf(c,"%c",ch+3-26);
    }
    fprintf(c,"%c",'\0');
    fclose(c);
    fclose(m);
}