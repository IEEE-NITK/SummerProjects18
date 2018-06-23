#include<stdio.h>

void main()
{
    char str[300];
    FILE* input = fopen("/home/rohit/rohit-message-vigenere.txt","r");
    FILE* output = fopen("rohit-vigenere_ciphertext.txt","w");
    int last;
    fseek(input,0,2);
    last=ftell(input);
    fseek(input,0,0);
    FILE* key = fopen("/home/rohit/rohit-key-vigenere.txt","r");
    fseek(key,0,2);
    int length = ftell(key);
    fseek(key,0,0);
    while(ftell(input)<last-1)
    {
        char ch,k;
        fscanf(input,"%c",&ch);
        if(ch==' ')
        {
            fprintf(output," ");
            continue;
        }
        fscanf(key,"%c",&k);
        if(ftell(key)==length-1)
            fseek(key,0,0);
        int character;
        character = ch;
        character+=k-96;
        if(character>122)
            fprintf(output,"%c",character-26);
        else
            fprintf(output,"%c",character);    
    }
}
