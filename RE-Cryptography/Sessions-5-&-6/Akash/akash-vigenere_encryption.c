#include<stdio.h>
#include<ctype.h>

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
        if(isalpha(ch)){
            ch=tolower(ch);
            fscanf(k,"%c",&key);
            if(ftell(k)==sizeofkey-1)
                fseek(k,0,0);
            ch=ch-96;
            key=key-96;
            ch=ch+key;
            if (ch>26)
                ch=ch%26;
            ch = 96+ch;
            fprintf(c,"%c",ch);
        } else {
            fprintf(c,"%c",ch);
        }    
    }
    fclose(c);
    fclose(m);
    fclose(k);
    
}