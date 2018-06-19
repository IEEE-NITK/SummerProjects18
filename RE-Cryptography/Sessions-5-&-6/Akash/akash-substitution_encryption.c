#include<stdio.h>

void main()
{
    char str[20];
    FILE* m = fopen("/home/akash/akash-message-substitution.txt","r");
    FILE* c = fopen("akash-substitution_ciphertext.txt","w");
    fseek(m,0,2);
    int size = ftell(m);
    rewind(m);
    while(ftell(m)<size-1)
    {
        char ch;
        fscanf(m,"%c",&ch);
        if ((ch >= 'a') && (ch <= 'z')){
            ch -= 'a'; 
            fprintf(c,"%c",((ch + 5) % 26) + 'a');
            }
    }
    fprintf(c,"%c",'\0');
    fclose(c);
    fclose(m);
}