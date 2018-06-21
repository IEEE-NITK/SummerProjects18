#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE* input  = fopen("/home/rohit/SummerProjects18/RE-Cryptography/Sessions-5-&-6/VarunKM/VarunKM-caesar_ciphertext.txt","r");
    FILE* output = fopen("rohit-caesar_decrypted.txt","w");
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
        ch-=7;
        if(ch<97)
            ch+=26;
        fprintf(output,"%c",ch);
    }
}
