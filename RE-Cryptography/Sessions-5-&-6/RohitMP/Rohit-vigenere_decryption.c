#include<stdio.h>
#include<ctype.h>
void main()
{
    FILE* input = fopen("/home/rohit/SummerProjects18/RE-Cryptography/Sessions-5-&-6/VarunKM/VarunKM-vigenere_ciphertext.txt","r");
    FILE* output = fopen("rohit-vigenere_decrypted.txt","w");
    FILE* key = fopen("/home/rohit/VarunKM-key-vigenere.txt","r");
    fseek(key,0,2);
    int length = ftell(key);
    fseek(key,0,0);
    fseek(input,0,2);
    int last = ftell(input);
    fseek(input,0,0);
    while(ftell(input)<last-1)
    {
        char ch;
        fscanf(input,"%c",&ch);
        if(!isalpha(ch))
        {
            fprintf(output,"%c",ch);
            continue;
        }
        char k;
        fscanf(key,"%c",&k);
        if(ftell(key)==length-1)
            fseek(key,0,0);
        int ch1 = ch;
        ch1=ch1-k+96;
        if(ch1<97)
            ch1+=26;
        fprintf(output,"%c",ch1);
    }
}
