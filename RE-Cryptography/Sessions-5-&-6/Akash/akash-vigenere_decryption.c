#include<stdio.h>
#include<ctype.h>

void main()
{
    char str[500];
    FILE* d = fopen("akash-decrypt-vigenere.txt","w");
    FILE* c = fopen("/home/akash/SummerProjects18/RE-Cryptography/Sessions-5-&-6/Saurabh/saurabh-vigenere_ciphertext.txt","r");
    int size;
    fseek(c,0,2);
    size = ftell(c);
    rewind(c);
    FILE* k = fopen("/home/akash/Downloads/saurabh-vigener_key.txt","r");
    fseek(k,0,2);
    int sizeofkey = ftell(k);
    rewind(k);
    while(ftell(c)<size-1)
    {
        char ch,key;
        fscanf(c,"%c",&ch);
        if(isalpha(ch)){
            fscanf(k,"%c",&key);
            if(ftell(k)==sizeofkey)
                fseek(k,0,0);
            ch = ch - key;
            if(ch<=0)
                ch=ch+26;
            ch = ch + 96;
            fprintf(d,"%c",ch);
        } else {
            fprintf(d,"%c",ch);
        }    
    }
    fclose(c);
    fclose(d);
    fclose(k);
    
}