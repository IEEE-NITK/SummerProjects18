#include<stdio.h>

void main()
{
    char str[500];
    FILE* m = fopen("/home/akash/akash-message-vigenere.txt","r");
    FILE* c = fopen("akash-vigenere_ciphertext.txt","w");
    int size;
    fseek(m,0,2);
    size = ftell(m);
    rewind(m);
    FILE* k = fopen("/home/akash/akash-key-vigenere.txt","r");
    fseek(k,0,2);
    int sizeofkey = ftell(k);
    rewind(k);
    while(ftell(m)<size-1)
    {
        char ch,key;
        fscanf(m,"%c",&ch);
        if(ch!=' '){
        fscanf(k,"%c",&key);
        if(ftell(k)==sizeofkey)
            fseek(k,0,0);
        ch+=key - 97;
        if(ch>122)
            fprintf(c,"%c",ch-26);
        else
            fprintf(c,"%c",ch);
        }
        else {
            fprintf(c,"%c",' ');
        }    
    }
    fclose(c);
    fclose(m);
    fclose(k);
    
}